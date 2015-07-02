
#include "Meta_Maps.h"

#include <eglbinding/egl/enum.h>


using namespace egl;

namespace eglbinding
{

const std::unordered_map<std::string, EGLenum> Meta_EnumsByString
{
#ifdef SYMBOLS_BY_STRINGS
    { "EGL_DONT_CARE", EGLenum::EGL_DONT_CARE },
    { "EGL_NO_FILE_DESCRIPTOR_KHR", EGLenum::EGL_NO_FILE_DESCRIPTOR_KHR },
    { "EGL_NO_NATIVE_FENCE_FD_ANDROID", EGLenum::EGL_NO_NATIVE_FENCE_FD_ANDROID },
    { "EGL_UNKNOWN", EGLenum::EGL_UNKNOWN },
    { "EGL_DEFAULT_DISPLAY", EGLenum::EGL_DEFAULT_DISPLAY },
    { "EGL_DEPTH_ENCODING_NONE_NV", EGLenum::EGL_DEPTH_ENCODING_NONE_NV },
    { "EGL_NO_CONTEXT", EGLenum::EGL_NO_CONTEXT },
    { "EGL_NO_DEVICE_EXT", EGLenum::EGL_NO_DEVICE_EXT },
    { "EGL_NO_DISPLAY", EGLenum::EGL_NO_DISPLAY },
    { "EGL_NO_IMAGE", EGLenum::EGL_NO_IMAGE },
    { "EGL_NO_IMAGE_KHR", EGLenum::EGL_NO_IMAGE_KHR },
    { "EGL_NO_OUTPUT_LAYER_EXT", EGLenum::EGL_NO_OUTPUT_LAYER_EXT },
    { "EGL_NO_OUTPUT_PORT_EXT", EGLenum::EGL_NO_OUTPUT_PORT_EXT },
    { "EGL_NO_STREAM_KHR", EGLenum::EGL_NO_STREAM_KHR },
    { "EGL_NO_SURFACE", EGLenum::EGL_NO_SURFACE },
    { "EGL_NO_SYNC", EGLenum::EGL_NO_SYNC },
    { "EGL_NO_SYNC_KHR", EGLenum::EGL_NO_SYNC_KHR },
    { "EGL_NO_SYNC_NV", EGLenum::EGL_NO_SYNC_NV },
    { "EGL_SUCCESS", EGLenum::EGL_SUCCESS },
    { "EGL_NOT_INITIALIZED", EGLenum::EGL_NOT_INITIALIZED },
    { "EGL_BAD_ACCESS", EGLenum::EGL_BAD_ACCESS },
    { "EGL_BAD_ALLOC", EGLenum::EGL_BAD_ALLOC },
    { "EGL_BAD_ATTRIBUTE", EGLenum::EGL_BAD_ATTRIBUTE },
    { "EGL_BAD_CONFIG", EGLenum::EGL_BAD_CONFIG },
    { "EGL_BAD_CONTEXT", EGLenum::EGL_BAD_CONTEXT },
    { "EGL_BAD_CURRENT_SURFACE", EGLenum::EGL_BAD_CURRENT_SURFACE },
    { "EGL_BAD_DISPLAY", EGLenum::EGL_BAD_DISPLAY },
    { "EGL_BAD_MATCH", EGLenum::EGL_BAD_MATCH },
    { "EGL_BAD_NATIVE_PIXMAP", EGLenum::EGL_BAD_NATIVE_PIXMAP },
    { "EGL_BAD_NATIVE_WINDOW", EGLenum::EGL_BAD_NATIVE_WINDOW },
    { "EGL_BAD_PARAMETER", EGLenum::EGL_BAD_PARAMETER },
    { "EGL_BAD_SURFACE", EGLenum::EGL_BAD_SURFACE },
    { "EGL_CONTEXT_LOST", EGLenum::EGL_CONTEXT_LOST },
    { "EGL_BUFFER_SIZE", EGLenum::EGL_BUFFER_SIZE },
    { "EGL_ALPHA_SIZE", EGLenum::EGL_ALPHA_SIZE },
    { "EGL_BLUE_SIZE", EGLenum::EGL_BLUE_SIZE },
    { "EGL_GREEN_SIZE", EGLenum::EGL_GREEN_SIZE },
    { "EGL_RED_SIZE", EGLenum::EGL_RED_SIZE },
    { "EGL_DEPTH_SIZE", EGLenum::EGL_DEPTH_SIZE },
    { "EGL_STENCIL_SIZE", EGLenum::EGL_STENCIL_SIZE },
    { "EGL_CONFIG_CAVEAT", EGLenum::EGL_CONFIG_CAVEAT },
    { "EGL_CONFIG_ID", EGLenum::EGL_CONFIG_ID },
    { "EGL_LEVEL", EGLenum::EGL_LEVEL },
    { "EGL_MAX_PBUFFER_HEIGHT", EGLenum::EGL_MAX_PBUFFER_HEIGHT },
    { "EGL_MAX_PBUFFER_PIXELS", EGLenum::EGL_MAX_PBUFFER_PIXELS },
    { "EGL_MAX_PBUFFER_WIDTH", EGLenum::EGL_MAX_PBUFFER_WIDTH },
    { "EGL_NATIVE_RENDERABLE", EGLenum::EGL_NATIVE_RENDERABLE },
    { "EGL_NATIVE_VISUAL_ID", EGLenum::EGL_NATIVE_VISUAL_ID },
    { "EGL_NATIVE_VISUAL_TYPE", EGLenum::EGL_NATIVE_VISUAL_TYPE },
    { "EGL_SAMPLES", EGLenum::EGL_SAMPLES },
    { "EGL_SAMPLE_BUFFERS", EGLenum::EGL_SAMPLE_BUFFERS },
    { "EGL_SURFACE_TYPE", EGLenum::EGL_SURFACE_TYPE },
    { "EGL_TRANSPARENT_TYPE", EGLenum::EGL_TRANSPARENT_TYPE },
    { "EGL_TRANSPARENT_BLUE_VALUE", EGLenum::EGL_TRANSPARENT_BLUE_VALUE },
    { "EGL_TRANSPARENT_GREEN_VALUE", EGLenum::EGL_TRANSPARENT_GREEN_VALUE },
    { "EGL_TRANSPARENT_RED_VALUE", EGLenum::EGL_TRANSPARENT_RED_VALUE },
    { "EGL_NONE", EGLenum::EGL_NONE },
    { "EGL_BIND_TO_TEXTURE_RGB", EGLenum::EGL_BIND_TO_TEXTURE_RGB },
    { "EGL_BIND_TO_TEXTURE_RGBA", EGLenum::EGL_BIND_TO_TEXTURE_RGBA },
    { "EGL_MIN_SWAP_INTERVAL", EGLenum::EGL_MIN_SWAP_INTERVAL },
    { "EGL_MAX_SWAP_INTERVAL", EGLenum::EGL_MAX_SWAP_INTERVAL },
    { "EGL_LUMINANCE_SIZE", EGLenum::EGL_LUMINANCE_SIZE },
    { "EGL_ALPHA_MASK_SIZE", EGLenum::EGL_ALPHA_MASK_SIZE },
    { "EGL_COLOR_BUFFER_TYPE", EGLenum::EGL_COLOR_BUFFER_TYPE },
    { "EGL_RENDERABLE_TYPE", EGLenum::EGL_RENDERABLE_TYPE },
    { "EGL_MATCH_NATIVE_PIXMAP", EGLenum::EGL_MATCH_NATIVE_PIXMAP },
    { "EGL_CONFORMANT", EGLenum::EGL_CONFORMANT },
    { "EGL_CONFORMANT_KHR", EGLenum::EGL_CONFORMANT_KHR },
    { "EGL_MATCH_FORMAT_KHR", EGLenum::EGL_MATCH_FORMAT_KHR },
    { "EGL_SLOW_CONFIG", EGLenum::EGL_SLOW_CONFIG },
    { "EGL_NON_CONFORMANT_CONFIG", EGLenum::EGL_NON_CONFORMANT_CONFIG },
    { "EGL_TRANSPARENT_RGB", EGLenum::EGL_TRANSPARENT_RGB },
    { "EGL_VENDOR", EGLenum::EGL_VENDOR },
    { "EGL_VERSION", EGLenum::EGL_VERSION },
    { "EGL_EXTENSIONS", EGLenum::EGL_EXTENSIONS },
    { "EGL_HEIGHT", EGLenum::EGL_HEIGHT },
    { "EGL_WIDTH", EGLenum::EGL_WIDTH },
    { "EGL_LARGEST_PBUFFER", EGLenum::EGL_LARGEST_PBUFFER },
    { "EGL_DRAW", EGLenum::EGL_DRAW },
    { "EGL_READ", EGLenum::EGL_READ },
    { "EGL_CORE_NATIVE_ENGINE", EGLenum::EGL_CORE_NATIVE_ENGINE },
    { "EGL_NO_TEXTURE", EGLenum::EGL_NO_TEXTURE },
    { "EGL_TEXTURE_RGB", EGLenum::EGL_TEXTURE_RGB },
    { "EGL_TEXTURE_RGBA", EGLenum::EGL_TEXTURE_RGBA },
    { "EGL_TEXTURE_2D", EGLenum::EGL_TEXTURE_2D },
    { "EGL_Y_INVERTED_NOK", EGLenum::EGL_Y_INVERTED_NOK },
    { "EGL_TEXTURE_FORMAT", EGLenum::EGL_TEXTURE_FORMAT },
    { "EGL_TEXTURE_TARGET", EGLenum::EGL_TEXTURE_TARGET },
    { "EGL_MIPMAP_TEXTURE", EGLenum::EGL_MIPMAP_TEXTURE },
    { "EGL_MIPMAP_LEVEL", EGLenum::EGL_MIPMAP_LEVEL },
    { "EGL_BACK_BUFFER", EGLenum::EGL_BACK_BUFFER },
    { "EGL_SINGLE_BUFFER", EGLenum::EGL_SINGLE_BUFFER },
    { "EGL_RENDER_BUFFER", EGLenum::EGL_RENDER_BUFFER },
    { "EGL_COLORSPACE", EGLenum::EGL_COLORSPACE },
    { "EGL_VG_COLORSPACE", EGLenum::EGL_VG_COLORSPACE },
    { "EGL_ALPHA_FORMAT", EGLenum::EGL_ALPHA_FORMAT },
    { "EGL_VG_ALPHA_FORMAT", EGLenum::EGL_VG_ALPHA_FORMAT },
    { "EGL_COLORSPACE_sRGB", EGLenum::EGL_COLORSPACE_sRGB },
    { "EGL_GL_COLORSPACE_SRGB", EGLenum::EGL_GL_COLORSPACE_SRGB },
    { "EGL_GL_COLORSPACE_SRGB_KHR", EGLenum::EGL_GL_COLORSPACE_SRGB_KHR },
    { "EGL_VG_COLORSPACE_sRGB", EGLenum::EGL_VG_COLORSPACE_sRGB },
    { "EGL_COLORSPACE_LINEAR", EGLenum::EGL_COLORSPACE_LINEAR },
    { "EGL_GL_COLORSPACE_LINEAR", EGLenum::EGL_GL_COLORSPACE_LINEAR },
    { "EGL_GL_COLORSPACE_LINEAR_KHR", EGLenum::EGL_GL_COLORSPACE_LINEAR_KHR },
    { "EGL_VG_COLORSPACE_LINEAR", EGLenum::EGL_VG_COLORSPACE_LINEAR },
    { "EGL_ALPHA_FORMAT_NONPRE", EGLenum::EGL_ALPHA_FORMAT_NONPRE },
    { "EGL_VG_ALPHA_FORMAT_NONPRE", EGLenum::EGL_VG_ALPHA_FORMAT_NONPRE },
    { "EGL_ALPHA_FORMAT_PRE", EGLenum::EGL_ALPHA_FORMAT_PRE },
    { "EGL_VG_ALPHA_FORMAT_PRE", EGLenum::EGL_VG_ALPHA_FORMAT_PRE },
    { "EGL_CLIENT_APIS", EGLenum::EGL_CLIENT_APIS },
    { "EGL_RGB_BUFFER", EGLenum::EGL_RGB_BUFFER },
    { "EGL_LUMINANCE_BUFFER", EGLenum::EGL_LUMINANCE_BUFFER },
    { "EGL_HORIZONTAL_RESOLUTION", EGLenum::EGL_HORIZONTAL_RESOLUTION },
    { "EGL_VERTICAL_RESOLUTION", EGLenum::EGL_VERTICAL_RESOLUTION },
    { "EGL_PIXEL_ASPECT_RATIO", EGLenum::EGL_PIXEL_ASPECT_RATIO },
    { "EGL_SWAP_BEHAVIOR", EGLenum::EGL_SWAP_BEHAVIOR },
    { "EGL_BUFFER_PRESERVED", EGLenum::EGL_BUFFER_PRESERVED },
    { "EGL_BUFFER_DESTROYED", EGLenum::EGL_BUFFER_DESTROYED },
    { "EGL_OPENVG_IMAGE", EGLenum::EGL_OPENVG_IMAGE },
    { "EGL_CONTEXT_CLIENT_TYPE", EGLenum::EGL_CONTEXT_CLIENT_TYPE },
    { "EGL_CONTEXT_CLIENT_VERSION", EGLenum::EGL_CONTEXT_CLIENT_VERSION },
    { "EGL_CONTEXT_MAJOR_VERSION", EGLenum::EGL_CONTEXT_MAJOR_VERSION },
    { "EGL_CONTEXT_MAJOR_VERSION_KHR", EGLenum::EGL_CONTEXT_MAJOR_VERSION_KHR },
    { "EGL_MULTISAMPLE_RESOLVE", EGLenum::EGL_MULTISAMPLE_RESOLVE },
    { "EGL_MULTISAMPLE_RESOLVE_DEFAULT", EGLenum::EGL_MULTISAMPLE_RESOLVE_DEFAULT },
    { "EGL_MULTISAMPLE_RESOLVE_BOX", EGLenum::EGL_MULTISAMPLE_RESOLVE_BOX },
    { "EGL_CL_EVENT_HANDLE", EGLenum::EGL_CL_EVENT_HANDLE },
    { "EGL_CL_EVENT_HANDLE_KHR", EGLenum::EGL_CL_EVENT_HANDLE_KHR },
    { "EGL_GL_COLORSPACE", EGLenum::EGL_GL_COLORSPACE },
    { "EGL_GL_COLORSPACE_KHR", EGLenum::EGL_GL_COLORSPACE_KHR },
    { "EGL_OPENGL_ES_API", EGLenum::EGL_OPENGL_ES_API },
    { "EGL_OPENVG_API", EGLenum::EGL_OPENVG_API },
    { "EGL_OPENGL_API", EGLenum::EGL_OPENGL_API },
    { "EGL_NATIVE_PIXMAP_KHR", EGLenum::EGL_NATIVE_PIXMAP_KHR },
    { "EGL_GL_TEXTURE_2D", EGLenum::EGL_GL_TEXTURE_2D },
    { "EGL_GL_TEXTURE_2D_KHR", EGLenum::EGL_GL_TEXTURE_2D_KHR },
    { "EGL_GL_TEXTURE_3D", EGLenum::EGL_GL_TEXTURE_3D },
    { "EGL_GL_TEXTURE_3D_KHR", EGLenum::EGL_GL_TEXTURE_3D_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z },
    { "EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z },
    { "EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR", EGLenum::EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR },
    { "EGL_GL_RENDERBUFFER", EGLenum::EGL_GL_RENDERBUFFER },
    { "EGL_GL_RENDERBUFFER_KHR", EGLenum::EGL_GL_RENDERBUFFER_KHR },
    { "EGL_VG_PARENT_IMAGE_KHR", EGLenum::EGL_VG_PARENT_IMAGE_KHR },
    { "EGL_GL_TEXTURE_LEVEL", EGLenum::EGL_GL_TEXTURE_LEVEL },
    { "EGL_GL_TEXTURE_LEVEL_KHR", EGLenum::EGL_GL_TEXTURE_LEVEL_KHR },
    { "EGL_GL_TEXTURE_ZOFFSET", EGLenum::EGL_GL_TEXTURE_ZOFFSET },
    { "EGL_GL_TEXTURE_ZOFFSET_KHR", EGLenum::EGL_GL_TEXTURE_ZOFFSET_KHR },
    { "EGL_POST_SUB_BUFFER_SUPPORTED_NV", EGLenum::EGL_POST_SUB_BUFFER_SUPPORTED_NV },
    { "EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT", EGLenum::EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT },
    { "EGL_FORMAT_RGB_565_EXACT_KHR", EGLenum::EGL_FORMAT_RGB_565_EXACT_KHR },
    { "EGL_FORMAT_RGB_565_KHR", EGLenum::EGL_FORMAT_RGB_565_KHR },
    { "EGL_FORMAT_RGBA_8888_EXACT_KHR", EGLenum::EGL_FORMAT_RGBA_8888_EXACT_KHR },
    { "EGL_FORMAT_RGBA_8888_KHR", EGLenum::EGL_FORMAT_RGBA_8888_KHR },
    { "EGL_MAP_PRESERVE_PIXELS_KHR", EGLenum::EGL_MAP_PRESERVE_PIXELS_KHR },
    { "EGL_LOCK_USAGE_HINT_KHR", EGLenum::EGL_LOCK_USAGE_HINT_KHR },
    { "EGL_BITMAP_POINTER_KHR", EGLenum::EGL_BITMAP_POINTER_KHR },
    { "EGL_BITMAP_PITCH_KHR", EGLenum::EGL_BITMAP_PITCH_KHR },
    { "EGL_BITMAP_ORIGIN_KHR", EGLenum::EGL_BITMAP_ORIGIN_KHR },
    { "EGL_BITMAP_PIXEL_RED_OFFSET_KHR", EGLenum::EGL_BITMAP_PIXEL_RED_OFFSET_KHR },
    { "EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR", EGLenum::EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR },
    { "EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR", EGLenum::EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR },
    { "EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR", EGLenum::EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR },
    { "EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR", EGLenum::EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR },
    { "EGL_LOWER_LEFT_KHR", EGLenum::EGL_LOWER_LEFT_KHR },
    { "EGL_UPPER_LEFT_KHR", EGLenum::EGL_UPPER_LEFT_KHR },
    { "EGL_IMAGE_PRESERVED", EGLenum::EGL_IMAGE_PRESERVED },
    { "EGL_IMAGE_PRESERVED_KHR", EGLenum::EGL_IMAGE_PRESERVED_KHR },
    { "EGL_COVERAGE_BUFFERS_NV", EGLenum::EGL_COVERAGE_BUFFERS_NV },
    { "EGL_COVERAGE_SAMPLES_NV", EGLenum::EGL_COVERAGE_SAMPLES_NV },
    { "EGL_DEPTH_ENCODING_NV", EGLenum::EGL_DEPTH_ENCODING_NV },
    { "EGL_DEPTH_ENCODING_NONLINEAR_NV", EGLenum::EGL_DEPTH_ENCODING_NONLINEAR_NV },
    { "EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV", EGLenum::EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV },
    { "EGL_SYNC_STATUS_NV", EGLenum::EGL_SYNC_STATUS_NV },
    { "EGL_SIGNALED_NV", EGLenum::EGL_SIGNALED_NV },
    { "EGL_UNSIGNALED_NV", EGLenum::EGL_UNSIGNALED_NV },
    { "EGL_ALREADY_SIGNALED_NV", EGLenum::EGL_ALREADY_SIGNALED_NV },
    { "EGL_TIMEOUT_EXPIRED_NV", EGLenum::EGL_TIMEOUT_EXPIRED_NV },
    { "EGL_CONDITION_SATISFIED_NV", EGLenum::EGL_CONDITION_SATISFIED_NV },
    { "EGL_SYNC_TYPE_NV", EGLenum::EGL_SYNC_TYPE_NV },
    { "EGL_SYNC_CONDITION_NV", EGLenum::EGL_SYNC_CONDITION_NV },
    { "EGL_SYNC_FENCE_NV", EGLenum::EGL_SYNC_FENCE_NV },
    { "EGL_SYNC_PRIOR_COMMANDS_COMPLETE", EGLenum::EGL_SYNC_PRIOR_COMMANDS_COMPLETE },
    { "EGL_SYNC_PRIOR_COMMANDS_COMPLETE_KHR", EGLenum::EGL_SYNC_PRIOR_COMMANDS_COMPLETE_KHR },
    { "EGL_SYNC_STATUS", EGLenum::EGL_SYNC_STATUS },
    { "EGL_SYNC_STATUS_KHR", EGLenum::EGL_SYNC_STATUS_KHR },
    { "EGL_SIGNALED", EGLenum::EGL_SIGNALED },
    { "EGL_SIGNALED_KHR", EGLenum::EGL_SIGNALED_KHR },
    { "EGL_UNSIGNALED", EGLenum::EGL_UNSIGNALED },
    { "EGL_UNSIGNALED_KHR", EGLenum::EGL_UNSIGNALED_KHR },
    { "EGL_TIMEOUT_EXPIRED", EGLenum::EGL_TIMEOUT_EXPIRED },
    { "EGL_TIMEOUT_EXPIRED_KHR", EGLenum::EGL_TIMEOUT_EXPIRED_KHR },
    { "EGL_CONDITION_SATISFIED", EGLenum::EGL_CONDITION_SATISFIED },
    { "EGL_CONDITION_SATISFIED_KHR", EGLenum::EGL_CONDITION_SATISFIED_KHR },
    { "EGL_SYNC_TYPE", EGLenum::EGL_SYNC_TYPE },
    { "EGL_SYNC_TYPE_KHR", EGLenum::EGL_SYNC_TYPE_KHR },
    { "EGL_SYNC_CONDITION", EGLenum::EGL_SYNC_CONDITION },
    { "EGL_SYNC_CONDITION_KHR", EGLenum::EGL_SYNC_CONDITION_KHR },
    { "EGL_SYNC_FENCE", EGLenum::EGL_SYNC_FENCE },
    { "EGL_SYNC_FENCE_KHR", EGLenum::EGL_SYNC_FENCE_KHR },
    { "EGL_SYNC_REUSABLE_KHR", EGLenum::EGL_SYNC_REUSABLE_KHR },
    { "EGL_CONTEXT_MINOR_VERSION", EGLenum::EGL_CONTEXT_MINOR_VERSION },
    { "EGL_CONTEXT_MINOR_VERSION_KHR", EGLenum::EGL_CONTEXT_MINOR_VERSION_KHR },
    { "EGL_CONTEXT_FLAGS_KHR", EGLenum::EGL_CONTEXT_FLAGS_KHR },
    { "EGL_CONTEXT_OPENGL_PROFILE_MASK", EGLenum::EGL_CONTEXT_OPENGL_PROFILE_MASK },
    { "EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR", EGLenum::EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR },
    { "EGL_SYNC_CL_EVENT", EGLenum::EGL_SYNC_CL_EVENT },
    { "EGL_SYNC_CL_EVENT_KHR", EGLenum::EGL_SYNC_CL_EVENT_KHR },
    { "EGL_SYNC_CL_EVENT_COMPLETE", EGLenum::EGL_SYNC_CL_EVENT_COMPLETE },
    { "EGL_SYNC_CL_EVENT_COMPLETE_KHR", EGLenum::EGL_SYNC_CL_EVENT_COMPLETE_KHR },
    { "EGL_CONTEXT_PRIORITY_LEVEL_IMG", EGLenum::EGL_CONTEXT_PRIORITY_LEVEL_IMG },
    { "EGL_CONTEXT_PRIORITY_HIGH_IMG", EGLenum::EGL_CONTEXT_PRIORITY_HIGH_IMG },
    { "EGL_CONTEXT_PRIORITY_MEDIUM_IMG", EGLenum::EGL_CONTEXT_PRIORITY_MEDIUM_IMG },
    { "EGL_CONTEXT_PRIORITY_LOW_IMG", EGLenum::EGL_CONTEXT_PRIORITY_LOW_IMG },
    { "EGL_BITMAP_PIXEL_SIZE_KHR", EGLenum::EGL_BITMAP_PIXEL_SIZE_KHR },
    { "EGL_COVERAGE_SAMPLE_RESOLVE_NV", EGLenum::EGL_COVERAGE_SAMPLE_RESOLVE_NV },
    { "EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV", EGLenum::EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV },
    { "EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV", EGLenum::EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV },
    { "EGL_MULTIVIEW_VIEW_COUNT_EXT", EGLenum::EGL_MULTIVIEW_VIEW_COUNT_EXT },
    { "EGL_AUTO_STEREO_NV", EGLenum::EGL_AUTO_STEREO_NV },
    { "EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT", EGLenum::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT },
    { "EGL_BUFFER_AGE_EXT", EGLenum::EGL_BUFFER_AGE_EXT },
    { "EGL_BUFFER_AGE_KHR", EGLenum::EGL_BUFFER_AGE_KHR },
    { "EGL_PLATFORM_DEVICE_EXT", EGLenum::EGL_PLATFORM_DEVICE_EXT },
    { "EGL_NATIVE_BUFFER_ANDROID", EGLenum::EGL_NATIVE_BUFFER_ANDROID },
    { "EGL_PLATFORM_ANDROID_KHR", EGLenum::EGL_PLATFORM_ANDROID_KHR },
    { "EGL_RECORDABLE_ANDROID", EGLenum::EGL_RECORDABLE_ANDROID },
    { "EGL_SYNC_NATIVE_FENCE_ANDROID", EGLenum::EGL_SYNC_NATIVE_FENCE_ANDROID },
    { "EGL_SYNC_NATIVE_FENCE_FD_ANDROID", EGLenum::EGL_SYNC_NATIVE_FENCE_FD_ANDROID },
    { "EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID", EGLenum::EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID },
    { "EGL_FRAMEBUFFER_TARGET_ANDROID", EGLenum::EGL_FRAMEBUFFER_TARGET_ANDROID },
    { "EGL_CONTEXT_OPENGL_DEBUG", EGLenum::EGL_CONTEXT_OPENGL_DEBUG },
    { "EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE", EGLenum::EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE },
    { "EGL_CONTEXT_OPENGL_ROBUST_ACCESS", EGLenum::EGL_CONTEXT_OPENGL_ROBUST_ACCESS },
    { "EGL_CONTEXT_OPENGL_NO_ERROR_KHR", EGLenum::EGL_CONTEXT_OPENGL_NO_ERROR_KHR },
    { "EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY", EGLenum::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY },
    { "EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR", EGLenum::EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR },
    { "EGL_NO_RESET_NOTIFICATION", EGLenum::EGL_NO_RESET_NOTIFICATION },
    { "EGL_NO_RESET_NOTIFICATION_EXT", EGLenum::EGL_NO_RESET_NOTIFICATION_EXT },
    { "EGL_NO_RESET_NOTIFICATION_KHR", EGLenum::EGL_NO_RESET_NOTIFICATION_KHR },
    { "EGL_LOSE_CONTEXT_ON_RESET", EGLenum::EGL_LOSE_CONTEXT_ON_RESET },
    { "EGL_LOSE_CONTEXT_ON_RESET_EXT", EGLenum::EGL_LOSE_CONTEXT_ON_RESET_EXT },
    { "EGL_LOSE_CONTEXT_ON_RESET_KHR", EGLenum::EGL_LOSE_CONTEXT_ON_RESET_KHR },
    { "EGL_DRM_BUFFER_FORMAT_MESA", EGLenum::EGL_DRM_BUFFER_FORMAT_MESA },
    { "EGL_DRM_BUFFER_USE_MESA", EGLenum::EGL_DRM_BUFFER_USE_MESA },
    { "EGL_DRM_BUFFER_FORMAT_ARGB32_MESA", EGLenum::EGL_DRM_BUFFER_FORMAT_ARGB32_MESA },
    { "EGL_DRM_BUFFER_MESA", EGLenum::EGL_DRM_BUFFER_MESA },
    { "EGL_DRM_BUFFER_STRIDE_MESA", EGLenum::EGL_DRM_BUFFER_STRIDE_MESA },
    { "EGL_PLATFORM_X11_EXT", EGLenum::EGL_PLATFORM_X11_EXT },
    { "EGL_PLATFORM_X11_KHR", EGLenum::EGL_PLATFORM_X11_KHR },
    { "EGL_PLATFORM_X11_SCREEN_EXT", EGLenum::EGL_PLATFORM_X11_SCREEN_EXT },
    { "EGL_PLATFORM_X11_SCREEN_KHR", EGLenum::EGL_PLATFORM_X11_SCREEN_KHR },
    { "EGL_PLATFORM_GBM_KHR", EGLenum::EGL_PLATFORM_GBM_KHR },
    { "EGL_PLATFORM_GBM_MESA", EGLenum::EGL_PLATFORM_GBM_MESA },
    { "EGL_PLATFORM_WAYLAND_EXT", EGLenum::EGL_PLATFORM_WAYLAND_EXT },
    { "EGL_PLATFORM_WAYLAND_KHR", EGLenum::EGL_PLATFORM_WAYLAND_KHR },
    { "EGL_STREAM_FIFO_LENGTH_KHR", EGLenum::EGL_STREAM_FIFO_LENGTH_KHR },
    { "EGL_STREAM_TIME_NOW_KHR", EGLenum::EGL_STREAM_TIME_NOW_KHR },
    { "EGL_STREAM_TIME_CONSUMER_KHR", EGLenum::EGL_STREAM_TIME_CONSUMER_KHR },
    { "EGL_STREAM_TIME_PRODUCER_KHR", EGLenum::EGL_STREAM_TIME_PRODUCER_KHR },
    { "EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE", EGLenum::EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE },
    { "EGL_FIXED_SIZE_ANGLE", EGLenum::EGL_FIXED_SIZE_ANGLE },
    { "EGL_CONSUMER_LATENCY_USEC_KHR", EGLenum::EGL_CONSUMER_LATENCY_USEC_KHR },
    { "EGL_PRODUCER_FRAME_KHR", EGLenum::EGL_PRODUCER_FRAME_KHR },
    { "EGL_CONSUMER_FRAME_KHR", EGLenum::EGL_CONSUMER_FRAME_KHR },
    { "EGL_STREAM_STATE_KHR", EGLenum::EGL_STREAM_STATE_KHR },
    { "EGL_STREAM_STATE_CREATED_KHR", EGLenum::EGL_STREAM_STATE_CREATED_KHR },
    { "EGL_STREAM_STATE_CONNECTING_KHR", EGLenum::EGL_STREAM_STATE_CONNECTING_KHR },
    { "EGL_STREAM_STATE_EMPTY_KHR", EGLenum::EGL_STREAM_STATE_EMPTY_KHR },
    { "EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR", EGLenum::EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR },
    { "EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR", EGLenum::EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR },
    { "EGL_STREAM_STATE_DISCONNECTED_KHR", EGLenum::EGL_STREAM_STATE_DISCONNECTED_KHR },
    { "EGL_BAD_STREAM_KHR", EGLenum::EGL_BAD_STREAM_KHR },
    { "EGL_BAD_STATE_KHR", EGLenum::EGL_BAD_STATE_KHR },
    { "EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR", EGLenum::EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR },
    { "EGL_SYNC_NEW_FRAME_NV", EGLenum::EGL_SYNC_NEW_FRAME_NV },
    { "EGL_BAD_DEVICE_EXT", EGLenum::EGL_BAD_DEVICE_EXT },
    { "EGL_DEVICE_EXT", EGLenum::EGL_DEVICE_EXT },
    { "EGL_BAD_OUTPUT_LAYER_EXT", EGLenum::EGL_BAD_OUTPUT_LAYER_EXT },
    { "EGL_BAD_OUTPUT_PORT_EXT", EGLenum::EGL_BAD_OUTPUT_PORT_EXT },
    { "EGL_SWAP_INTERVAL_EXT", EGLenum::EGL_SWAP_INTERVAL_EXT },
    { "EGL_DRM_DEVICE_FILE_EXT", EGLenum::EGL_DRM_DEVICE_FILE_EXT },
    { "EGL_DRM_CRTC_EXT", EGLenum::EGL_DRM_CRTC_EXT },
    { "EGL_DRM_PLANE_EXT", EGLenum::EGL_DRM_PLANE_EXT },
    { "EGL_DRM_CONNECTOR_EXT", EGLenum::EGL_DRM_CONNECTOR_EXT },
    { "EGL_OPENWF_DEVICE_ID_EXT", EGLenum::EGL_OPENWF_DEVICE_ID_EXT },
    { "EGL_OPENWF_PIPELINE_ID_EXT", EGLenum::EGL_OPENWF_PIPELINE_ID_EXT },
    { "EGL_OPENWF_PORT_ID_EXT", EGLenum::EGL_OPENWF_PORT_ID_EXT },
    { "EGL_CUDA_DEVICE_NV", EGLenum::EGL_CUDA_DEVICE_NV },
    { "EGL_CUDA_EVENT_HANDLE_NV", EGLenum::EGL_CUDA_EVENT_HANDLE_NV },
    { "EGL_SYNC_CUDA_EVENT_NV", EGLenum::EGL_SYNC_CUDA_EVENT_NV },
    { "EGL_SYNC_CUDA_EVENT_COMPLETE_NV", EGLenum::EGL_SYNC_CUDA_EVENT_COMPLETE_NV },
    { "EGL_LINUX_DMA_BUF_EXT", EGLenum::EGL_LINUX_DMA_BUF_EXT },
    { "EGL_LINUX_DRM_FOURCC_EXT", EGLenum::EGL_LINUX_DRM_FOURCC_EXT },
    { "EGL_DMA_BUF_PLANE0_FD_EXT", EGLenum::EGL_DMA_BUF_PLANE0_FD_EXT },
    { "EGL_DMA_BUF_PLANE0_OFFSET_EXT", EGLenum::EGL_DMA_BUF_PLANE0_OFFSET_EXT },
    { "EGL_DMA_BUF_PLANE0_PITCH_EXT", EGLenum::EGL_DMA_BUF_PLANE0_PITCH_EXT },
    { "EGL_DMA_BUF_PLANE1_FD_EXT", EGLenum::EGL_DMA_BUF_PLANE1_FD_EXT },
    { "EGL_DMA_BUF_PLANE1_OFFSET_EXT", EGLenum::EGL_DMA_BUF_PLANE1_OFFSET_EXT },
    { "EGL_DMA_BUF_PLANE1_PITCH_EXT", EGLenum::EGL_DMA_BUF_PLANE1_PITCH_EXT },
    { "EGL_DMA_BUF_PLANE2_FD_EXT", EGLenum::EGL_DMA_BUF_PLANE2_FD_EXT },
    { "EGL_DMA_BUF_PLANE2_OFFSET_EXT", EGLenum::EGL_DMA_BUF_PLANE2_OFFSET_EXT },
    { "EGL_DMA_BUF_PLANE2_PITCH_EXT", EGLenum::EGL_DMA_BUF_PLANE2_PITCH_EXT },
    { "EGL_YUV_COLOR_SPACE_HINT_EXT", EGLenum::EGL_YUV_COLOR_SPACE_HINT_EXT },
    { "EGL_SAMPLE_RANGE_HINT_EXT", EGLenum::EGL_SAMPLE_RANGE_HINT_EXT },
    { "EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT", EGLenum::EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT },
    { "EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT", EGLenum::EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT },
    { "EGL_ITU_REC601_EXT", EGLenum::EGL_ITU_REC601_EXT },
    { "EGL_ITU_REC709_EXT", EGLenum::EGL_ITU_REC709_EXT },
    { "EGL_ITU_REC2020_EXT", EGLenum::EGL_ITU_REC2020_EXT },
    { "EGL_YUV_FULL_RANGE_EXT", EGLenum::EGL_YUV_FULL_RANGE_EXT },
    { "EGL_YUV_NARROW_RANGE_EXT", EGLenum::EGL_YUV_NARROW_RANGE_EXT },
    { "EGL_YUV_CHROMA_SITING_0_EXT", EGLenum::EGL_YUV_CHROMA_SITING_0_EXT },
    { "EGL_YUV_CHROMA_SITING_0_5_EXT", EGLenum::EGL_YUV_CHROMA_SITING_0_5_EXT },
    { "EGL_DISCARD_SAMPLES_ARM", EGLenum::EGL_DISCARD_SAMPLES_ARM },
    { "EGL_NATIVE_BUFFER_TIZEN", EGLenum::EGL_NATIVE_BUFFER_TIZEN },
    { "EGL_NATIVE_SURFACE_TIZEN", EGLenum::EGL_NATIVE_SURFACE_TIZEN },
    { "EGL_PROTECTED_CONTENT_EXT", EGLenum::EGL_PROTECTED_CONTENT_EXT },
    { "EGL_YUV_BUFFER_EXT", EGLenum::EGL_YUV_BUFFER_EXT },
    { "EGL_YUV_ORDER_EXT", EGLenum::EGL_YUV_ORDER_EXT },
    { "EGL_YUV_ORDER_YUV_EXT", EGLenum::EGL_YUV_ORDER_YUV_EXT },
    { "EGL_YUV_ORDER_YVU_EXT", EGLenum::EGL_YUV_ORDER_YVU_EXT },
    { "EGL_YUV_ORDER_YUYV_EXT", EGLenum::EGL_YUV_ORDER_YUYV_EXT },
    { "EGL_YUV_ORDER_UYVY_EXT", EGLenum::EGL_YUV_ORDER_UYVY_EXT },
    { "EGL_YUV_ORDER_YVYU_EXT", EGLenum::EGL_YUV_ORDER_YVYU_EXT },
    { "EGL_YUV_ORDER_VYUY_EXT", EGLenum::EGL_YUV_ORDER_VYUY_EXT },
    { "EGL_YUV_ORDER_AYUV_EXT", EGLenum::EGL_YUV_ORDER_AYUV_EXT },
    { "EGL_YUV_CSC_STANDARD_EXT", EGLenum::EGL_YUV_CSC_STANDARD_EXT },
    { "EGL_YUV_CSC_STANDARD_601_EXT", EGLenum::EGL_YUV_CSC_STANDARD_601_EXT },
    { "EGL_YUV_CSC_STANDARD_709_EXT", EGLenum::EGL_YUV_CSC_STANDARD_709_EXT },
    { "EGL_YUV_CSC_STANDARD_2020_EXT", EGLenum::EGL_YUV_CSC_STANDARD_2020_EXT },
    { "EGL_YUV_NUMBER_OF_PLANES_EXT", EGLenum::EGL_YUV_NUMBER_OF_PLANES_EXT },
    { "EGL_YUV_SUBSAMPLE_EXT", EGLenum::EGL_YUV_SUBSAMPLE_EXT },
    { "EGL_YUV_SUBSAMPLE_4_2_0_EXT", EGLenum::EGL_YUV_SUBSAMPLE_4_2_0_EXT },
    { "EGL_YUV_SUBSAMPLE_4_2_2_EXT", EGLenum::EGL_YUV_SUBSAMPLE_4_2_2_EXT },
    { "EGL_YUV_SUBSAMPLE_4_4_4_EXT", EGLenum::EGL_YUV_SUBSAMPLE_4_4_4_EXT },
    { "EGL_YUV_DEPTH_RANGE_EXT", EGLenum::EGL_YUV_DEPTH_RANGE_EXT },
    { "EGL_YUV_DEPTH_RANGE_LIMITED_EXT", EGLenum::EGL_YUV_DEPTH_RANGE_LIMITED_EXT },
    { "EGL_YUV_DEPTH_RANGE_FULL_EXT", EGLenum::EGL_YUV_DEPTH_RANGE_FULL_EXT },
    { "EGL_YUV_PLANE_BPP_EXT", EGLenum::EGL_YUV_PLANE_BPP_EXT },
    { "EGL_YUV_PLANE_BPP_0_EXT", EGLenum::EGL_YUV_PLANE_BPP_0_EXT },
    { "EGL_YUV_PLANE_BPP_8_EXT", EGLenum::EGL_YUV_PLANE_BPP_8_EXT },
    { "EGL_YUV_PLANE_BPP_10_EXT", EGLenum::EGL_YUV_PLANE_BPP_10_EXT },
    { "EGL_D3D9_DEVICE_ANGLE", EGLenum::EGL_D3D9_DEVICE_ANGLE },
    { "EGL_D3D11_DEVICE_ANGLE", EGLenum::EGL_D3D11_DEVICE_ANGLE },
    { "EGL_COLOR_FORMAT_HI", EGLenum::EGL_COLOR_FORMAT_HI },
    { "EGL_COLOR_RGB_HI", EGLenum::EGL_COLOR_RGB_HI },
    { "EGL_COLOR_RGBA_HI", EGLenum::EGL_COLOR_RGBA_HI },
    { "EGL_COLOR_ARGB_HI", EGLenum::EGL_COLOR_ARGB_HI },
    { "EGL_CLIENT_PIXMAP_POINTER_HI", EGLenum::EGL_CLIENT_PIXMAP_POINTER_HI },
    { "EGL_DISPLAY_SCALING", EGLenum::EGL_DISPLAY_SCALING }
#endif
};

} // namespace eglbinding