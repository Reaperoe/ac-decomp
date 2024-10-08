#ifndef M_PLAYER_LIB_H
#define M_PLAYER_LIB_H

#include "types.h"
#include "m_player.h"
#include "m_private_h.h"
#include "c_keyframe.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void mPlib_Object_Exchange_keep_Player_dt(GAME_PLAY*);
extern PLAYER_ACTOR* get_player_actor_withoutCheck(GAME_PLAY* play);
extern mPlayer_Controller_Data_c* mPlib_Get_controller_data_for_title_demo_p();
extern void mPlib_SetData1_controller_data_for_title_demo(int btn_a, int btn_b, f32 stick_x, f32 stick_y);
extern void mPlib_SetData2_controller_data_for_title_demo(mActor_name_t tool);
extern void mPlib_Clear_controller_data_for_title_demo();
extern void mPlib_request_main_invade_type1(GAME_PLAY* play);
extern mActor_name_t mPlib_Get_itemNo_forWindow();
extern int mPlib_check_able_change_camera_normal_index();
extern void mPlib_request_main_refuse_type1(GAME* game);
extern void mPlib_request_main_wait_type3(GAME* game);
extern void mPlib_Set_able_force_speak_label(ACTOR* actor);
extern void mPlib_Reset_able_force_speak_label(void);
extern int mPlib_request_main_demo_walk_type1(GAME* game, f32 goal_x, f32 goal_z, f32 speed, int flag);
extern void mPlib_Set_goal_player_demo_walk(f32 goal_x, f32 goal_z, f32 speed);
extern void mPlib_Set_able_hand_all_item_in_demo(s8 enable);
extern void mPlib_change_player_cloth_info_lv2(Private_c* priv, mActor_name_t cloth_name);
extern int mPlib_Get_address_able_display();
extern int mPlib_get_player_actor_main_index(GAME* game);
extern int mPlib_check_player_actor_main_index_AllWade(GAME_PLAY* play);
extern int mPlib_request_main_demo_wait_type1(GAME* game, int param_2, void* param_3);
extern int mPlib_request_main_talk_type1(GAME_PLAY* play, ACTOR* other_actor, int turn, int flag);
extern int mPlib_request_main_talk_end_type1(GAME_PLAY* play, int return_demo_wait, int return_get_golden_axe_demo);
extern int mPlib_request_main_door_type1(GAME* game, const xyz_t* pos, s16 angle_y, int door_type, void* door_label);
extern int mPlib_request_main_door_type2(GAME* game, const xyz_t* pos, s16 angle_y, int door_type, void* door_label);
extern int mPlib_strength_request_main_door_priority(GAME* game);
extern int mPlib_check_request_main_wade_priority(GAME* game);
extern int mPlib_check_request_main_demo_wade_priority(GAME* game);
extern int mPlib_check_request_main_demo_geton_boat_wade_priority(GAME* game);
extern int mPlib_check_request_main_door_type1_priority(GAME* game);
extern int mPlib_check_request_main_door_type2_priority(GAME* game);
extern int mPlib_check_request_main_outdoor_priority(GAME* game);
extern int mPlib_check_request_main_talk_type1_priority(GAME* game);
extern int mPlib_check_request_main_speak_type1_priority(GAME* game);
extern int mPlib_Check_able_force_speak_label(GAME* game, ACTOR* label);
extern int mPlib_able_submenu_type1(GAME* game);
extern void mPlib_request_main_demo_wait_from_submenu(ACTOR* force_speak_label);
extern void mPlib_Load_PlayerTexAndPallet(void* tex_p, void* pal_p, int idx);
extern void mPlib_request_main_give_from_submenu(mActor_name_t disp_item, int submenu_ovl, int present_flag,
                                                 int counter_flag);
