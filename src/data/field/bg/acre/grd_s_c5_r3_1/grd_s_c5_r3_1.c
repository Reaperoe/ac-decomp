#include "libforest/gbi_extensions.h"

extern u8 bush_pal_dummy[];
extern u8 cliff_pal_dummy[];
extern u8 earth_pal_dummy[];
extern u8 water_2_tex_dummy[];
extern u8 water_1_tex_dummy[];
extern u8 river_tex_dummy[];
extern u8 grass_tex_dummy[];
extern u8 bush_b_tex_dummy[];
extern u8 bush_a_tex_dummy[];
extern u8 cliff_tex_dummy[];
extern u8 earth_tex_dummy[];

static Vtx grd_s_c5_r3_1_v[] = {
#include "assets/field/bg/grd_s_c5_r3_1_v.inc"
};

extern Gfx grd_s_c5_r3_1_modelT[] = {
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
    gsSPVertex(&grd_s_c5_r3_1_v[244], 13, 0),
    gsSPNTrianglesInit_5b(11,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          1, 4, 3  // tri2
                          ),
    gsSPNTriangles_5b(1, 5, 4, // tri0
                      5, 6, 4, // tri1
                      5, 7, 6, // tri2
                      7, 8, 6  // tri3
                      ),
    gsSPNTriangles_5b(7, 9, 8,   // tri0
                      9, 10, 8,  // tri1
                      9, 11, 12, // tri2
                      9, 12, 10  // tri3
                      ),
    gsSPEndDisplayList(),
};

