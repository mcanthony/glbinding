#include "context.h"

#include <iostream>

#include <unistd.h>

//#include <EGL/egl.h>

#include <eglbinding/egl/egl.h>
#include <eglbinding/Binding.h>
#include <eglbinding/ContextInfo.h>
#include <eglbinding/Version.h>

#include "rendergl.h"
#include "rendergles.h"

using namespace std;
using namespace egl;

namespace
{

EGLDisplay egl_display;
EGLContext egl_context;
EGLSurface egl_surface;

}

void initializeDisplay()
{
    eglbinding::Binding::initialize();

    egl_display  =  eglGetDisplay( (EGLNativeDisplayType) EGL_DEFAULT_DISPLAY );
    if (egl_display == nullptr)
    {
       cerr << "Got no EGL display." << endl;
       return;
    }

    EGLint maj;
    EGLint min;
    if (!eglInitialize( egl_display, &maj, &min ))
    {
       cerr << "Unable to initialize EGL" << endl;
       return;
    }

    std::cout << "Initialized EGL " << maj << "." << min << std::endl;
}

void uninitializeDisplay()
{
    eglTerminate(egl_display);

    eglbinding::Binding::releaseCurrentContext();
}

void createGLContext(EGLWindow window)
{
    std::cout << "Render using OpenGL" << std::endl;

    EGLint attr[] = {       // some attributes to set up our egl-interface
      static_cast<EGLint>(EGL_BUFFER_SIZE), 16,
      static_cast<EGLint>(EGL_RENDERABLE_TYPE), static_cast<EGLint>(EGL_OPENGL_BIT),
      static_cast<EGLint>(EGL_NONE)
    };

   EGLConfig  ecfg;
   EGLint     num_config;
   if ( !eglChooseConfig( egl_display, attr, &ecfg, 1, &num_config ) ) {
      cerr << "Failed to choose config (eglError: " << std::hex << eglGetError() << ")" << endl;
      return;
   }

   if ( num_config != 1 ) {
      cerr << "Didn't get exactly one config, but " << num_config << endl;
      return;
   }

   egl_surface = eglCreateWindowSurface ( egl_display, ecfg, window, nullptr );
   if ( egl_surface == nullptr) { // EGL_NO_SURFACE
      cerr << "Unable to create EGL surface (eglError: " << std::hex << eglGetError() << ")" << endl;
      return;
   }

   //// egl-contexts collect all state descriptions needed required for operation
   EGLint ctxattr[] = {
      static_cast<EGLint>(EGL_CONTEXT_MAJOR_VERSION_KHR), 2,
      static_cast<EGLint>(EGL_CONTEXT_MINOR_VERSION_KHR), 1,
      static_cast<EGLint>(EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR), static_cast<EGLint>(EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR),
      static_cast<EGLint>(EGL_NONE)
   };

   eglBindAPI(EGL_OPENGL_API);
   egl_context = eglCreateContext(egl_display, ecfg, nullptr, ctxattr ); // EGL_NO_CONTEXT
   if ( egl_context == nullptr ) { // EGL_NO_CONTEXT
      cerr << "Unable to create EGL context (eglError: " << std::hex << eglGetError() << ")" << endl;
      return;
   }
}

void createGLESContext(EGLWindow window)
{
    std::cout << "Render using OpenGL ES" << std::endl;

    EGLint attr[] = {       // some attributes to set up our egl-interface
      static_cast<EGLint>(EGL_BUFFER_SIZE), 16,
      static_cast<EGLint>(EGL_RENDERABLE_TYPE), static_cast<EGLint>(EGL_OPENGL_ES3_BIT),
      static_cast<EGLint>(EGL_NONE)
   };

   EGLConfig  ecfg;
   EGLint     num_config;
   if ( !eglChooseConfig( egl_display, attr, &ecfg, 1, &num_config ) ) {
      cerr << "Failed to choose config (eglError: " << std::hex << eglGetError() << ")" << endl;
      return;
   }

   if ( num_config != 1 ) {
      cerr << "Didn't get exactly one config, but " << num_config << endl;
      return;
   }

   egl_surface = eglCreateWindowSurface ( egl_display, ecfg, window, nullptr );
   if ( egl_surface == nullptr) { // EGL_NO_SURFACE
      cerr << "Unable to create EGL surface (eglError: " << std::hex << eglGetError() << ")" << endl;
      return;
   }

    EGLint ctxattr[] = {
       static_cast<EGLint>(EGL_CONTEXT_CLIENT_VERSION), 3,
       static_cast<EGLint>(EGL_NONE)
    };

    eglBindAPI(EGL_OPENGL_ES_API);
    egl_context = eglCreateContext ( egl_display, ecfg, nullptr, ctxattr ); // EGL_NO_CONTEXT
    if ( egl_context == nullptr ) { // EGL_NO_CONTEXT
       cerr << "Unable to create EGL context (eglError: " << std::hex << eglGetError() << ")" << endl;
       return;
    }
}

void makeCurrent()
{
    eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
}

void doneCurrent()
{
    eglMakeCurrent(egl_display, nullptr, nullptr, nullptr);
}

void swapBuffers()
{
    eglSwapBuffers(egl_display, egl_surface);
}

void releaseContext()
{
    eglDestroyContext ( egl_display, egl_context );
    eglDestroySurface ( egl_display, egl_surface );
}