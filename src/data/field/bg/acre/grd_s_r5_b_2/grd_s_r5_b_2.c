#include "libforest/gbi_extensions.h"

extern u8 bush_pal_dummy[];
extern u8 cliff_pal_dummy[];
extern u8 earth_pal_dummy[];
extern u8 bridge_2_pal_dummy[];
extern u8 bridge_2_tex_dummy[];
extern u8 water_2_tex_dummy[];
extern u8 water_1_tex_dummy[];
extern u8 river_tex_dummy[];
extern u8 grass_tex_dummy[];
extern u8 bush_b_tex_dummy[];
extern u8 bush_a_tex_dummy[];
extern u8 earth_tex_dummy[];

static Vtx grd_s_r5_b_2_v[] = {
#include "assets/field/bg/grd_s_r5_b_2_v.inc"
};

extern Gfx grd_s_r5_b_2_modelT[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 0, TEXEL0, TEXEL1, COMBINED, 0, SHADE, TEXEL0,
                       COMBINED, 0, PRIM_LOD_FRAC, PRIMITIVE),
    gsDPSetPrimColor(0, 50, 255, 255, 255, 50),
    gsDPSetEnvColor(0x00, 0x3C, 0xFF, 0xFF),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTextureBlock_4b_Dolphin(water_1_tex_dummy, G_IM_FMT_I, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPLoadMultiBlock_4b_Dolphin(water_2_tex_dummy, 1, G_IM_FMT_I, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_r5_b_2_v[242], 13, 0),
    gsSPNTrianglesInit_5b(11,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          3, 4, 2  // tri2
                          ),
    gsSPNTriangles_5b(3, 5, 4, // tri0
                      6, 7, 8, // tri1
                      6, 1, 7, // tri2
                      1, 0, 7  // tri3
                      ),
    gsSPNTriangles_5b(9, 10, 11,  // tri0
                      10, 12, 11, // tri1
                      10, 8, 12,  // tri2
                      10, 6, 8    // tri3
                      ),
    gsSPEndDisplayList(),
};