extern Gfx grd_s_c5_r3_1_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_a_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_c5_r3_1_v[231], 13, 0),
    gsSPNTrianglesInit_5b(6,       // tri count
                          0, 1, 2, // tri0
                          3, 0, 4, // tri1
                          5, 3, 6  // tri2
                          ),
    gsSPNTriangles_5b(7, 5, 8,   // tri0
                      9, 7, 10,  // tri1
                      11, 9, 12, // tri2
                      0, 0, 0    // tri3
                      ),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(grass_tex_dummy, G_IM_FMT_CI, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_c5_r3_1_v[0], 32, 0),
    gsSPNTrianglesInit_5b(24,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(7, 8, 9,  // tri0
                      8, 4, 9,  // tri1
                      10, 8, 7, // tri2
                      4, 11, 9  // tri3
                      ),
    gsSPNTriangles_5b(4, 6, 11,   // tri0
                      12, 13, 14, // tri1
                      12, 10, 13, // tri2
                      12, 15, 10  // tri3
                      ),
    gsSPNTriangles_5b(15, 8, 10,  // tri0
                      16, 17, 18, // tri1
                      19, 16, 20, // tri2
                      21, 18, 17  // tri3
                      ),
    gsSPNTriangles_5b(22, 23, 24, // tri0
                      23, 25, 24, // tri1
                      21, 17, 26, // tri2
                      17, 23, 26  // tri3
                      ),
    gsSPNTriangles_5b(23, 22, 26, // tri0
                      27, 28, 29, // tri1
                      30, 21, 28, // tri2
                      21, 29, 28  // tri3
                      ),
    gsSPNTriangles_5b(30, 18, 21, // tri0
                      0, 0, 0,    // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_c5_r3_1_v[31], 32, 0),
    gsSPNTrianglesInit_5b(22,      // tri count
                          0, 1, 2, // tri0
                          3, 4, 5, // tri1
                          3, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(5, 7, 6, // tri0
                      7, 8, 6, // tri1
                      3, 9, 4, // tri2
                      9, 10, 4 // tri3
                      ),
    gsSPNTriangles_5b(10, 11, 12, // tri0
                      10, 13, 11, // tri1
                      10, 9, 13,  // tri2
                      8, 14, 6    // tri3
                      ),
    gsSPNTriangles_5b(8, 15, 14,  // tri0
                      15, 16, 14, // tri1
                      17, 14, 18, // tri2
                      14, 19, 18  // tri3
                      ),
    gsSPNTriangles_5b(14, 16, 19, // tri0
                      20, 21, 22, // tri1
                      21, 23, 22, // tri2
                      23, 24, 22  // tri3
                      ),
    gsSPNTriangles_5b(25, 20, 22, // tri0
                      26, 27, 28, // tri1
                      29, 30, 31, // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_c5_r3_1_v[63], 23, 0),
    gsSPNTrianglesInit_5b(14,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          3, 4, 2  // tri2
                          ),
    gsSPNTriangles_5b(5, 6, 7, // tri0
                      0, 8, 1, // tri1
                      4, 9, 2, // tri2
                      4, 10, 9 // tri3
                      ),
    gsSPNTriangles_5b(4, 11, 10,  // tri0
                      12, 13, 14, // tri1
                      13, 15, 14, // tri2
                      16, 17, 18  // tri3
                      ),
    gsSPNTriangles_5b(16, 19, 17, // tri0
                      17, 20, 21, // tri1
                      10, 11, 22, // tri2
                      0, 0, 0     // tri3
                      ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, cliff_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(cliff_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_c5_r3_1_v[86], 31, 0),
    gsSPNTrianglesInit_5b(37,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          3, 4, 2  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 2, // tri0
                      5, 6, 2, // tri1
                      6, 0, 2, // tri2
                      7, 0, 6  // tri3
                      ),
    gsSPNTriangles_5b(5, 8, 6,   // tri0
                      9, 10, 11, // tri1
                      9, 11, 12, // tri2
                      11, 13, 14 // tri3
                      ),
    gsSPNTriangles_5b(11, 14, 12, // tri0
                      10, 15, 16, // tri1
                      10, 16, 11, // tri2
                      16, 17, 13  // tri3
                      ),
    gsSPNTriangles_5b(16, 13, 11, // tri0
                      8, 5, 13,   // tri1
                      8, 13, 17,  // tri2
                      13, 5, 4    // tri3
                      ),
    gsSPNTriangles_5b(13, 4, 14,  // tri0
                      18, 19, 20, // tri1
                      19, 21, 20, // tri2
                      19, 22, 23  // tri3
                      ),
    gsSPNTriangles_5b(19, 23, 21, // tri0
                      19, 18, 15, // tri1
                      19, 15, 10, // tri2
                      9, 19, 10   // tri3
                      ),
    gsSPNTriangles_5b(9, 22, 19,  // tri0
                      24, 21, 23, // tri1
                      24, 23, 25, // tri2
                      21, 26, 20  // tri3
                      ),
    gsSPNTriangles_5b(21, 24, 27, // tri0
                      21, 27, 26, // tri1
                      28, 29, 24, // tri2
                      28, 24, 25  // tri3
                      ),
    gsSPNTriangles_5b(24, 29, 30, // tri0
                      24, 30, 27, // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsDPLoadTextureBlock_4b_Dolphin(river_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_c5_r3_1_v[117], 32, 0),
    gsSPNTrianglesInit_5b(25,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          0, 4, 1  // tri2
                          ),
    gsSPNTriangles_5b(5, 6, 7,   // tri0
                      6, 8, 7,   // tri1
                      5, 9, 6,   // tri2
                      10, 11, 12 // tri3
                      ),
    gsSPNTriangles_5b(10, 13, 11, // tri0
                      10, 14, 13, // tri1
                      14, 5, 13,  // tri2
                      14, 9, 5    // tri3
                      ),
    gsSPNTriangles_5b(15, 16, 17, // tri0
                      15, 18, 16, // tri1
                      15, 19, 18, // tri2
                      19, 20, 18  // tri3
                      ),
    gsSPNTriangles_5b(19, 21, 20, // tri0
                      22, 17, 23, // tri1
                      22, 15, 17, // tri2
                      22, 23, 11  // tri3
                      ),
    gsSPNTriangles_5b(23, 12, 11, // tri0
                      24, 25, 26, // tri1
                      24, 27, 25, // tri2
                      28, 29, 27  // tri3
                      ),
    gsSPNTriangles_5b(24, 28, 27, // tri0
                      30, 24, 26, // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_c5_r3_1_v[148], 13, 0),
    gsSPNTrianglesInit_5b(9,       // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 0, 2  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 0, // tri0
                      6, 7, 8, // tri1
                      6, 9, 7, // tri2
                      9, 10, 7 // tri3
                      ),
    gsSPNTriangles_5b(11, 6, 8,  // tri0
                      11, 12, 6, // tri1
                      0, 0, 0,   // tri2
                      0, 0, 0    // tri3
                      ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(earth_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_c5_r3_1_v[161], 32, 0),
    gsSPNTrianglesInit_5b(18,      // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(7, 6, 8,    // tri0
                      9, 7, 8,    // tri1
                      10, 11, 12, // tri2
                      13, 11, 10  // tri3
                      ),
    gsSPNTriangles_5b(14, 13, 15, // tri0
                      16, 17, 15, // tri1
                      18, 19, 20, // tri2
                      21, 20, 22  // tri3
                      ),
    gsSPNTriangles_5b(23, 22, 24, // tri0
                      25, 24, 26, // tri1
                      27, 26, 28, // tri2
                      27, 28, 12  // tri3
                      ),
    gsSPNTriangles_5b(19, 18, 9, // tri0
                      9, 29, 19, // tri1
                      9, 8, 29,  // tri2
                      0, 0, 0    // tri3
                      ),
    gsSPVertex(&grd_s_c5_r3_1_v[191], 27, 0),
    gsSPNTrianglesInit_5b(14,      // tri count
                          0, 1, 2, // tri0
                          3, 2, 4, // tri1
                          4, 5, 3  // tri2
                          ),
    gsSPNTriangles_5b(5, 4, 6,   // tri0
                      7, 6, 8,   // tri1
                      9, 10, 11, // tri2
                      12, 13, 8  // tri3
                      ),
    gsSPNTriangles_5b(9, 11, 12,  // tri0
                      14, 10, 9,  // tri1
                      15, 16, 14, // tri2
                      17, 18, 19  // tri3
                      ),
    gsSPNTriangles_5b(19, 20, 21, // tri0
                      21, 22, 23, // tri1
                      24, 25, 26, // tri2
                      0, 0, 0     // tri3
                      ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_b_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_c5_r3_1_v[218], 13, 0),
    gsSPNTrianglesInit_5b(6,       // tri count
                          0, 1, 2, // tri0
                          3, 0, 4, // tri1
                          5, 6, 7  // tri2
                          ),
    gsSPNTriangles_5b(1, 5, 8,   // tri0
                      9, 10, 11, // tri1
                      10, 3, 12, // tri2
                      0, 0, 0    // tri3
                      ),
    gsSPEndDisplayList(),
};