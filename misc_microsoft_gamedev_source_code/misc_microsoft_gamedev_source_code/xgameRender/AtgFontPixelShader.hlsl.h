#if 0
//
// Generated by 2.0.7776.0
//
//   fxc /T ps_2_0 /E AtgFontPixelShader Atg.hlsl /Fh AtgFontPixelShader.hlsl.h
//
//
// Parameters:
//
//   float4 ChannelSelector;
//   sampler2D FontTexture;
//   float4 Mask;
//
//
// Registers:
//
//   Name            Reg   Size
//   --------------- ----- ----
//   ChannelSelector c0       1
//   Mask            c1       1
//   FontTexture     s0       1
//

// Shader type: pixel 

xps_3_0
defconst ChannelSelector, float, vector, [1, 4], c0
defconst FontTexture, sampler2d, object, [1, 1], s0
defconst Mask, float, vector, [1, 4], c1
config AutoSerialize=false
config AutoResource=false
config PsMaxReg=2
// PsExportColorCount=1
// PsSampleControl=both

dcl_texcoord r0.xy
dcl_color_centroid r1

def c252, 0, 0, 0, 0
def c253, 0, 0, 0, 0
def c254, 0, 0, 0, 0
def c255, 0.5, 0, 1, 0


    exec
    tfetch2D r2, r0.xy, tf0
    alloc colors
    exec
    dp4 r0.y, r2.wzxy, c0.wzxy
    sgt r0.w, r0.y, c255.x
    cndge r0.x, -r0_abs.w, r0.y, c255.z
    add r0.xz, r0.yx, r0.yx
    subsc r0.y, -c255.z, -r0.x
    cndge r0.y, -r0_abs.w, c255.y, r0.y
    exece
    add r2, -r0.yyyz, r2
    mad r2.xyz, r2.xyz, c1.xyz, r0.y
    mad r2.w, r2.w, c1.w, r0.z
    mul oC0, r2, r1

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xps_AtgFontPixelShader[] =
{
    0x102a1100, 0x00000124, 0x000000e8, 0x00000000, 0x00000024, 0x000000d4, 
    0x000000fc, 0x00000000, 0x00000000, 0x000000ac, 0x0000001c, 0x000000a0, 
    0xffff0300, 0x00000003, 0x0000001c, 0x00000000, 0x00000099, 0x00000058, 
    0x00020000, 0x00010000, 0x00000068, 0x00000000, 0x00000078, 0x00030000, 
    0x00010000, 0x00000084, 0x00000000, 0x00000094, 0x00020001, 0x00010000, 
    0x00000068, 0x00000000, 0x4368616e, 0x6e656c53, 0x656c6563, 0x746f7200, 
    0x00010003, 0x00010004, 0x00010000, 0x00000000, 0x466f6e74, 0x54657874, 
    0x75726500, 0x0004000c, 0x00010001, 0x00010000, 0x00000000, 0x4d61736b, 
    0x0070735f, 0x335f3000, 0x322e302e, 0x37373736, 0x2e3000ab, 0x00000000, 
    0x00000001, 0x00000000, 0x00000000, 0x00000014, 0x01fc0010, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x000000a8, 0x10000200, 
    0x00000008, 0x00000000, 0x00001842, 0x00010003, 0x00000001, 0x00003050, 
    0x0000f1a0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x3f000000, 0x00000000, 0x3f800000, 0x00000000, 0x00011002, 
    0x00001200, 0xc4000000, 0x00006003, 0x40091200, 0x22000000, 0x10082001, 
    0x1f1ff688, 0x00004000, 0xc8020100, 0x00a7a700, 0xaf020000, 0xc8080100, 
    0x00b16c00, 0xa500ff00, 0xc8010100, 0x041bb1c6, 0xcd8000ff, 0xc8050100, 
    0x006d6d00, 0xe0000000, 0xb8200001, 0x010000c0, 0xc20101ff, 0xc8020100, 
    0x041bb1b1, 0xad80ff00, 0xc80f0102, 0x04f10000, 0xe0000200, 0xc8070102, 
    0x00c0c0b1, 0xab020100, 0xc8080102, 0x001b1bc6, 0xab020100, 0xc80f8000, 
    0x00000000, 0xe1020100, 0x00000000, 0x00000000, 0x00000000
};
