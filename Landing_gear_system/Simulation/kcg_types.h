/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* ComputingModule/SM1: */
typedef enum kcg_tag__17_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1,
  SSM_TR_Extend_GearsLockedDown_1_Extend_SM1,
  SSM_TR_Retract_GearRetractDone_1_Retract_SM1,
  SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1,
  SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1,
  SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1,
  SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1,
  SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1
} _17_SSM_TR_SM1;
/* ComputingModule/SM1: */
typedef enum kcg_tag__16_SSM_ST_SM1 {
  SSM_st_Init_SM1,
  SSM_st_Extend_SM1,
  SSM_st_Retract_SM1,
  SSM_st_GearRetractDone_SM1,
  SSM_st_CloseDoor1_SM1,
  SSM_st_OpenSwitchDoorValve_SM1,
  SSM_st_GearsLockedDown_SM1
} _16_SSM_ST_SM1;
/* Analogical_switch/SM1: */
typedef enum kcg_tag__15_SSM_TR_SM1 {
  _18_SSM_TR_no_trans_SM1,
  SSM_TR_switch_open_State3_1_switch_open_SM1,
  SSM_TR_switch_close_State4_1_switch_close_SM1,
  SSM_TR_switch_close_State4_2_switch_close_SM1,
  SSM_TR_State3_switch_close_1_State3_SM1,
  SSM_TR_State4_switch_open_1_State4_SM1
} _15_SSM_TR_SM1;
/* Analogical_switch/SM1: */
typedef enum kcg_tag__14_SSM_ST_SM1 {
  SSM_st_switch_open_SM1,
  SSM_st_switch_close_SM1,
  SSM_st_State3_SM1,
  SSM_st_State4_SM1
} _14_SSM_ST_SM1;
/* GenericMonitoring/SM1: */
typedef enum kcg_tag__13_SSM_TR_SM1 {
  _19_SSM_TR_no_trans_SM1,
  SSM_TR_All_invalid0_1_All_SM1,
  SSM_TR_All_invalid1_2_All_SM1,
  SSM_TR_All_invalid2_3_All_SM1,
  SSM_TR_invalid0_invalidAll_1_invalid0_SM1,
  SSM_TR_invalid1_invalidAll_1_invalid1_SM1,
  SSM_TR_invalid2_invalidAll_1_invalid2_SM1
} _13_SSM_TR_SM1;
/* GenericMonitoring/SM1: */
typedef enum kcg_tag__12_SSM_ST_SM1 {
  SSM_st_All_SM1,
  SSM_st_invalid0_SM1,
  SSM_st_invalid1_SM1,
  SSM_st_invalid2_SM1,
  SSM_st_invalidAll_SM1
} _12_SSM_ST_SM1;
/* electro_valve_door_gear/SM1: */
typedef enum kcg_tag__11_SSM_TR_SM1 {
  _20_SSM_TR_no_trans_SM1,
  SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1,
  SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1,
  SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1,
  SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1
} _11_SSM_TR_SM1;
/* electro_valve_door_gear/SM1: */
typedef enum kcg_tag__10_SSM_ST_SM1 {
  SSM_st_DooNotopen_SM1,
  SSM_st_DoorOpen_SM1,
  SSM_st_InteOpen2Not_SM1,
  SSM_st_InterNot2Open_SM1
} _10_SSM_ST_SM1;
/* DoorControl/SM1: */
typedef enum kcg_tag__9_SSM_TR_SM1 {
  _21_SSM_TR_no_trans_SM1,
  SSM_TR_open_door_inter_close_door_1_open_door_SM1,
  SSM_TR_close_door_State5_1_close_door_SM1,
  SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1,
  SSM_TR_State5_Intermediate1_1_State5_SM1,
  SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1
} _9_SSM_TR_SM1;
/* DoorControl/SM1: */
typedef enum kcg_tag__8_SSM_ST_SM1 {
  SSM_st_open_door_SM1,
  SSM_st_close_door_SM1,
  SSM_st_Intermediate1_SM1,
  SSM_st_State5_SM1,
  SSM_st_inter_close_door_SM1
} _8_SSM_ST_SM1;
/* GearControl/SM1: */
typedef enum kcg_tag__7_SSM_TR_SM1 {
  _22_SSM_TR_no_trans_SM1,
  SSM_TR_down_start_retract_1_down_SM1,
  SSM_TR_down_up_2_down_SM1,
  SSM_TR_gear_retraction_up_1_gear_retraction_SM1,
  SSM_TR_up_start_outgoing_1_up_SM1,
  SSM_TR_start_retract_gear_retraction_1_start_retract_SM1,
  SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1,
  SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1
} _7_SSM_TR_SM1;
/* GearControl/SM1: */
typedef enum kcg_tag__6_SSM_ST_SM1 {
  SSM_st_down_SM1,
  SSM_st_gear_retraction_SM1,
  SSM_st_up_SM1,
  SSM_st_start_retract_SM1,
  SSM_st_start_outgoing_SM1,
  SSM_st_gear_outgoing_SM1
} _6_SSM_ST_SM1;
/* AnalogicalSwitchMonitoring/SM1: */
typedef enum kcg_tag__5_SSM_TR_SM1 {
  _24_SSM_TR_no_trans_SM1,
  SSM_TR_normal_State3_1_normal_SM1,
  SSM_TR_normal_State4_2_normal_SM1,
  SSM_TR_State3_invalid_1_State3_SM1,
  SSM_TR_State4_invalid_1_State4_SM1
} _5_SSM_TR_SM1;
/* AnalogicalSwitchMonitoring/SM1: */
typedef enum kcg_tag__4_SSM_ST_SM1 {
  SSM_st_normal_SM1,
  SSM_st_invalid_SM1,
  _25_SSM_st_State3_SM1,
  _23_SSM_st_State4_SM1
} _4_SSM_ST_SM1;
/* DoorsMotionMonitoring/SM1: */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  _26_SSM_TR_no_trans_SM1,
  SSM_TR_normal_openEV_1_normal_SM1,
  SSM_TR_normal_closeEV_2_normal_SM1,
  SSM_TR_openEV_error_1_openEV_SM1,
  SSM_TR_openEV_error_2_openEV_SM1,
  SSM_TR_closeEV_error_1_closeEV_SM1,
  SSM_TR_closeEV_error_2_closeEV_SM1
} _3_SSM_TR_SM1;
/* DoorsMotionMonitoring/SM1: */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  _27_SSM_st_normal_SM1,
  SSM_st_openEV_SM1,
  SSM_st_closeEV_SM1,
  SSM_st_error_SM1
} _2_SSM_ST_SM1;
/* Gear_motion_monitering/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _28_SSM_TR_no_trans_SM1,
  SSM_TR_nomal_State3_1_nomal_SM1,
  SSM_TR_nomal_State4_2_nomal_SM1,
  SSM_TR_nomal_State5_3_nomal_SM1,
  SSM_TR_nomal_State6_4_nomal_SM1,
  SSM_TR_State3_abnormal_1_State3_SM1,
  SSM_TR_State4_abnormal_1_State4_SM1,
  SSM_TR_State5_abnormal_1_State5_SM1,
  SSM_TR_State6_abnormal_1_State6_SM1
} SSM_TR_SM1;
/* Gear_motion_monitering/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_nomal_SM1,
  SSM_st_abnormal_SM1,
  _31_SSM_st_State3_SM1,
  _30_SSM_st_State4_SM1,
  _29_SSM_st_State5_SM1,
  SSM_st_State6_SM1
} SSM_ST_SM1;
typedef kcg_bool array_bool_3[3];

#ifndef kcg_copy_array_bool_3
#define kcg_copy_array_bool_3(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_3)))
#endif /* kcg_copy_array_bool_3 */

#ifdef kcg_use_array_bool_3
#ifndef kcg_comp_array_bool_3
extern kcg_bool kcg_comp_array_bool_3(
  array_bool_3 *kcg_c1,
  array_bool_3 *kcg_c2);
#endif /* kcg_comp_array_bool_3 */
#endif /* kcg_use_array_bool_3 */

#endif /* _KCG_TYPES_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** kcg_types.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