extern int mPlib_Check_tree_shaken_big(const xyz_t* pos);
extern int mPlib_Check_tree_shaken_little(const xyz_t* pos);
extern int mPlib_request_main_recieve_wait_type1(GAME* game, mActor_name_t item, int counter_flag);
extern int mPlib_able_player_warp_forEvent();
extern int mPlib_Get_unable_wade();
extern s8 mPlib_Get_ItemNoToItemKind(mActor_name_t);
extern void mPlib_Set_boat_angleZ(s16 angleZ);
extern int mPlib_Get_end_player_demo_walk();
extern int mPlib_request_main_demo_geton_boat_type1(f32 goal_x, f32 goal_z, s16 angleY);
extern int mPlib_request_main_demo_getoff_boat_standup_type1(const xyz_t* pos, s16 angleY);
extern int mPlib_check_player_actor_main_index_RecieveMove(GAME* game);
extern int mPlib_check_label_player_demo_wait(GAME* game, void* label);
extern int mPlib_check_player_outdoor_start(GAME* game);
extern void mPlib_Set_change_color_request();
extern int mPlib_check_player_open_umbrella(GAME_PLAY* play);
extern int mPlib_Check_UKI_COMEBACK_STATUS();
extern int mPlib_check_player_actor_main_index_OutDoorMove(GAME* game);
extern int mPlib_request_main_close_furniture_type1(GAME* game);
extern int mPlib_request_main_shock_type1(GAME* game, f32 time, s16 angle_y, int axe_swing);
extern int mPlib_request_main_hold_type1(GAME* game, int ftr_no, int player_direct, const xyz_t* player_pos);
extern int mPlib_check_player_warp_forEvent(void);
extern int mPlib_check_player_actor_main_index_Furniture_Move(GAME* game);
extern int mPlib_request_main_sitdown_type1(GAME* game, int direct, const xyz_t* pos, int ftr_no);
extern int mPlib_request_main_lie_bed_type1(GAME* game, int direct, const xyz_t* pos, int head_direct, int ftr_no);
extern void mPlib_change_player_cloth(GAME* game, int idx);
extern u32 mPlib_Get_item_net_catch_label(void);
extern int mPlib_Check_stung_mosquito(ACTOR* actorx);
extern int mPlib_request_main_stung_mosquito_type1(ACTOR* actorx);
extern int mPlib_Check_HitAxe(xyz_t* axe_pos);
extern int mPlib_Check_StopNet(xyz_t* net_pos);
extern int mPlib_Check_DigScoop(xyz_t* scoop_pos);
extern int mPlib_Check_tree_shaken(const xyz_t* pos);
extern int mPlib_Check_VibUnit_OneFrame(const xyz_t* pos);
extern int mPlib_Get_BasicItemShapeIndex_fromItemKind(int item_kind);
extern u8 mPlib_Get_Item_DataPointerType(int idx);
extern void* mPlib_Get_Item_DataPointer(int idx);
extern int mPlib_Get_BasicPlayerAnimeIndex_fromItemKind(int item_kind);
extern cKF_Animation_R_c* mPlib_Get_Pointer_Animation(int anim_idx);
extern int mPlib_Get_BasicPartTableIndex_fromAnimeIndex(int anim_idx);
extern int mPlib_Get_BasicItemAnimeIndex_fromItemKind(int item_kind);
extern void mPlib_DMA_player_Part_Table(s8* part_table_p, int idx);
extern cKF_Skeleton_R_c* mPlib_get_player_mdl_p(void);
extern u8* mPlib_Get_PlayerEyeTexAnimation_p(int anim_idx);
extern u8* mPlib_Get_PlayerMouthTexAnimation_p(int anim_idx);
extern u8* mPlib_Get_eye_tex_p(int idx);
extern u8* mPlib_Get_mouth_tex_p(int idx);
extern u8* mPlib_get_player_tex_p(GAME* game);
extern u16* mPlib_get_player_pallet_p(GAME* game);
extern u16* mPlib_get_player_face_pallet_p(GAME* game);
extern int mPlib_Check_scoop_after(GAME* game, xyz_t* pos, mActor_name_t* item, ACTOR** hit_actor, int gold_shovel);
extern int mPlib_request_main_demo_standing_train_type1(GAME* game);
extern void mPlib_Set_unable_wade(int unable);
extern int mPlib_request_main_demo_getoff_train_type1(GAME* game);
extern int mPlib_check_player_actor_main_index_OutDoorMove2(GAME* game);
extern int mPlib_Check_SetOrderSubmenu(void);
extern void mPlib_Clear_change_data_from_submenu(void);
extern int mPlib_strength_request_main_wade_priority(GAME* game);
extern int mPlib_strength_request_main_demo_wade_priority(GAME* game);
extern int mPlib_strength_request_main_demo_geton_boat_wade_priority(GAME* game);
extern int mPlib_strength_request_main_wade_snowball_priority(GAME* game);
extern void mPlib_change_player_face(GAME* game);

extern mPlayer_change_data_from_submenu_c* mPlib_Get_change_data_from_submenu_p();

extern void mPlib_Object_Exchange_keep_new_PlayerMdl(GAME_PLAY* play);
extern void mPlib_Object_Exchange_keep_new_PlayerTex(GAME_PLAY* play, int bank_id, int base_idx);
extern void mPlib_Object_Exchange_keep_new_PlayerFaceTex(GAME_PLAY* play);
extern void mPlib_Object_Exchange_keep_new_PlayerFacePallet(GAME_PLAY* play, int bank_id, int base_idx);
extern void mPlib_Object_Exchange_keep_new_PlayerPallet(GAME_PLAY* play, int bank_id, int base_idx);
extern void mPlib_request_main_give_type1(GAME* game, mActor_name_t item, int mode, int present, int on_surface);

#define GET_PLAYER_ACTOR(play) get_player_actor_withoutCheck(play)
#define GET_PLAYER_ACTOR_NOW() get_player_actor_withoutCheck((GAME_PLAY*)gamePT)
#define GET_PLAYER_ACTOR_GAME(game) get_player_actor_withoutCheck((GAME_PLAY*)(game))

#define GET_PLAYER_ACTOR_ACTOR(play) ((ACTOR*)GET_PLAYER_ACTOR(play))
#define GET_PLAYER_ACTOR_NOW_ACTOR() ((ACTOR*)GET_PLAYER_ACTOR_NOW())
#define GET_PLAYER_ACTOR_GAME_ACTOR(game) ((ACTOR*)GET_PLAYER_ACTOR_GAME(game))

#ifdef __cplusplus
}
#endif

#endif
