#include "libforest/gbi_extensions.h"

extern u8 cliff_pal_dummy[];
extern u8 earth_pal_dummy[];
extern u8 water_2_tex_dummy[];
extern u8 water_1_tex_dummy[];
extern u8 river_tex_dummy[];
extern u8 grass_tex_dummy[];
extern u8 earth_tex_dummy[];

static Vtx grd_s_r7_3_v[] = {
#include "assets/field/bg/grd_s_r7_3_v.inc"
};

extern Gfx grd_s_r7_3_modelT[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 0, TEXEL0, TEXEL1, COMBINED, 0, SHADE, TEXEL0,
                       COMBINED, 0, PRIM_LOD_FRAC, PRIMITIVE),
    gsDPSetPrimColor(0, 50, 255, 255, 255, 50),
    gsDPSetEnvColor(0x00, 0x64, 0xFF, 0xFF),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPLoadTextureBlock_4b_Dolphin(water_1_tex_dummy, G_IM_FMT_I, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsDPLoadMultiBlock_4b_Dolphin(water_2_tex_dummy, 1, G_IM_FMT_I, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_r7_3_v[167], 15, 0),
    gsSPNTrianglesInit_5b(13,      // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          4, 5, 0  // tri2
                          ),
    gsSPNTriangles_5b(5, 6, 0,  // tri0
                      7, 8, 9,  // tri1
                      8, 10, 9, // tri2
                      10, 2, 9  // tri3
                      ),
    gsSPNTriangles_5b(2, 1, 9,  // tri0
                      0, 6, 3,  // tri1
                      4, 11, 5, // tri2
                      4, 12, 11 // tri3
                      ),
    gsSPNTriangles_5b(12, 13, 11, // tri0
                      13, 14, 11, // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPEndDisplayList(),
};

extern Gfx grd_s_r7_3_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(earth_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_r7_3_v[0], 32, 0),
    gsSPNTrianglesInit_5b(14,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 4, // tri1
                          3, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(5, 7, 8,   // tri0
                      7, 9, 10,  // tri1
                      9, 11, 12, // tri2
                      13, 14, 15 // tri3
                      ),
    gsSPNTriangles_5b(14, 16, 17, // tri0
                      16, 18, 19, // tri1
                      18, 20, 21, // tri2
                      20, 22, 23  // tri3
                      ),
    gsSPNTriangles_5b(24, 25, 26, // tri0
                      27, 28, 25, // tri1
                      29, 30, 28, // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r7_3_v[31], 24, 0),
    gsSPNTrianglesInit_5b(15,      // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          3, 4, 5  // tri2
                          ),
    gsSPNTriangles_5b(4, 6, 5,  // tri0
                      6, 7, 8,  // tri1
                      8, 9, 10, // tri2
                      7, 9, 8   // tri3
                      ),
    gsSPNTriangles_5b(10, 11, 12, // tri0
                      13, 14, 12, // tri1
                      14, 15, 16, // tri2
                      15, 17, 16  // tri3
                      ),
    gsSPNTriangles_5b(17, 18, 19, // tri0
                      18, 20, 19, // tri1
                      20, 21, 22, // tri2
                      21, 23, 22  // tri3
                      ),
    gsDPLoadTextureBlock_4b_Dolphin(grass_tex_dummy, G_IM_FMT_CI, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_r7_3_v[55], 32, 0),
    gsSPNTrianglesInit_5b(24,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          4, 5, 6  // tri2
                          ),
    gsSPNTriangles_5b(7, 8, 4,   // tri0
                      7, 4, 6,   // tri1
                      7, 6, 9,   // tri2
                      10, 11, 12 // tri3
                      ),
    gsSPNTriangles_5b(11, 8, 12,  // tri0
                      10, 13, 11, // tri1
                      10, 14, 13, // tri2
                      8, 7, 12    // tri3
                      ),
    gsSPNTriangles_5b(15, 16, 17, // tri0
                      16, 18, 17, // tri1
                      19, 20, 21, // tri2
                      20, 22, 21  // tri3
                      ),
    gsSPNTriangles_5b(23, 24, 22, // tri0
                      16, 15, 24, // tri1
                      25, 17, 18, // tri2
                      25, 26, 17  // tri3
                      ),
    gsSPNTriangles_5b(26, 15, 17, // tri0
                      19, 11, 13, // tri1
                      3, 27, 28,  // tri2
                      27, 29, 28  // tri3
                      ),
    gsSPNTriangles_5b(27, 30, 29, // tri0
                      0, 0, 0,    // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r7_3_v[86], 32, 0),
    gsSPNTrianglesInit_5b(23,      // tri count
                          0, 1, 2, // tri0
                          3, 4, 5, // tri1
                          0, 2, 6  // tri2
                          ),
    gsSPNTriangles_5b(6, 7, 0,   // tri0
                      8, 9, 10,  // tri1
                      10, 9, 11, // tri2
                      9, 12, 11  // tri3
                      ),
    gsSPNTriangles_5b(13, 11, 12, // tri0
                      13, 12, 14, // tri1
                      12, 15, 14, // tri2
                      12, 16, 15  // tri3
                      ),
    gsSPNTriangles_5b(16, 17, 15, // tri0
                      18, 2, 1,   // tri1
                      19, 20, 5,  // tri2
                      5, 4, 19    // tri3
                      ),
    gsSPNTriangles_5b(21, 19, 4,  // tri0
                      22, 23, 24, // tri1
                      22, 25, 26, // tri2
                      26, 23, 22  // tri3
                      ),
    gsSPNTriangles_5b(23, 27, 20, // tri0
                      28, 27, 23, // tri1
                      28, 23, 26, // tri2
                      29, 30, 31  // tri3
                      ),
    gsSPVertex(&grd_s_r7_3_v[118], 5, 0),
    gsSPNTrianglesInit_5b(2,       // tri count
                          0, 1, 2, // tri0
                          3, 2, 4, // tri1
                          0, 0, 0  // tri2
                          ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, cliff_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(river_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_r7_3_v[123], 32, 0),
    gsSPNTrianglesInit_5b(28,      // tri count
                          0, 1, 2, // tri0
                          1, 3, 2, // tri1
                          3, 4, 2  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 2, // tri0
                      5, 4, 6, // tri1
                      6, 7, 5, // tri2
                      6, 8, 7  // tri3
                      ),
    gsSPNTriangles_5b(8, 9, 7,   // tri0
                      8, 10, 9,  // tri1
                      8, 11, 10, // tri2
                      11, 12, 10 // tri3
                      ),
    gsSPNTriangles_5b(12, 13, 10, // tri0
                      13, 12, 14, // tri1
                      14, 15, 13, // tri2
                      14, 16, 15  // tri3
                      ),
    gsSPNTriangles_5b(14, 17, 16, // tri0
                      17, 18, 16, // tri1
                      18, 19, 16, // tri2
                      20, 21, 22  // tri3
                      ),
    gsSPNTriangles_5b(22, 23, 20, // tri0
                      22, 24, 23, // tri1
                      24, 25, 23, // tri2
                      24, 26, 25  // tri3
                      ),
    gsSPNTriangles_5b(24, 27, 26, // tri0
                      27, 28, 26, // tri1
                      27, 29, 28, // tri2
                      29, 30, 28  // tri3
                      ),
    gsSPNTriangles_5b(29, 31, 30, // tri0
                      0, 0, 0,    // tri1
                      0, 0, 0,    // tri2
                      0, 0, 0     // tri3
                      ),
    gsSPVertex(&grd_s_r7_3_v[155], 12, 0),
    gsSPNTrianglesInit_5b(10,      // tri count
                          0, 1, 2, // tri0
                          0, 3, 1, // tri1
                          0, 4, 3  // tri2
                          ),
    gsSPNTriangles_5b(4, 5, 3, // tri0
                      4, 6, 5, // tri1
                      4, 7, 6, // tri2
                      7, 8, 6  // tri3
                      ),
    gsSPNTriangles_5b(8, 9, 6,   // tri0
                      8, 10, 9,  // tri1
                      8, 11, 10, // tri2
                      0, 0, 0    // tri3
                      ),
    gsSPEndDisplayList(),
};