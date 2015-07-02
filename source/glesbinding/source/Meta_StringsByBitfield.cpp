
#include "Meta_Maps.h"

#include <glesbinding/gles/bitfield.h>


using namespace gles;

namespace glesbinding
{

const std::unordered_map<AttribMask, std::string> Meta_StringsByAttribMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { AttribMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
	{ AttribMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
	{ AttribMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" }
#endif
};
    
const std::unordered_map<BufferAccessMask, std::string> Meta_StringsByBufferAccessMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { BufferAccessMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
	{ BufferAccessMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
	{ BufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT, "GL_MAP_INVALIDATE_RANGE_BIT" },
	{ BufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
	{ BufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
	{ BufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT, "GL_MAP_UNSYNCHRONIZED_BIT" },
	{ BufferAccessMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
	{ BufferAccessMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" }
#endif
};
    
const std::unordered_map<BufferBitQCOM, std::string> Meta_StringsByBufferBitQCOM 
{
#ifdef STRINGS_BY_SYMBOLS
    { BufferBitQCOM::GL_COLOR_BUFFER_BIT0_QCOM, "GL_COLOR_BUFFER_BIT0_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT1_QCOM, "GL_COLOR_BUFFER_BIT1_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT2_QCOM, "GL_COLOR_BUFFER_BIT2_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT3_QCOM, "GL_COLOR_BUFFER_BIT3_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT4_QCOM, "GL_COLOR_BUFFER_BIT4_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT5_QCOM, "GL_COLOR_BUFFER_BIT5_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT6_QCOM, "GL_COLOR_BUFFER_BIT6_QCOM" },
	{ BufferBitQCOM::GL_COLOR_BUFFER_BIT7_QCOM, "GL_COLOR_BUFFER_BIT7_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT0_QCOM, "GL_DEPTH_BUFFER_BIT0_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT1_QCOM, "GL_DEPTH_BUFFER_BIT1_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT2_QCOM, "GL_DEPTH_BUFFER_BIT2_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT3_QCOM, "GL_DEPTH_BUFFER_BIT3_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT4_QCOM, "GL_DEPTH_BUFFER_BIT4_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT5_QCOM, "GL_DEPTH_BUFFER_BIT5_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT6_QCOM, "GL_DEPTH_BUFFER_BIT6_QCOM" },
	{ BufferBitQCOM::GL_DEPTH_BUFFER_BIT7_QCOM, "GL_DEPTH_BUFFER_BIT7_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT0_QCOM, "GL_STENCIL_BUFFER_BIT0_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT1_QCOM, "GL_STENCIL_BUFFER_BIT1_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT2_QCOM, "GL_STENCIL_BUFFER_BIT2_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT3_QCOM, "GL_STENCIL_BUFFER_BIT3_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT4_QCOM, "GL_STENCIL_BUFFER_BIT4_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT5_QCOM, "GL_STENCIL_BUFFER_BIT5_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT6_QCOM, "GL_STENCIL_BUFFER_BIT6_QCOM" },
	{ BufferBitQCOM::GL_STENCIL_BUFFER_BIT7_QCOM, "GL_STENCIL_BUFFER_BIT7_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT0_QCOM, "GL_MULTISAMPLE_BUFFER_BIT0_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT1_QCOM, "GL_MULTISAMPLE_BUFFER_BIT1_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT2_QCOM, "GL_MULTISAMPLE_BUFFER_BIT2_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT3_QCOM, "GL_MULTISAMPLE_BUFFER_BIT3_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT4_QCOM, "GL_MULTISAMPLE_BUFFER_BIT4_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT5_QCOM, "GL_MULTISAMPLE_BUFFER_BIT5_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT6_QCOM, "GL_MULTISAMPLE_BUFFER_BIT6_QCOM" },
	{ BufferBitQCOM::GL_MULTISAMPLE_BUFFER_BIT7_QCOM, "GL_MULTISAMPLE_BUFFER_BIT7_QCOM" }
#endif
};
    
const std::unordered_map<BufferStorageMask, std::string> Meta_StringsByBufferStorageMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { BufferStorageMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
	{ BufferStorageMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
	{ BufferStorageMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
	{ BufferStorageMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" },
	{ BufferStorageMask::GL_DYNAMIC_STORAGE_BIT, "GL_DYNAMIC_STORAGE_BIT" },
	{ BufferStorageMask::GL_CLIENT_STORAGE_BIT, "GL_CLIENT_STORAGE_BIT" }
#endif
};
    
const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
	{ ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" },
	{ ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
	{ ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV, "GL_COVERAGE_BUFFER_BIT_NV" }
#endif
};
    
const std::unordered_map<ContextFlagMask, std::string> Meta_StringsByContextFlagMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT_KHR, "GL_CONTEXT_FLAG_DEBUG_BIT_KHR" },
	{ ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR, "GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR" }
#endif
};
    
const std::unordered_map<MapBufferUsageMask, std::string> Meta_StringsByMapBufferUsageMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { MapBufferUsageMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
	{ MapBufferUsageMask::GL_MAP_READ_BIT_EXT, "GL_MAP_READ_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
	{ MapBufferUsageMask::GL_MAP_WRITE_BIT_EXT, "GL_MAP_WRITE_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT, "GL_MAP_INVALIDATE_RANGE_BIT" },
	{ MapBufferUsageMask::GL_MAP_INVALIDATE_RANGE_BIT_EXT, "GL_MAP_INVALIDATE_RANGE_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
	{ MapBufferUsageMask::GL_MAP_INVALIDATE_BUFFER_BIT_EXT, "GL_MAP_INVALIDATE_BUFFER_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
	{ MapBufferUsageMask::GL_MAP_FLUSH_EXPLICIT_BIT_EXT, "GL_MAP_FLUSH_EXPLICIT_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT, "GL_MAP_UNSYNCHRONIZED_BIT" },
	{ MapBufferUsageMask::GL_MAP_UNSYNCHRONIZED_BIT_EXT, "GL_MAP_UNSYNCHRONIZED_BIT_EXT" },
	{ MapBufferUsageMask::GL_MAP_PERSISTENT_BIT, "GL_MAP_PERSISTENT_BIT" },
	{ MapBufferUsageMask::GL_MAP_COHERENT_BIT, "GL_MAP_COHERENT_BIT" },
	{ MapBufferUsageMask::GL_DYNAMIC_STORAGE_BIT, "GL_DYNAMIC_STORAGE_BIT" },
	{ MapBufferUsageMask::GL_CLIENT_STORAGE_BIT, "GL_CLIENT_STORAGE_BIT" }
#endif
};
    
const std::unordered_map<MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT, "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT, "GL_ELEMENT_ARRAY_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT, "GL_UNIFORM_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT, "GL_TEXTURE_FETCH_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT, "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_COMMAND_BARRIER_BIT, "GL_COMMAND_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT, "GL_PIXEL_BUFFER_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT, "GL_TEXTURE_UPDATE_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT, "GL_BUFFER_UPDATE_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT, "GL_FRAMEBUFFER_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT, "GL_TRANSFORM_FEEDBACK_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT, "GL_ATOMIC_COUNTER_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT, "GL_SHADER_STORAGE_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT, "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT" },
	{ MemoryBarrierMask::GL_ALL_BARRIER_BITS, "GL_ALL_BARRIER_BITS" }
#endif
};
    
const std::unordered_map<PathFontStyle, std::string> Meta_StringsByPathFontStyle 
{
#ifdef STRINGS_BY_SYMBOLS
    { PathFontStyle::GL_BOLD_BIT_NV, "GL_BOLD_BIT_NV" },
	{ PathFontStyle::GL_ITALIC_BIT_NV, "GL_ITALIC_BIT_NV" }
#endif
};
    
const std::unordered_map<PathRenderingMaskNV, std::string> Meta_StringsByPathRenderingMaskNV 
{
#ifdef STRINGS_BY_SYMBOLS
    { PathRenderingMaskNV::GL_FONT_X_MIN_BOUNDS_BIT_NV, "GL_FONT_X_MIN_BOUNDS_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_Y_MIN_BOUNDS_BIT_NV, "GL_FONT_Y_MIN_BOUNDS_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_X_MAX_BOUNDS_BIT_NV, "GL_FONT_X_MAX_BOUNDS_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_Y_MAX_BOUNDS_BIT_NV, "GL_FONT_Y_MAX_BOUNDS_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_UNITS_PER_EM_BIT_NV, "GL_FONT_UNITS_PER_EM_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_ASCENDER_BIT_NV, "GL_FONT_ASCENDER_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_DESCENDER_BIT_NV, "GL_FONT_DESCENDER_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_HEIGHT_BIT_NV, "GL_FONT_HEIGHT_BIT_NV" },
	{ PathRenderingMaskNV::GL_BOLD_BIT_NV, "GL_BOLD_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_WIDTH_BIT_NV, "GL_GLYPH_WIDTH_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV, "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_HEIGHT_BIT_NV, "GL_GLYPH_HEIGHT_BIT_NV" },
	{ PathRenderingMaskNV::GL_ITALIC_BIT_NV, "GL_ITALIC_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV, "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_UNDERLINE_POSITION_BIT_NV, "GL_FONT_UNDERLINE_POSITION_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_UNDERLINE_THICKNESS_BIT_NV, "GL_FONT_UNDERLINE_THICKNESS_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_HAS_KERNING_BIT_NV, "GL_GLYPH_HAS_KERNING_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_HAS_KERNING_BIT_NV, "GL_FONT_HAS_KERNING_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV" },
	{ PathRenderingMaskNV::GL_FONT_NUM_GLYPH_INDICES_BIT_NV, "GL_FONT_NUM_GLYPH_INDICES_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV" },
	{ PathRenderingMaskNV::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV" }
#endif
};
    
const std::unordered_map<PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL 
{
#ifdef STRINGS_BY_SYMBOLS
    { PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL, "GL_PERFQUERY_SINGLE_CONTEXT_INTEL" },
	{ PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL, "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL" }
#endif
};
    
const std::unordered_map<SyncObjectMask, std::string> Meta_StringsBySyncObjectMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT, "GL_SYNC_FLUSH_COMMANDS_BIT" },
	{ SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT_APPLE, "GL_SYNC_FLUSH_COMMANDS_BIT_APPLE" }
#endif
};
    
const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { UnusedMask::GL_UNUSED_BIT, "GL_UNUSED_BIT" }
#endif
};
    
const std::unordered_map<UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask 
{
#ifdef STRINGS_BY_SYMBOLS
    { UseProgramStageMask::GL_VERTEX_SHADER_BIT, "GL_VERTEX_SHADER_BIT" },
	{ UseProgramStageMask::GL_VERTEX_SHADER_BIT_EXT, "GL_VERTEX_SHADER_BIT_EXT" },
	{ UseProgramStageMask::GL_FRAGMENT_SHADER_BIT, "GL_FRAGMENT_SHADER_BIT" },
	{ UseProgramStageMask::GL_FRAGMENT_SHADER_BIT_EXT, "GL_FRAGMENT_SHADER_BIT_EXT" },
	{ UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_EXT, "GL_GEOMETRY_SHADER_BIT_EXT" },
	{ UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_OES, "GL_GEOMETRY_SHADER_BIT_OES" },
	{ UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_EXT, "GL_TESS_CONTROL_SHADER_BIT_EXT" },
	{ UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_OES, "GL_TESS_CONTROL_SHADER_BIT_OES" },
	{ UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_EXT, "GL_TESS_EVALUATION_SHADER_BIT_EXT" },
	{ UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_OES, "GL_TESS_EVALUATION_SHADER_BIT_OES" },
	{ UseProgramStageMask::GL_COMPUTE_SHADER_BIT, "GL_COMPUTE_SHADER_BIT" },
	{ UseProgramStageMask::GL_ALL_SHADER_BITS, "GL_ALL_SHADER_BITS" },
	{ UseProgramStageMask::GL_ALL_SHADER_BITS_EXT, "GL_ALL_SHADER_BITS_EXT" }
#endif
};
    

} // namespace glesbinding