extern Gfx grd_s_r5_b_2_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_a_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_r5_b_2_v[187], 17, 0),
    gsSPNTrianglesInit_5b(9,       // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(5, 7, 6,    // tri0
                      8, 7, 9,    // tri1
                      10, 11, 12, // tri2
                      13, 8, 14   // tri3
                      ),
    gsSPNTriangles_5b(2, 13, 15, // tri0
                      1, 16, 10, // tri1
                      0, 0, 0,   // tri2
                      0, 0, 0    // tri3
                      ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bridge_2_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bridge_2_tex_dummy, G_IM_FMT_CI, 128, 32, 15, GX_CLAMP, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_r5_b_2_v[204], 32, 0),
    gsSPNTrianglesInit_5b(22,      // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          3, 4, 1  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 1, // tri0
                      6, 7, 8, // tri1
                      6, 9, 7, // tri2
                      10, 9, 6 // tri3
                      ),
    gsSPNTriangles_5b(10, 11, 9, // tri0
                      11, 12, 9, // tri1
                      12, 13, 9, // tri2
                      14, 15, 16 // tri3
                      ),
    gsSPNTriangles_5b(15, 17, 16, // tri0
                      18, 16, 19, // tri1
                      18, 14, 16, // tri2
                      19, 20, 21  // tri3
                      ),
    gsSPNTriangles_5b(19, 16, 20, // tri0
                      22, 23, 24, // tri1
                      22, 25, 23, // tri2
                      26, 25, 22  // tri3
                      ),
    gsSPNTriangles_5b(26, 27, 25, // tri0
                      27, 28, 25, // tri1
                      28, 29, 25, // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r5_b_2_v[234], 8, 0),
    gsSPNTrianglesInit_5b(6,       // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 2, 5  // tri2
                          ),
    gsSPNTriangles_5b(4, 0, 2, // tri0
                      5, 6, 7, // tri1
                      5, 2, 6, // tri2
                      0, 0, 0  // tri3
                      ),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(grass_tex_dummy, G_IM_FMT_CI, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_r5_b_2_v[0], 32, 0),
    gsSPNTrianglesInit_5b(23,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(5, 7, 6, // tri0
                      5, 8, 7, // tri1
                      4, 9, 5, // tri2
                      7, 10, 6 // tri3
                      ),
    gsSPNTriangles_5b(11, 10, 12, // tri0
                      12, 1, 13,  // tri1
                      12, 10, 1,  // tri2
                      11, 14, 10  // tri3
                      ),
    gsSPNTriangles_5b(14, 6, 10, // tri0
                      8, 5, 15,  // tri1
                      2, 3, 16,  // tri2
                      9, 17, 5   // tri3
                      ),
    gsSPNTriangles_5b(18, 17, 9,  // tri0
                      19, 20, 18, // tri1
                      21, 22, 20, // tri2
                      23, 24, 22  // tri3
                      ),
    gsSPNTriangles_5b(23, 25, 24, // tri0
                      25, 26, 27, // tri1
                      28, 29, 30, // tri2
                      30, 31, 28  // tri3
                      ),
    gsSPVertex(&grd_s_r5_b_2_v[32], 27, 0),
    gsSPNTrianglesInit_5b(15,      // tri count
                          0, 1, 2, // tri0
                          3, 1, 0, // tri1
                          0, 4, 5  // tri2
                          ),
    gsSPNTriangles_5b(3, 6, 7,   // tri0
                      3, 7, 1,   // tri1
                      8, 9, 10,  // tri2
                      11, 12, 13 // tri3
                      ),
    gsSPNTriangles_5b(14, 12, 11, // tri0
                      14, 15, 12, // tri1
                      16, 14, 11, // tri2
                      17, 18, 19  // tri3
                      ),
    gsSPNTriangles_5b(13, 20, 21, // tri0
                      21, 20, 22, // tri1
                      22, 23, 24, // tri2
                      25, 24, 26  // tri3
                      ),
    gsDPLoadTextureBlock_4b_Dolphin(earth_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_r5_b_2_v[59], 32, 0),
    gsSPNTrianglesInit_5b(16,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(7, 4, 8,   // tri0
                      3, 9, 10,  // tri1
                      9, 7, 11,  // tri2
                      12, 13, 14 // tri3
                      ),
    gsSPNTriangles_5b(13, 15, 14, // tri0
                      16, 17, 18, // tri1
                      17, 19, 20, // tri2
                      21, 22, 23  // tri3
                      ),
    gsSPNTriangles_5b(19, 23, 20, // tri0
                      24, 14, 22, // tri1
                      25, 26, 15, // tri2
                      25, 27, 26  // tri3
                      ),
    gsSPNTriangles_5b(28, 29, 30, // tri0
                      0, 0, 0,    // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r5_b_2_v[90], 32, 0),
    gsSPNTrianglesInit_5b(18,      // tri count
                          0, 1, 2, // tri0
                          3, 4, 5, // tri1
                          6, 7, 8  // tri2
                          ),
    gsSPNTriangles_5b(7, 5, 8,   // tri0
                      9, 10, 11, // tri1
                      12, 9, 11, // tri2
                      13, 2, 10  // tri3
                      ),
    gsSPNTriangles_5b(14, 15, 16, // tri0
                      15, 17, 16, // tri1
                      16, 18, 19, // tri2
                      20, 21, 14  // tri3
                      ),
    gsSPNTriangles_5b(22, 23, 24, // tri0
                      23, 20, 24, // tri1
                      25, 26, 27, // tri2
                      26, 22, 27  // tri3
                      ),
    gsSPNTriangles_5b(25, 28, 26, // tri0
                      25, 29, 28, // tri1
                      29, 30, 28, // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r5_b_2_v[121], 4, 0),
    gsSPNTrianglesInit_5b(2,       // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          0, 0, 0  // tri2
                          ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, cliff_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(river_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_r5_b_2_v[125], 32, 0),
    gsSPNTrianglesInit_5b(28,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          3, 4, 2  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 2, // tri0
                      4, 6, 5, // tri1
                      4, 7, 6, // tri2
                      7, 8, 6  // tri3
                      ),
    gsSPNTriangles_5b(7, 9, 8,   // tri0
                      9, 10, 8,  // tri1
                      9, 11, 10, // tri2
                      9, 12, 11  // tri3
                      ),
    gsSPNTriangles_5b(9, 13, 12,  // tri0
                      13, 14, 12, // tri1
                      13, 15, 14, // tri2
                      13, 16, 15  // tri3
                      ),
    gsSPNTriangles_5b(16, 17, 15, // tri0
                      16, 18, 17, // tri1
                      16, 19, 18, // tri2
                      19, 20, 18  // tri3
                      ),
    gsSPNTriangles_5b(19, 21, 20, // tri0
                      22, 23, 24, // tri1
                      24, 25, 22, // tri2
                      24, 26, 25  // tri3
                      ),
    gsSPNTriangles_5b(26, 27, 25, // tri0
                      26, 28, 27, // tri1
                      28, 29, 27, // tri2
                      28, 30, 29  // tri3
                      ),
    gsSPNTriangles_5b(30, 31, 29, // tri0
                      0, 0, 0,    // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r5_b_2_v[157], 13, 0),
    gsSPNTrianglesInit_5b(11,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          1, 4, 3  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 3, // tri0
                      5, 6, 3, // tri1
                      5, 7, 6, // tri2
                      7, 8, 6  // tri3
                      ),
    gsSPNTriangles_5b(7, 9, 8,   // tri0
                      9, 10, 8,  // tri1
                      10, 11, 8, // tri2
                      11, 12, 8  // tri3
                      ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_b_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_r5_b_2_v[170], 17, 0),
    gsSPNTrianglesInit_5b(9,       // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(4, 7, 5,   // tri0
                      2, 8, 9,   // tri1
                      0, 10, 11, // tri2
                      10, 12, 13 // tri3
                      ),
    gsSPNTriangles_5b(9, 14, 15, // tri0
                      12, 6, 16, // tri1
                      0, 0, 0,   // tri2
                      0, 0, 0    // tri3
                      ),
    gsSPEndDisplayList(),
};