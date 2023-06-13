#ifndef M_SCENE_TABLE_H
#define M_SCENE_TABLE_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
  TODO: is this right? I assume so based on file names but
  there may be a better place for this
*/

enum scene_table {
  /* TODO: finish */
  SCENE_FG = 0x07, /* outdoors/FG */
  SCENE_TITLE_DEMO = 0x21, /* title screen demo */
  SCENE_ISLAND_COTTAGE = 0x2F,
  /* TODO: finish */
};

#ifdef __cplusplus
}
#endif

#endif