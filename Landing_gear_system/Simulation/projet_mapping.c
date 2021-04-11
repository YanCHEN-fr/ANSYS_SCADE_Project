/* projet_mapping.c */

#include "projet_type.h"
#include "projet_interface.h"
#include "projet_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_3);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_119, 1);
DECL_SCOPE(scope_118, 2);
DECL_SCOPE(scope_117, 1);
DECL_SCOPE(scope_116, 2);
DECL_SCOPE(scope_115, 1);
DECL_SCOPE(scope_114, 2);
DECL_SCOPE(scope_113, 1);
DECL_SCOPE(scope_112, 2);
DECL_SCOPE(scope_111, 1);
DECL_SCOPE(scope_110, 1);
DECL_SCOPE(scope_109, 1);
DECL_SCOPE(scope_108, 1);
DECL_SCOPE(scope_107, 1);
DECL_SCOPE(scope_106, 5);
DECL_SCOPE(scope_105, 13);
DECL_SCOPE(scope_104, 2);
DECL_SCOPE(scope_103, 1);
DECL_SCOPE(scope_102, 1);
DECL_SCOPE(scope_101, 1);
DECL_SCOPE(scope_100, 3);
DECL_SCOPE(scope_99, 1);
DECL_SCOPE(scope_98, 1);
DECL_SCOPE(scope_97, 3);
DECL_SCOPE(scope_96, 1);
DECL_SCOPE(scope_95, 1);
DECL_SCOPE(scope_94, 3);
DECL_SCOPE(scope_93, 11);
DECL_SCOPE(scope_92, 2);
DECL_SCOPE(scope_91, 1);
DECL_SCOPE(scope_90, 2);
DECL_SCOPE(scope_89, 1);
DECL_SCOPE(scope_88, 2);
DECL_SCOPE(scope_87, 1);
DECL_SCOPE(scope_86, 1);
DECL_SCOPE(scope_85, 1);
DECL_SCOPE(scope_84, 3);
DECL_SCOPE(scope_83, 11);
DECL_SCOPE(scope_82, 2);
DECL_SCOPE(scope_81, 1);
DECL_SCOPE(scope_80, 3);
DECL_SCOPE(scope_79, 1);
DECL_SCOPE(scope_78, 3);
DECL_SCOPE(scope_77, 1);
DECL_SCOPE(scope_76, 3);
DECL_SCOPE(scope_75, 1);
DECL_SCOPE(scope_74, 3);
DECL_SCOPE(scope_73, 1);
DECL_SCOPE(scope_72, 3);
DECL_SCOPE(scope_71, 1);
DECL_SCOPE(scope_70, 1);
DECL_SCOPE(scope_69, 4);
DECL_SCOPE(scope_68, 13);
DECL_SCOPE(scope_67, 3);
DECL_SCOPE(scope_66, 1);
DECL_SCOPE(scope_65, 3);
DECL_SCOPE(scope_64, 1);
DECL_SCOPE(scope_63, 3);
DECL_SCOPE(scope_62, 1);
DECL_SCOPE(scope_61, 2);
DECL_SCOPE(scope_60, 1);
DECL_SCOPE(scope_59, 3);
DECL_SCOPE(scope_58, 1);
DECL_SCOPE(scope_57, 3);
DECL_SCOPE(scope_56, 12);
DECL_SCOPE(scope_55, 3);
DECL_SCOPE(scope_54, 1);
DECL_SCOPE(scope_53, 2);
DECL_SCOPE(scope_52, 1);
DECL_SCOPE(scope_51, 2);
DECL_SCOPE(scope_50, 1);
DECL_SCOPE(scope_49, 2);
DECL_SCOPE(scope_48, 1);
DECL_SCOPE(scope_47, 2);
DECL_SCOPE(scope_46, 11);
DECL_SCOPE(scope_45, 2);
DECL_SCOPE(scope_44, 2);
DECL_SCOPE(scope_43, 1);
DECL_SCOPE(scope_42, 3);
DECL_SCOPE(scope_41, 1);
DECL_SCOPE(scope_40, 3);
DECL_SCOPE(scope_39, 1);
DECL_SCOPE(scope_38, 3);
DECL_SCOPE(scope_37, 1);
DECL_SCOPE(scope_36, 1);
DECL_SCOPE(scope_35, 1);
DECL_SCOPE(scope_34, 5);
DECL_SCOPE(scope_33, 12);
DECL_SCOPE(scope_32, 3);
DECL_SCOPE(scope_31, 1);
DECL_SCOPE(scope_30, 2);
DECL_SCOPE(scope_29, 1);
DECL_SCOPE(scope_28, 2);
DECL_SCOPE(scope_27, 1);
DECL_SCOPE(scope_26, 1);
DECL_SCOPE(scope_25, 3);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 2);
DECL_SCOPE(scope_22, 11);
DECL_SCOPE(scope_21, 2);
DECL_SCOPE(scope_20, 7);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 4);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 5);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 4);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 4);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 4);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 4);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 14);
DECL_SCOPE(scope_3, 15);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 148);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_State6_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_State6_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_abnormal_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_abnormal_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_nomal_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_nomal_SM1; }
static int isActive_SSM_ST_SM1__29_SSM_st_State5_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == _29_SSM_st_State5_SM1; }
static int isActive_SSM_ST_SM1__30_SSM_st_State4_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == _30_SSM_st_State4_SM1; }
static int isActive_SSM_ST_SM1__31_SSM_st_State3_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == _31_SSM_st_State3_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State3_abnormal_1_State3_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State3_abnormal_1_State3_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State4_abnormal_1_State4_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State4_abnormal_1_State4_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State5_abnormal_1_State5_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State5_abnormal_1_State5_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State6_abnormal_1_State6_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State6_abnormal_1_State6_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_nomal_State3_1_nomal_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_nomal_State3_1_nomal_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_nomal_State4_2_nomal_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_nomal_State4_2_nomal_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_nomal_State5_3_nomal_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_nomal_State5_3_nomal_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_nomal_State6_4_nomal_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_nomal_State6_4_nomal_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_DooNotopen_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_DooNotopen_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_DoorOpen_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_DoorOpen_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_InteOpen2Not_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_InteOpen2Not_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_InterNot2Open_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_InterNot2Open_SM1; }
static int isActive__11_SSM_TR_SM1_SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1; }
static int isActive__11_SSM_TR_SM1_SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1; }
static int isActive__11_SSM_TR_SM1_SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1; }
static int isActive__11_SSM_TR_SM1_SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1; }
static int isActive__12_SSM_ST_SM1_SSM_st_All_SM1(void* pHandle) { return *(_12_SSM_ST_SM1*)pHandle == SSM_st_All_SM1; }
static int isActive__12_SSM_ST_SM1_SSM_st_invalid0_SM1(void* pHandle) { return *(_12_SSM_ST_SM1*)pHandle == SSM_st_invalid0_SM1; }
static int isActive__12_SSM_ST_SM1_SSM_st_invalid1_SM1(void* pHandle) { return *(_12_SSM_ST_SM1*)pHandle == SSM_st_invalid1_SM1; }
static int isActive__12_SSM_ST_SM1_SSM_st_invalid2_SM1(void* pHandle) { return *(_12_SSM_ST_SM1*)pHandle == SSM_st_invalid2_SM1; }
static int isActive__12_SSM_ST_SM1_SSM_st_invalidAll_SM1(void* pHandle) { return *(_12_SSM_ST_SM1*)pHandle == SSM_st_invalidAll_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_All_invalid0_1_All_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_All_invalid0_1_All_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_All_invalid1_2_All_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_All_invalid1_2_All_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_All_invalid2_3_All_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_All_invalid2_3_All_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_invalid0_invalidAll_1_invalid0_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_invalid0_invalidAll_1_invalid0_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_invalid1_invalidAll_1_invalid1_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_invalid1_invalidAll_1_invalid1_SM1; }
static int isActive__13_SSM_TR_SM1_SSM_TR_invalid2_invalidAll_1_invalid2_SM1(void* pHandle) { return *(_13_SSM_TR_SM1*)pHandle == SSM_TR_invalid2_invalidAll_1_invalid2_SM1; }
static int isActive__14_SSM_ST_SM1_SSM_st_State3_SM1(void* pHandle) { return *(_14_SSM_ST_SM1*)pHandle == SSM_st_State3_SM1; }
static int isActive__14_SSM_ST_SM1_SSM_st_State4_SM1(void* pHandle) { return *(_14_SSM_ST_SM1*)pHandle == SSM_st_State4_SM1; }
static int isActive__14_SSM_ST_SM1_SSM_st_switch_close_SM1(void* pHandle) { return *(_14_SSM_ST_SM1*)pHandle == SSM_st_switch_close_SM1; }
static int isActive__14_SSM_ST_SM1_SSM_st_switch_open_SM1(void* pHandle) { return *(_14_SSM_ST_SM1*)pHandle == SSM_st_switch_open_SM1; }
static int isActive__15_SSM_TR_SM1_SSM_TR_State3_switch_close_1_State3_SM1(void* pHandle) { return *(_15_SSM_TR_SM1*)pHandle == SSM_TR_State3_switch_close_1_State3_SM1; }
static int isActive__15_SSM_TR_SM1_SSM_TR_State4_switch_open_1_State4_SM1(void* pHandle) { return *(_15_SSM_TR_SM1*)pHandle == SSM_TR_State4_switch_open_1_State4_SM1; }
static int isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_1_switch_close_SM1(void* pHandle) { return *(_15_SSM_TR_SM1*)pHandle == SSM_TR_switch_close_State4_1_switch_close_SM1; }
static int isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_2_switch_close_SM1(void* pHandle) { return *(_15_SSM_TR_SM1*)pHandle == SSM_TR_switch_close_State4_2_switch_close_SM1; }
static int isActive__15_SSM_TR_SM1_SSM_TR_switch_open_State3_1_switch_open_SM1(void* pHandle) { return *(_15_SSM_TR_SM1*)pHandle == SSM_TR_switch_open_State3_1_switch_open_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_CloseDoor1_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_CloseDoor1_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_Extend_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_Extend_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_GearRetractDone_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_GearRetractDone_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_GearsLockedDown_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_GearsLockedDown_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_Init_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_Init_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_OpenSwitchDoorValve_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_OpenSwitchDoorValve_SM1; }
static int isActive__16_SSM_ST_SM1_SSM_st_Retract_SM1(void* pHandle) { return *(_16_SSM_ST_SM1*)pHandle == SSM_st_Retract_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_Extend_GearsLockedDown_1_Extend_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_Extend_GearsLockedDown_1_Extend_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1; }
static int isActive__17_SSM_TR_SM1_SSM_TR_Retract_GearRetractDone_1_Retract_SM1(void* pHandle) { return *(_17_SSM_TR_SM1*)pHandle == SSM_TR_Retract_GearRetractDone_1_Retract_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_closeEV_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_closeEV_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_error_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_error_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_openEV_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_openEV_SM1; }
static int isActive__2_SSM_ST_SM1__27_SSM_st_normal_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == _27_SSM_st_normal_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_1_closeEV_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_closeEV_error_1_closeEV_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_2_closeEV_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_closeEV_error_2_closeEV_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_normal_closeEV_2_normal_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_normal_closeEV_2_normal_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_normal_openEV_1_normal_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_normal_openEV_1_normal_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_1_openEV_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_openEV_error_1_openEV_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_2_openEV_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_openEV_error_2_openEV_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_invalid_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_invalid_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_normal_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_normal_SM1; }
static int isActive__4_SSM_ST_SM1__23_SSM_st_State4_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == _23_SSM_st_State4_SM1; }
static int isActive__4_SSM_ST_SM1__25_SSM_st_State3_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == _25_SSM_st_State3_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_State3_invalid_1_State3_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_State3_invalid_1_State3_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_State4_invalid_1_State4_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_State4_invalid_1_State4_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_normal_State3_1_normal_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_normal_State3_1_normal_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_normal_State4_2_normal_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_normal_State4_2_normal_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_down_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_down_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_gear_outgoing_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_gear_outgoing_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_gear_retraction_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_gear_retraction_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_start_outgoing_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_start_outgoing_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_start_retract_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_start_retract_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_up_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_up_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_down_start_retract_1_down_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_down_start_retract_1_down_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_down_up_2_down_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_down_up_2_down_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_gear_retraction_up_1_gear_retraction_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_gear_retraction_up_1_gear_retraction_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_start_retract_gear_retraction_1_start_retract_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_start_retract_gear_retraction_1_start_retract_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_up_start_outgoing_1_up_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_up_start_outgoing_1_up_SM1; }
static int isActive__8_SSM_ST_SM1_SSM_st_Intermediate1_SM1(void* pHandle) { return *(_8_SSM_ST_SM1*)pHandle == SSM_st_Intermediate1_SM1; }
static int isActive__8_SSM_ST_SM1_SSM_st_State5_SM1(void* pHandle) { return *(_8_SSM_ST_SM1*)pHandle == SSM_st_State5_SM1; }
static int isActive__8_SSM_ST_SM1_SSM_st_close_door_SM1(void* pHandle) { return *(_8_SSM_ST_SM1*)pHandle == SSM_st_close_door_SM1; }
static int isActive__8_SSM_ST_SM1_SSM_st_inter_close_door_SM1(void* pHandle) { return *(_8_SSM_ST_SM1*)pHandle == SSM_st_inter_close_door_SM1; }
static int isActive__8_SSM_ST_SM1_SSM_st_open_door_SM1(void* pHandle) { return *(_8_SSM_ST_SM1*)pHandle == SSM_st_open_door_SM1; }
static int isActive__9_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1(void* pHandle) { return *(_9_SSM_TR_SM1*)pHandle == SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1; }
static int isActive__9_SSM_TR_SM1_SSM_TR_State5_Intermediate1_1_State5_SM1(void* pHandle) { return *(_9_SSM_TR_SM1*)pHandle == SSM_TR_State5_Intermediate1_1_State5_SM1; }
static int isActive__9_SSM_TR_SM1_SSM_TR_close_door_State5_1_close_door_SM1(void* pHandle) { return *(_9_SSM_TR_SM1*)pHandle == SSM_TR_close_door_State5_1_close_door_SM1; }
static int isActive__9_SSM_TR_SM1_SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1(void* pHandle) { return *(_9_SSM_TR_SM1*)pHandle == SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1; }
static int isActive__9_SSM_TR_SM1_SSM_TR_open_door_inter_close_door_1_open_door_SM1(void* pHandle) { return *(_9_SSM_TR_SM1*)pHandle == SSM_TR_open_door_inter_close_door_1_open_door_SM1; }

/* mapping definition */

const MappingIterator iter_array_3 = { "array", 3, 3, NULL };

const MappingEntry scope_119_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State6_abnormal_1_State6_SM1, NULL, 1, 0 }
};
const MappingScope scope_119 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State6:<1",
    scope_119_entries, 1
};

const MappingEntry scope_118_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State6_abnormal_1_State6_SM1, &scope_119, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_State6_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_State6_SM1, NULL, 1, 1 }
};
const MappingScope scope_118 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State6:",
    scope_118_entries, 2
};

const MappingEntry scope_117_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State5_abnormal_1_State5_SM1, NULL, 1, 0 }
};
const MappingScope scope_117 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State5:<1",
    scope_117_entries, 1
};

const MappingEntry scope_116_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State5_abnormal_1_State5_SM1, &scope_117, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_State5_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1__29_SSM_st_State5_SM1, NULL, 1, 1 }
};
const MappingScope scope_116 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State5:",
    scope_116_entries, 2
};

const MappingEntry scope_115_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State4_abnormal_1_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_115 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State4:<1",
    scope_115_entries, 1
};

const MappingEntry scope_114_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State4_abnormal_1_State4_SM1, &scope_115, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_State4_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1__30_SSM_st_State4_SM1, NULL, 1, 1 }
};
const MappingScope scope_114 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State4:",
    scope_114_entries, 2
};

const MappingEntry scope_113_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State3_abnormal_1_State3_SM1, NULL, 1, 0 }
};
const MappingScope scope_113 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State3:<1",
    scope_113_entries, 1
};

const MappingEntry scope_112_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_State3_abnormal_1_State3_SM1, &scope_113, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_State3_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1__31_SSM_st_State3_SM1, NULL, 1, 1 }
};
const MappingScope scope_112 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:State3:",
    scope_112_entries, 2
};

const MappingEntry scope_111_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_abnormal_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_abnormal_SM1, NULL, 1, 0 }
};
const MappingScope scope_111 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:abnormal:",
    scope_111_entries, 1
};

const MappingEntry scope_110_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State6_4_nomal_SM1, NULL, 1, 0 }
};
const MappingScope scope_110 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:nomal:<4",
    scope_110_entries, 1
};

const MappingEntry scope_109_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State5_3_nomal_SM1, NULL, 1, 0 }
};
const MappingScope scope_109 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:nomal:<3",
    scope_109_entries, 1
};

const MappingEntry scope_108_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State4_2_nomal_SM1, NULL, 1, 0 }
};
const MappingScope scope_108 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:nomal:<2",
    scope_108_entries, 1
};

const MappingEntry scope_107_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State3_1_nomal_SM1, NULL, 1, 0 }
};
const MappingScope scope_107 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:nomal:<1",
    scope_107_entries, 1
};

const MappingEntry scope_106_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State3_1_nomal_SM1, &scope_107, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State4_2_nomal_SM1, &scope_108, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State5_3_nomal_SM1, &scope_109, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_105_entries[5], isActive_SSM_TR_SM1_SSM_TR_nomal_State6_4_nomal_SM1, &scope_110, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, _L2_nomal_SM1), &_Type_kcg_bool_Utils, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_nomal_SM1, NULL, 1, 4 }
};
const MappingScope scope_106 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:nomal:",
    scope_106_entries, 5
};

const MappingEntry scope_105_entries[13] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Gear_motion_monitering, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Gear_motion_monitering, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Gear_motion_monitering, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_Gear_motion_monitering, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_Gear_motion_monitering, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "nomal:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_nomal_SM1, &scope_106, 1, 7 },
    /* 8 */ { MAP_STATE, "abnormal:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_abnormal_SM1, &scope_111, 1, 8 },
    /* 9 */ { MAP_STATE, "State3:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1__31_SSM_st_State3_SM1, &scope_112, 1, 9 },
    /* 10 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1__30_SSM_st_State4_SM1, &scope_114, 1, 10 },
    /* 11 */ { MAP_STATE, "State5:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1__29_SSM_st_State5_SM1, &scope_116, 1, 11 },
    /* 12 */ { MAP_STATE, "State6:", NULL, 0, 0, NULL, &scope_105_entries[0], isActive_SSM_ST_SM1_SSM_st_State6_SM1, &scope_118, 1, 12 }
};
const MappingScope scope_105 = {
    "Gear_motion_monitering/ Gear_motion_moniteringSM1:",
    scope_105_entries, 13
};

const MappingEntry scope_104_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "abnormal", NULL, sizeof(kcg_bool), offsetof(outC_Gear_motion_monitering, abnormal), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_105, 1, 1 }
};
const MappingScope scope_104 = {
    "Gear_motion_monitering/ Gear_motion_monitering",
    scope_104_entries, 2
};

const MappingEntry scope_103_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, _L1_error_SM1), &_Type_kcg_bool_Utils, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_error_SM1, NULL, 1, 0 }
};
const MappingScope scope_103 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:error:",
    scope_103_entries, 1
};

const MappingEntry scope_102_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_2_closeEV_SM1, NULL, 1, 0 }
};
const MappingScope scope_102 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:closeEV:<2",
    scope_102_entries, 1
};

const MappingEntry scope_101_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_1_closeEV_SM1, NULL, 1, 0 }
};
const MappingScope scope_101 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:closeEV:<1",
    scope_101_entries, 1
};

const MappingEntry scope_100_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_1_closeEV_SM1, &scope_101, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_closeEV_error_2_closeEV_SM1, &scope_102, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, _L1_closeEV_SM1), &_Type_kcg_bool_Utils, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_closeEV_SM1, NULL, 1, 2 }
};
const MappingScope scope_100 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:closeEV:",
    scope_100_entries, 3
};

const MappingEntry scope_99_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_2_openEV_SM1, NULL, 1, 0 }
};
const MappingScope scope_99 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:openEV:<2",
    scope_99_entries, 1
};

const MappingEntry scope_98_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_1_openEV_SM1, NULL, 1, 0 }
};
const MappingScope scope_98 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:openEV:<1",
    scope_98_entries, 1
};

const MappingEntry scope_97_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_1_openEV_SM1, &scope_98, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_openEV_error_2_openEV_SM1, &scope_99, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, _L1_openEV_SM1), &_Type_kcg_bool_Utils, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_openEV_SM1, NULL, 1, 2 }
};
const MappingScope scope_97 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:openEV:",
    scope_97_entries, 3
};

const MappingEntry scope_96_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_normal_closeEV_2_normal_SM1, NULL, 1, 0 }
};
const MappingScope scope_96 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:normal:<2",
    scope_96_entries, 1
};

const MappingEntry scope_95_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_normal_openEV_1_normal_SM1, NULL, 1, 0 }
};
const MappingScope scope_95 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:normal:<1",
    scope_95_entries, 1
};

const MappingEntry scope_94_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_normal_openEV_1_normal_SM1, &scope_95, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_93_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_normal_closeEV_2_normal_SM1, &scope_96, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, _L1_normal_SM1), &_Type_kcg_bool_Utils, &scope_93_entries[0], isActive__2_SSM_ST_SM1__27_SSM_st_normal_SM1, NULL, 1, 2 }
};
const MappingScope scope_94 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:normal:",
    scope_94_entries, 3
};

const MappingEntry scope_93_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_DoorsMotionMonitoring, SM1_state_act), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_DoorsMotionMonitoring, SM1_state_nxt), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_DoorsMotionMonitoring, SM1_state_sel), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_DoorsMotionMonitoring, SM1_fired_strong), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_DoorsMotionMonitoring, SM1_fired), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "normal:", NULL, 0, 0, NULL, &scope_93_entries[0], isActive__2_SSM_ST_SM1__27_SSM_st_normal_SM1, &scope_94, 1, 7 },
    /* 8 */ { MAP_STATE, "openEV:", NULL, 0, 0, NULL, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_openEV_SM1, &scope_97, 1, 8 },
    /* 9 */ { MAP_STATE, "closeEV:", NULL, 0, 0, NULL, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_closeEV_SM1, &scope_100, 1, 9 },
    /* 10 */ { MAP_STATE, "error:", NULL, 0, 0, NULL, &scope_93_entries[0], isActive__2_SSM_ST_SM1_SSM_st_error_SM1, &scope_103, 1, 10 }
};
const MappingScope scope_93 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoringSM1:",
    scope_93_entries, 11
};

const MappingEntry scope_92_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "doors_anomaly", NULL, sizeof(kcg_bool), offsetof(outC_DoorsMotionMonitoring, doors_anomaly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_93, 1, 1 }
};
const MappingScope scope_92 = {
    "DoorsMotionMonitoring/ DoorsMotionMonitoring",
    scope_92_entries, 2
};

const MappingEntry scope_91_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_State4_invalid_1_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_91 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:State4:<1",
    scope_91_entries, 1
};

const MappingEntry scope_90_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_State4_invalid_1_State4_SM1, &scope_91, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, _L1_State4_SM1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive__4_SSM_ST_SM1__23_SSM_st_State4_SM1, NULL, 1, 1 }
};
const MappingScope scope_90 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:State4:",
    scope_90_entries, 2
};

const MappingEntry scope_89_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_State3_invalid_1_State3_SM1, NULL, 1, 0 }
};
const MappingScope scope_89 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:State3:<1",
    scope_89_entries, 1
};

const MappingEntry scope_88_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_State3_invalid_1_State3_SM1, &scope_89, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, _L1_State3_SM1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive__4_SSM_ST_SM1__25_SSM_st_State3_SM1, NULL, 1, 1 }
};
const MappingScope scope_88 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:State3:",
    scope_88_entries, 2
};

const MappingEntry scope_87_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, _L1_invalid_SM1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive__4_SSM_ST_SM1_SSM_st_invalid_SM1, NULL, 1, 0 }
};
const MappingScope scope_87 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:invalid:",
    scope_87_entries, 1
};

const MappingEntry scope_86_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_normal_State4_2_normal_SM1, NULL, 1, 0 }
};
const MappingScope scope_86 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:normal:<2",
    scope_86_entries, 1
};

const MappingEntry scope_85_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_normal_State3_1_normal_SM1, NULL, 1, 0 }
};
const MappingScope scope_85 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:normal:<1",
    scope_85_entries, 1
};

const MappingEntry scope_84_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_normal_State3_1_normal_SM1, &scope_85, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_83_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_normal_State4_2_normal_SM1, &scope_86, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, _L1_normal_SM1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive__4_SSM_ST_SM1_SSM_st_normal_SM1, NULL, 1, 2 }
};
const MappingScope scope_84 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:normal:",
    scope_84_entries, 3
};

const MappingEntry scope_83_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_AnalogicalSwitchMonitoring, SM1_state_act), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_AnalogicalSwitchMonitoring, SM1_state_nxt), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_AnalogicalSwitchMonitoring, SM1_state_sel), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_AnalogicalSwitchMonitoring, SM1_fired_strong), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_AnalogicalSwitchMonitoring, SM1_fired), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "normal:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive__4_SSM_ST_SM1_SSM_st_normal_SM1, &scope_84, 1, 7 },
    /* 8 */ { MAP_STATE, "invalid:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive__4_SSM_ST_SM1_SSM_st_invalid_SM1, &scope_87, 1, 8 },
    /* 9 */ { MAP_STATE, "State3:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive__4_SSM_ST_SM1__25_SSM_st_State3_SM1, &scope_88, 1, 9 },
    /* 10 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive__4_SSM_ST_SM1__23_SSM_st_State4_SM1, &scope_90, 1, 10 }
};
const MappingScope scope_83 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoringSM1:",
    scope_83_entries, 11
};

const MappingEntry scope_82_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "switch_anomal", NULL, sizeof(kcg_bool), offsetof(outC_AnalogicalSwitchMonitoring, switch_anomal), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_83, 1, 1 }
};
const MappingScope scope_82 = {
    "AnalogicalSwitchMonitoring/ AnalogicalSwitchMonitoring",
    scope_82_entries, 2
};

const MappingEntry scope_81_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1, NULL, 1, 0 }
};
const MappingScope scope_81 = {
    "GearControl/ GearControlSM1:gear_outgoing:<1",
    scope_81_entries, 1
};

const MappingEntry scope_80_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1, &scope_81, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_gear_outgoing_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_outgoing_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L2_gear_outgoing_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_outgoing_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_80 = {
    "GearControl/ GearControlSM1:gear_outgoing:",
    scope_80_entries, 3
};

const MappingEntry scope_79_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1, NULL, 1, 0 }
};
const MappingScope scope_79 = {
    "GearControl/ GearControlSM1:start_outgoing:<1",
    scope_79_entries, 1
};

const MappingEntry scope_78_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1, &scope_79, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_start_outgoing_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_outgoing_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L2_start_outgoing_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_outgoing_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_78 = {
    "GearControl/ GearControlSM1:start_outgoing:",
    scope_78_entries, 3
};

const MappingEntry scope_77_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_start_retract_gear_retraction_1_start_retract_SM1, NULL, 1, 0 }
};
const MappingScope scope_77 = {
    "GearControl/ GearControlSM1:start_retract:<1",
    scope_77_entries, 1
};

const MappingEntry scope_76_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_start_retract_gear_retraction_1_start_retract_SM1, &scope_77, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_start_retract_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_retract_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L2_start_retract_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_retract_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_76 = {
    "GearControl/ GearControlSM1:start_retract:",
    scope_76_entries, 3
};

const MappingEntry scope_75_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_up_start_outgoing_1_up_SM1, NULL, 1, 0 }
};
const MappingScope scope_75 = {
    "GearControl/ GearControlSM1:up:<1",
    scope_75_entries, 1
};

const MappingEntry scope_74_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_up_start_outgoing_1_up_SM1, &scope_75, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_up_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_up_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L2_up_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_up_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_74 = {
    "GearControl/ GearControlSM1:up:",
    scope_74_entries, 3
};

const MappingEntry scope_73_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_gear_retraction_up_1_gear_retraction_SM1, NULL, 1, 0 }
};
const MappingScope scope_73 = {
    "GearControl/ GearControlSM1:gear_retraction:<1",
    scope_73_entries, 1
};

const MappingEntry scope_72_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_gear_retraction_up_1_gear_retraction_SM1, &scope_73, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_gear_retraction_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_retraction_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L2_gear_retraction_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_retraction_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_72 = {
    "GearControl/ GearControlSM1:gear_retraction:",
    scope_72_entries, 3
};

const MappingEntry scope_71_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_down_up_2_down_SM1, NULL, 1, 0 }
};
const MappingScope scope_71 = {
    "GearControl/ GearControlSM1:down:<2",
    scope_71_entries, 1
};

const MappingEntry scope_70_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_down_start_retract_1_down_SM1, NULL, 1, 0 }
};
const MappingScope scope_70 = {
    "GearControl/ GearControlSM1:down:<1",
    scope_70_entries, 1
};

const MappingEntry scope_69_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_down_start_retract_1_down_SM1, &scope_70, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_68_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_down_up_2_down_SM1, &scope_71, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L1_down_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_down_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, _L3_down_SM1), &_Type_array_bool_3_Utils, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_down_SM1, &scope_2, 1, 3 }
};
const MappingScope scope_69 = {
    "GearControl/ GearControlSM1:down:",
    scope_69_entries, 4
};

const MappingEntry scope_68_entries[13] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_GearControl, SM1_state_act), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_GearControl, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_GearControl, SM1_state_nxt), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_GearControl, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_GearControl, SM1_state_sel), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_GearControl, SM1_fired_strong), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_GearControl, SM1_fired), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "down:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_down_SM1, &scope_69, 1, 7 },
    /* 8 */ { MAP_STATE, "gear_retraction:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_retraction_SM1, &scope_72, 1, 8 },
    /* 9 */ { MAP_STATE, "up:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_up_SM1, &scope_74, 1, 9 },
    /* 10 */ { MAP_STATE, "start_retract:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_retract_SM1, &scope_76, 1, 10 },
    /* 11 */ { MAP_STATE, "start_outgoing:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_start_outgoing_SM1, &scope_78, 1, 11 },
    /* 12 */ { MAP_STATE, "gear_outgoing:", NULL, 0, 0, NULL, &scope_68_entries[0], isActive__6_SSM_ST_SM1_SSM_st_gear_outgoing_SM1, &scope_80, 1, 12 }
};
const MappingScope scope_68 = {
    "GearControl/ GearControlSM1:",
    scope_68_entries, 13
};

const MappingEntry scope_67_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "gear_extended", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, gear_extended), &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "gear_retracted", NULL, sizeof(array_bool_3), offsetof(outC_GearControl, gear_retracted), &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_68, 1, 2 }
};
const MappingScope scope_67 = {
    "GearControl/ GearControl",
    scope_67_entries, 3
};

const MappingEntry scope_66_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1, NULL, 1, 0 }
};
const MappingScope scope_66 = {
    "DoorControl/ DoorControlSM1:inter_close_door:<1",
    scope_66_entries, 1
};

const MappingEntry scope_65_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1, &scope_66, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L1_inter_close_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_inter_close_door_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L3_inter_close_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_inter_close_door_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_65 = {
    "DoorControl/ DoorControlSM1:inter_close_door:",
    scope_65_entries, 3
};

const MappingEntry scope_64_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_State5_Intermediate1_1_State5_SM1, NULL, 1, 0 }
};
const MappingScope scope_64 = {
    "DoorControl/ DoorControlSM1:State5:<1",
    scope_64_entries, 1
};

const MappingEntry scope_63_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_State5_Intermediate1_1_State5_SM1, &scope_64, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L2_State5_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_State5_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L3_State5_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_State5_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_63 = {
    "DoorControl/ DoorControlSM1:State5:",
    scope_63_entries, 3
};

const MappingEntry scope_62_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1, NULL, 1, 0 }
};
const MappingScope scope_62 = {
    "DoorControl/ DoorControlSM1:Intermediate1:<1",
    scope_62_entries, 1
};

const MappingEntry scope_61_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1, &scope_62, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L1_Intermediate1_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_Intermediate1_SM1, &scope_2, 1, 1 }
};
const MappingScope scope_61 = {
    "DoorControl/ DoorControlSM1:Intermediate1:",
    scope_61_entries, 2
};

const MappingEntry scope_60_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_close_door_State5_1_close_door_SM1, NULL, 1, 0 }
};
const MappingScope scope_60 = {
    "DoorControl/ DoorControlSM1:close_door:<1",
    scope_60_entries, 1
};

const MappingEntry scope_59_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_close_door_State5_1_close_door_SM1, &scope_60, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L1_close_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_close_door_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L2_close_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_close_door_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_59 = {
    "DoorControl/ DoorControlSM1:close_door:",
    scope_59_entries, 3
};

const MappingEntry scope_58_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_open_door_inter_close_door_1_open_door_SM1, NULL, 1, 0 }
};
const MappingScope scope_58 = {
    "DoorControl/ DoorControlSM1:open_door:<1",
    scope_58_entries, 1
};

const MappingEntry scope_57_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_56_entries[5], isActive__9_SSM_TR_SM1_SSM_TR_open_door_inter_close_door_1_open_door_SM1, &scope_58, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L1_open_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_open_door_SM1, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, _L3_open_door_SM1), &_Type_array_bool_3_Utils, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_open_door_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_57 = {
    "DoorControl/ DoorControlSM1:open_door:",
    scope_57_entries, 3
};

const MappingEntry scope_56_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_8_SSM_ST_SM1), offsetof(outC_DoorControl, SM1_state_act), &_Type__8_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorControl, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_8_SSM_ST_SM1), offsetof(outC_DoorControl, SM1_state_nxt), &_Type__8_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_DoorControl, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_8_SSM_ST_SM1), offsetof(outC_DoorControl, SM1_state_sel), &_Type__8_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_9_SSM_TR_SM1), offsetof(outC_DoorControl, SM1_fired_strong), &_Type__9_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_9_SSM_TR_SM1), offsetof(outC_DoorControl, SM1_fired), &_Type__9_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "open_door:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_open_door_SM1, &scope_57, 1, 7 },
    /* 8 */ { MAP_STATE, "close_door:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_close_door_SM1, &scope_59, 1, 8 },
    /* 9 */ { MAP_STATE, "Intermediate1:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_Intermediate1_SM1, &scope_61, 1, 9 },
    /* 10 */ { MAP_STATE, "State5:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_State5_SM1, &scope_63, 1, 10 },
    /* 11 */ { MAP_STATE, "inter_close_door:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive__8_SSM_ST_SM1_SSM_st_inter_close_door_SM1, &scope_65, 1, 11 }
};
const MappingScope scope_56 = {
    "DoorControl/ DoorControlSM1:",
    scope_56_entries, 12
};

const MappingEntry scope_55_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "door_closed", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, door_closed), &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "door_open", NULL, sizeof(array_bool_3), offsetof(outC_DoorControl, door_open), &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 2 }
};
const MappingScope scope_55 = {
    "DoorControl/ DoorControl",
    scope_55_entries, 3
};

const MappingEntry scope_54_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1, NULL, 1, 0 }
};
const MappingScope scope_54 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:InterNot2Open:<1",
    scope_54_entries, 1
};

const MappingEntry scope_53_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1, &scope_54, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, _L1_InterNot2Open_SM1), &_Type_kcg_bool_Utils, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_InterNot2Open_SM1, NULL, 1, 1 }
};
const MappingScope scope_53 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:InterNot2Open:",
    scope_53_entries, 2
};

const MappingEntry scope_52_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1, NULL, 1, 0 }
};
const MappingScope scope_52 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:InteOpen2Not:<1",
    scope_52_entries, 1
};

const MappingEntry scope_51_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1, &scope_52, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, _L2_InteOpen2Not_SM1), &_Type_kcg_bool_Utils, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_InteOpen2Not_SM1, NULL, 1, 1 }
};
const MappingScope scope_51 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:InteOpen2Not:",
    scope_51_entries, 2
};

const MappingEntry scope_50_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1, NULL, 1, 0 }
};
const MappingScope scope_50 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:DoorOpen:<1",
    scope_50_entries, 1
};

const MappingEntry scope_49_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1, &scope_50, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, _L1_DoorOpen_SM1), &_Type_kcg_bool_Utils, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_DoorOpen_SM1, NULL, 1, 1 }
};
const MappingScope scope_49 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:DoorOpen:",
    scope_49_entries, 2
};

const MappingEntry scope_48_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1, NULL, 1, 0 }
};
const MappingScope scope_48 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:DooNotopen:<1",
    scope_48_entries, 1
};

const MappingEntry scope_47_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_46_entries[5], isActive__11_SSM_TR_SM1_SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1, &scope_48, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, _L1_DooNotopen_SM1), &_Type_kcg_bool_Utils, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_DooNotopen_SM1, NULL, 1, 1 }
};
const MappingScope scope_47 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:DooNotopen:",
    scope_47_entries, 2
};

const MappingEntry scope_46_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_electro_valve_door_gear, SM1_state_act), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_electro_valve_door_gear, SM1_state_nxt), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_electro_valve_door_gear, SM1_state_sel), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_11_SSM_TR_SM1), offsetof(outC_electro_valve_door_gear, SM1_fired_strong), &_Type__11_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_11_SSM_TR_SM1), offsetof(outC_electro_valve_door_gear, SM1_fired), &_Type__11_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "DooNotopen:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_DooNotopen_SM1, &scope_47, 1, 7 },
    /* 8 */ { MAP_STATE, "DoorOpen:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_DoorOpen_SM1, &scope_49, 1, 8 },
    /* 9 */ { MAP_STATE, "InteOpen2Not:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_InteOpen2Not_SM1, &scope_51, 1, 9 },
    /* 10 */ { MAP_STATE, "InterNot2Open:", NULL, 0, 0, NULL, &scope_46_entries[0], isActive__10_SSM_ST_SM1_SSM_st_InterNot2Open_SM1, &scope_53, 1, 10 }
};
const MappingScope scope_46 = {
    "electro_valve_door_gear/ electro_valve_door_gearSM1:",
    scope_46_entries, 11
};

const MappingEntry scope_45_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "status", NULL, sizeof(kcg_bool), offsetof(outC_electro_valve_door_gear, status), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 1 }
};
const MappingScope scope_45 = {
    "electro_valve_door_gear/ electro_valve_door_gear",
    scope_45_entries, 2
};

const MappingEntry scope_44_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L2_invalidAll_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalidAll_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L3_invalidAll_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalidAll_SM1, NULL, 1, 1 }
};
const MappingScope scope_44 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalidAll:",
    scope_44_entries, 2
};

const MappingEntry scope_43_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid2_invalidAll_1_invalid2_SM1, NULL, 1, 0 }
};
const MappingScope scope_43 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid2:<1",
    scope_43_entries, 1
};

const MappingEntry scope_42_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid2_invalidAll_1_invalid2_SM1, &scope_43, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L2_invalid2_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid2_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L7_invalid2_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid2_SM1, NULL, 1, 2 }
};
const MappingScope scope_42 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid2:",
    scope_42_entries, 3
};

const MappingEntry scope_41_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid1_invalidAll_1_invalid1_SM1, NULL, 1, 0 }
};
const MappingScope scope_41 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid1:<1",
    scope_41_entries, 1
};

const MappingEntry scope_40_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid1_invalidAll_1_invalid1_SM1, &scope_41, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L2_invalid1_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid1_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L5_invalid1_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid1_SM1, NULL, 1, 2 }
};
const MappingScope scope_40 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid1:",
    scope_40_entries, 3
};

const MappingEntry scope_39_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid0_invalidAll_1_invalid0_SM1, NULL, 1, 0 }
};
const MappingScope scope_39 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid0:<1",
    scope_39_entries, 1
};

const MappingEntry scope_38_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_invalid0_invalidAll_1_invalid0_SM1, &scope_39, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L2_invalid0_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid0_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L5_invalid0_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid0_SM1, NULL, 1, 2 }
};
const MappingScope scope_38 = {
    "GenericMonitoring/ GenericMonitoringSM1:invalid0:",
    scope_38_entries, 3
};

const MappingEntry scope_37_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid2_3_All_SM1, NULL, 1, 0 }
};
const MappingScope scope_37 = {
    "GenericMonitoring/ GenericMonitoringSM1:All:<3",
    scope_37_entries, 1
};

const MappingEntry scope_36_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid1_2_All_SM1, NULL, 1, 0 }
};
const MappingScope scope_36 = {
    "GenericMonitoring/ GenericMonitoringSM1:All:<2",
    scope_36_entries, 1
};

const MappingEntry scope_35_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid0_1_All_SM1, NULL, 1, 0 }
};
const MappingScope scope_35 = {
    "GenericMonitoring/ GenericMonitoringSM1:All:<1",
    scope_35_entries, 1
};

const MappingEntry scope_34_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid0_1_All_SM1, &scope_35, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid1_2_All_SM1, &scope_36, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_33_entries[5], isActive__13_SSM_TR_SM1_SSM_TR_All_invalid2_3_All_SM1, &scope_37, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L2_All_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_All_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, _L3_All_SM1), &_Type_kcg_bool_Utils, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_All_SM1, NULL, 1, 4 }
};
const MappingScope scope_34 = {
    "GenericMonitoring/ GenericMonitoringSM1:All:",
    scope_34_entries, 5
};

const MappingEntry scope_33_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_12_SSM_ST_SM1), offsetof(outC_GenericMonitoring, SM1_state_act), &_Type__12_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_12_SSM_ST_SM1), offsetof(outC_GenericMonitoring, SM1_state_nxt), &_Type__12_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_12_SSM_ST_SM1), offsetof(outC_GenericMonitoring, SM1_state_sel), &_Type__12_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_13_SSM_TR_SM1), offsetof(outC_GenericMonitoring, SM1_fired_strong), &_Type__13_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_13_SSM_TR_SM1), offsetof(outC_GenericMonitoring, SM1_fired), &_Type__13_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "All:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_All_SM1, &scope_34, 1, 7 },
    /* 8 */ { MAP_STATE, "invalid0:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid0_SM1, &scope_38, 1, 8 },
    /* 9 */ { MAP_STATE, "invalid1:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid1_SM1, &scope_40, 1, 9 },
    /* 10 */ { MAP_STATE, "invalid2:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalid2_SM1, &scope_42, 1, 10 },
    /* 11 */ { MAP_STATE, "invalidAll:", NULL, 0, 0, NULL, &scope_33_entries[0], isActive__12_SSM_ST_SM1_SSM_st_invalidAll_SM1, &scope_44, 1, 11 }
};
const MappingScope scope_33 = {
    "GenericMonitoring/ GenericMonitoringSM1:",
    scope_33_entries, 12
};

const MappingEntry scope_32_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "anomal", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, anomal), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "sensor_output", NULL, sizeof(kcg_bool), offsetof(outC_GenericMonitoring, sensor_output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 2 }
};
const MappingScope scope_32 = {
    "GenericMonitoring/ GenericMonitoring",
    scope_32_entries, 3
};

const MappingEntry scope_31_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_State4_switch_open_1_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_31 = {
    "Analogical_switch/ Analogical_switchSM1:State4:<1",
    scope_31_entries, 1
};

const MappingEntry scope_30_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_State4_switch_open_1_State4_SM1, &scope_31, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_Analogical_switch, _L1_State4_SM1), &_Type_array_bool_3_Utils, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_State4_SM1, &scope_2, 1, 1 }
};
const MappingScope scope_30 = {
    "Analogical_switch/ Analogical_switchSM1:State4:",
    scope_30_entries, 2
};

const MappingEntry scope_29_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_State3_switch_close_1_State3_SM1, NULL, 1, 0 }
};
const MappingScope scope_29 = {
    "Analogical_switch/ Analogical_switchSM1:State3:<1",
    scope_29_entries, 1
};

const MappingEntry scope_28_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_State3_switch_close_1_State3_SM1, &scope_29, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_Analogical_switch, _L1_State3_SM1), &_Type_array_bool_3_Utils, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_State3_SM1, &scope_2, 1, 1 }
};
const MappingScope scope_28 = {
    "Analogical_switch/ Analogical_switchSM1:State3:",
    scope_28_entries, 2
};

const MappingEntry scope_27_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_2_switch_close_SM1, NULL, 1, 0 }
};
const MappingScope scope_27 = {
    "Analogical_switch/ Analogical_switchSM1:switch_close:<2",
    scope_27_entries, 1
};

const MappingEntry scope_26_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_1_switch_close_SM1, NULL, 1, 0 }
};
const MappingScope scope_26 = {
    "Analogical_switch/ Analogical_switchSM1:switch_close:<1",
    scope_26_entries, 1
};

const MappingEntry scope_25_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_1_switch_close_SM1, &scope_26, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_close_State4_2_switch_close_SM1, &scope_27, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_bool_3), offsetof(outC_Analogical_switch, _L1_switch_close_SM1), &_Type_array_bool_3_Utils, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_switch_close_SM1, &scope_2, 1, 2 }
};
const MappingScope scope_25 = {
    "Analogical_switch/ Analogical_switchSM1:switch_close:",
    scope_25_entries, 3
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_open_State3_1_switch_open_SM1, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "Analogical_switch/ Analogical_switchSM1:switch_open:<1",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_22_entries[5], isActive__15_SSM_TR_SM1_SSM_TR_switch_open_State3_1_switch_open_SM1, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_bool_3), offsetof(outC_Analogical_switch, _L4_switch_open_SM1), &_Type_array_bool_3_Utils, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_switch_open_SM1, &scope_2, 1, 1 }
};
const MappingScope scope_23 = {
    "Analogical_switch/ Analogical_switchSM1:switch_open:",
    scope_23_entries, 2
};

const MappingEntry scope_22_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_14_SSM_ST_SM1), offsetof(outC_Analogical_switch, SM1_state_act), &_Type__14_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Analogical_switch, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_14_SSM_ST_SM1), offsetof(outC_Analogical_switch, SM1_state_nxt), &_Type__14_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Analogical_switch, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_14_SSM_ST_SM1), offsetof(outC_Analogical_switch, SM1_state_sel), &_Type__14_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_15_SSM_TR_SM1), offsetof(outC_Analogical_switch, SM1_fired_strong), &_Type__15_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_15_SSM_TR_SM1), offsetof(outC_Analogical_switch, SM1_fired), &_Type__15_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "switch_open:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_switch_open_SM1, &scope_23, 1, 7 },
    /* 8 */ { MAP_STATE, "switch_close:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_switch_close_SM1, &scope_25, 1, 8 },
    /* 9 */ { MAP_STATE, "State3:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_State3_SM1, &scope_28, 1, 9 },
    /* 10 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_22_entries[0], isActive__14_SSM_ST_SM1_SSM_st_State4_SM1, &scope_30, 1, 10 }
};
const MappingScope scope_22 = {
    "Analogical_switch/ Analogical_switchSM1:",
    scope_22_entries, 11
};

const MappingEntry scope_21_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "analogical_switch", NULL, sizeof(array_bool_3), offsetof(outC_Analogical_switch, analogical_switch), &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 1 }
};
const MappingScope scope_21 = {
    "Analogical_switch/ Analogical_switch",
    scope_21_entries, 2
};

const MappingEntry scope_20_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "down2up", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, down2up), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "up2down", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, up2down), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_handle_node, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_20 = {
    "handle_node/ handle_node",
    scope_20_entries, 7
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "ComputingModule/ ComputingModuleSM1:GearsLockedDown:<1",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1, &scope_19, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_GearsLockedDown_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearsLockedDown_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_GearsLockedDown_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearsLockedDown_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_GearsLockedDown_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearsLockedDown_SM1, NULL, 1, 3 }
};
const MappingScope scope_18 = {
    "ComputingModule/ ComputingModuleSM1:GearsLockedDown:",
    scope_18_entries, 4
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "ComputingModule/ ComputingModuleSM1:OpenSwitchDoorValve:<2",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1, NULL, 1, 0 }
};
const MappingScope scope_16 = {
    "ComputingModule/ ComputingModuleSM1:OpenSwitchDoorValve:<1",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1, &scope_16, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1, &scope_17, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_OpenSwitchDoorValve_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_OpenSwitchDoorValve_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_OpenSwitchDoorValve_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_OpenSwitchDoorValve_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_OpenSwitchDoorValve_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_OpenSwitchDoorValve_SM1, NULL, 1, 4 }
};
const MappingScope scope_15 = {
    "ComputingModule/ ComputingModuleSM1:OpenSwitchDoorValve:",
    scope_15_entries, 5
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "ComputingModule/ ComputingModuleSM1:CloseDoor1:<1",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1, &scope_14, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_CloseDoor1_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_CloseDoor1_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_CloseDoor1_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_CloseDoor1_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_CloseDoor1_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_CloseDoor1_SM1, NULL, 1, 3 }
};
const MappingScope scope_13 = {
    "ComputingModule/ ComputingModuleSM1:CloseDoor1:",
    scope_13_entries, 4
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "ComputingModule/ ComputingModuleSM1:GearRetractDone:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_GearRetractDone_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearRetractDone_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_GearRetractDone_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearRetractDone_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_GearRetractDone_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearRetractDone_SM1, NULL, 1, 3 }
};
const MappingScope scope_11 = {
    "ComputingModule/ ComputingModuleSM1:GearRetractDone:",
    scope_11_entries, 4
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Retract_GearRetractDone_1_Retract_SM1, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "ComputingModule/ ComputingModuleSM1:Retract:<1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Retract_GearRetractDone_1_Retract_SM1, &scope_10, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_Retract_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Retract_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_Retract_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Retract_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_Retract_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Retract_SM1, NULL, 1, 3 }
};
const MappingScope scope_9 = {
    "ComputingModule/ ComputingModuleSM1:Retract:",
    scope_9_entries, 4
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Extend_GearsLockedDown_1_Extend_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "ComputingModule/ ComputingModuleSM1:Extend:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Extend_GearsLockedDown_1_Extend_SM1, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_Extend_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Extend_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_Extend_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Extend_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3_Extend_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Extend_SM1, NULL, 1, 3 }
};
const MappingScope scope_7 = {
    "ComputingModule/ ComputingModuleSM1:Extend:",
    scope_7_entries, 4
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "ComputingModule/ ComputingModuleSM1:Init:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive__17_SSM_TR_SM1_SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L1_Init_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Init_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L2_Init_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Init_SM1, NULL, 1, 2 }
};
const MappingScope scope_5 = {
    "ComputingModule/ ComputingModuleSM1:Init:",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[14] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_16_SSM_ST_SM1), offsetof(outC_ComputingModule, SM1_state_act), &_Type__16_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_16_SSM_ST_SM1), offsetof(outC_ComputingModule, SM1_state_nxt), &_Type__16_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_16_SSM_ST_SM1), offsetof(outC_ComputingModule, SM1_state_sel), &_Type__16_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_17_SSM_TR_SM1), offsetof(outC_ComputingModule, SM1_fired_strong), &_Type__17_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_17_SSM_TR_SM1), offsetof(outC_ComputingModule, SM1_fired), &_Type__17_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Init:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Init_SM1, &scope_5, 1, 7 },
    /* 8 */ { MAP_STATE, "Extend:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Extend_SM1, &scope_7, 1, 8 },
    /* 9 */ { MAP_STATE, "Retract:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_Retract_SM1, &scope_9, 1, 9 },
    /* 10 */ { MAP_STATE, "GearRetractDone:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearRetractDone_SM1, &scope_11, 1, 10 },
    /* 11 */ { MAP_STATE, "CloseDoor1:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_CloseDoor1_SM1, &scope_13, 1, 11 },
    /* 12 */ { MAP_STATE, "OpenSwitchDoorValve:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_OpenSwitchDoorValve_SM1, &scope_15, 1, 12 },
    /* 13 */ { MAP_STATE, "GearsLockedDown:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive__16_SSM_ST_SM1_SSM_st_GearsLockedDown_SM1, &scope_18, 1, 13 }
};
const MappingScope scope_4 = {
    "ComputingModule/ ComputingModuleSM1:",
    scope_4_entries, 14
};

const MappingEntry scope_3_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "general_EV", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, general_EV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "close_EV", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, close_EV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "open_EV", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, open_EV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "retract_EV", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, retract_EV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "extend_EV", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, extend_EV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "anomaly", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, anomaly), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "gears_maneuvering", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, gears_maneuvering), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "gears_locked_down", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, gears_locked_down), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "up2down", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, up2down), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "down2up", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, down2up), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_ComputingModule, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "handle_node 2", NULL, sizeof(outC_handle_node), offsetof(outC_ComputingModule, Context_handle_node_2), NULL, NULL, NULL, &scope_20, 1, 14 }
};
const MappingScope scope_3 = {
    "ComputingModule/ ComputingModule",
    scope_3_entries, 15
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_bool_3",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[148] = {
    /* 0 */ { MAP_OUTPUT, "global_anomaly", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.global_anomaly, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "global_maneuvering", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.global_maneuvering, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "global_locked_down", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.global_locked_down, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "handle", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.handle, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L11, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L21, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L17, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L28", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L28, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L27", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L27, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L33, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L39, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L40, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L41, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L42, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L43, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L47, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L48, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L50, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L49, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L51, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L52, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L53, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L58, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L57, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L59, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L60, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L61, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L62, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L64, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L63, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L65, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L66, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L69, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L70, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L71, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L72, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L75, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L77", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L77, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L76", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L76, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L78, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L79, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L80", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L80, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L81, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L82, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L83", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L83, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L84, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L86, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L87, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L89", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L89, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L90", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L90, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L92, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L91, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 71 },
    /* 72 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L93, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 72 },
    /* 73 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L94, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 73 },
    /* 74 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L95, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 74 },
    /* 75 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 75 },
    /* 76 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L99, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 76 },
    /* 77 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L100, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 77 },
    /* 78 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L101, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78 },
    /* 79 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L102, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 79 },
    /* 80 */ { MAP_LOCAL, "_L103", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L103, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 80 },
    /* 81 */ { MAP_LOCAL, "_L104", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L104, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 81 },
    /* 82 */ { MAP_LOCAL, "_L105", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L105, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 82 },
    /* 83 */ { MAP_LOCAL, "_L106", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L106, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 83 },
    /* 84 */ { MAP_LOCAL, "_L107", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L107, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 84 },
    /* 85 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L108, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 85 },
    /* 86 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L109, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 86 },
    /* 87 */ { MAP_LOCAL, "_L110", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L110, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 87 },
    /* 88 */ { MAP_LOCAL, "_L111", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L111, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88 },
    /* 89 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L112, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89 },
    /* 90 */ { MAP_LOCAL, "_L115", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L115, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90 },
    /* 91 */ { MAP_LOCAL, "_L116", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L116, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 91 },
    /* 92 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L113, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 92 },
    /* 93 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L114, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 93 },
    /* 94 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L117, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 94 },
    /* 95 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L118, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 95 },
    /* 96 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L121, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 96 },
    /* 97 */ { MAP_LOCAL, "_L122", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L122, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 97 },
    /* 98 */ { MAP_LOCAL, "_L123", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L123, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 98 },
    /* 99 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L124, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 99 },
    /* 100 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L125, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 100 },
    /* 101 */ { MAP_LOCAL, "_L126", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L126, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 101 },
    /* 102 */ { MAP_LOCAL, "_L127", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L127, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 102 },
    /* 103 */ { MAP_LOCAL, "_L128", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L128, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 103 },
    /* 104 */ { MAP_LOCAL, "_L129", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L129, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 104 },
    /* 105 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L130, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 105 },
    /* 106 */ { MAP_LOCAL, "_L131", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L131, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 106 },
    /* 107 */ { MAP_LOCAL, "_L132", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L132, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 107 },
    /* 108 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L133, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 108 },
    /* 109 */ { MAP_LOCAL, "_L134", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L134, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 109 },
    /* 110 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L136, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 110 },
    /* 111 */ { MAP_LOCAL, "_L137", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L137, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 111 },
    /* 112 */ { MAP_LOCAL, "_L138", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L138, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 112 },
    /* 113 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L139, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 113 },
    /* 114 */ { MAP_LOCAL, "_L140", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L140, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 114 },
    /* 115 */ { MAP_LOCAL, "_L142", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L142, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 115 },
    /* 116 */ { MAP_LOCAL, "_L143", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L143, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 116 },
    /* 117 */ { MAP_LOCAL, "_L144", NULL, sizeof(array_bool_3), (size_t)&outputs_ctx._L144, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 117 },
    /* 118 */ { MAP_LOCAL, "_L145", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L145, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 118 },
    /* 119 */ { MAP_INSTANCE, "ComputingModule 1", NULL, sizeof(outC_ComputingModule), (size_t)&outputs_ctx.Context_ComputingModule_1, NULL, NULL, NULL, &scope_3, 1, 119 },
    /* 120 */ { MAP_INSTANCE, "Analogical_switch 1", NULL, sizeof(outC_Analogical_switch), (size_t)&outputs_ctx.Context_Analogical_switch_1, NULL, NULL, NULL, &scope_21, 1, 120 },
    /* 121 */ { MAP_INSTANCE, "GenericMonitoring 1", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_1, NULL, NULL, NULL, &scope_32, 1, 121 },
    /* 122 */ { MAP_INSTANCE, "ComputingModule 2", NULL, sizeof(outC_ComputingModule), (size_t)&outputs_ctx.Context_ComputingModule_2, NULL, NULL, NULL, &scope_3, 1, 122 },
    /* 123 */ { MAP_INSTANCE, "electro_valve_door_gear 1", NULL, sizeof(outC_electro_valve_door_gear), (size_t)&outputs_ctx._1_Context_electro_valve_door_gear_1, NULL, NULL, NULL, &scope_45, 1, 123 },
    /* 124 */ { MAP_INSTANCE, "DoorControl 1", NULL, sizeof(outC_DoorControl), (size_t)&outputs_ctx.Context_DoorControl_1, NULL, NULL, NULL, &scope_55, 1, 124 },
    /* 125 */ { MAP_INSTANCE, "electro_valve_door_gear 2", NULL, sizeof(outC_electro_valve_door_gear), (size_t)&outputs_ctx._2_Context_electro_valve_door_gear_2, NULL, NULL, NULL, &scope_45, 1, 125 },
    /* 126 */ { MAP_INSTANCE, "GenericMonitoring 2", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_2, NULL, NULL, NULL, &scope_32, 1, 126 },
    /* 127 */ { MAP_INSTANCE, "GenericMonitoring 3", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_3, NULL, NULL, NULL, &scope_32, 1, 127 },
    /* 128 */ { MAP_INSTANCE, "GenericMonitoring 4", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_4, NULL, NULL, NULL, &scope_32, 1, 128 },
    /* 129 */ { MAP_INSTANCE, "GenericMonitoring 5", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_5, NULL, NULL, NULL, &scope_32, 1, 129 },
    /* 130 */ { MAP_INSTANCE, "electro_valve_door_gear 3", NULL, sizeof(outC_electro_valve_door_gear), (size_t)&outputs_ctx.Context_electro_valve_door_gear_3, NULL, NULL, NULL, &scope_45, 1, 130 },
    /* 131 */ { MAP_INSTANCE, "GearControl 1", NULL, sizeof(outC_GearControl), (size_t)&outputs_ctx.Context_GearControl_1, NULL, NULL, NULL, &scope_67, 1, 131 },
    /* 132 */ { MAP_INSTANCE, "electro_valve_door_gear 4", NULL, sizeof(outC_electro_valve_door_gear), (size_t)&outputs_ctx._3_Context_electro_valve_door_gear_4, NULL, NULL, NULL, &scope_45, 1, 132 },
    /* 133 */ { MAP_INSTANCE, "DoorControl 2", NULL, sizeof(outC_DoorControl), (size_t)&outputs_ctx.Context_DoorControl_2, NULL, NULL, NULL, &scope_55, 1, 133 },
    /* 134 */ { MAP_INSTANCE, "DoorControl 3", NULL, sizeof(outC_DoorControl), (size_t)&outputs_ctx.Context_DoorControl_3, NULL, NULL, NULL, &scope_55, 1, 134 },
    /* 135 */ { MAP_INSTANCE, "GenericMonitoring 6", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_6, NULL, NULL, NULL, &scope_32, 1, 135 },
    /* 136 */ { MAP_INSTANCE, "GenericMonitoring 7", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_7, NULL, NULL, NULL, &scope_32, 1, 136 },
    /* 137 */ { MAP_INSTANCE, "GenericMonitoring 8", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_8, NULL, NULL, NULL, &scope_32, 1, 137 },
    /* 138 */ { MAP_INSTANCE, "GenericMonitoring 9", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_9, NULL, NULL, NULL, &scope_32, 1, 138 },
    /* 139 */ { MAP_INSTANCE, "GearControl 2", NULL, sizeof(outC_GearControl), (size_t)&outputs_ctx.Context_GearControl_2, NULL, NULL, NULL, &scope_67, 1, 139 },
    /* 140 */ { MAP_INSTANCE, "GearControl 3", NULL, sizeof(outC_GearControl), (size_t)&outputs_ctx.Context_GearControl_3, NULL, NULL, NULL, &scope_67, 1, 140 },
    /* 141 */ { MAP_INSTANCE, "GenericMonitoring 10", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_10, NULL, NULL, NULL, &scope_32, 1, 141 },
    /* 142 */ { MAP_INSTANCE, "GenericMonitoring 11", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_11, NULL, NULL, NULL, &scope_32, 1, 142 },
    /* 143 */ { MAP_INSTANCE, "GenericMonitoring 12", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_12, NULL, NULL, NULL, &scope_32, 1, 143 },
    /* 144 */ { MAP_INSTANCE, "GenericMonitoring 13", NULL, sizeof(outC_GenericMonitoring), (size_t)&outputs_ctx.Context_GenericMonitoring_13, NULL, NULL, NULL, &scope_32, 1, 144 },
    /* 145 */ { MAP_INSTANCE, "AnalogicalSwitchMonitoring 1", NULL, sizeof(outC_AnalogicalSwitchMonitoring), (size_t)&outputs_ctx.Context_AnalogicalSwitchMonitoring_1, NULL, NULL, NULL, &scope_82, 1, 145 },
    /* 146 */ { MAP_INSTANCE, "DoorsMotionMonitoring 1", NULL, sizeof(outC_DoorsMotionMonitoring), (size_t)&outputs_ctx.Context_DoorsMotionMonitoring_1, NULL, NULL, NULL, &scope_92, 1, 146 },
    /* 147 */ { MAP_INSTANCE, "Gear_motion_monitering 1", NULL, sizeof(outC_Gear_motion_monitering), (size_t)&outputs_ctx.Context_Gear_motion_monitering_1, NULL, NULL, NULL, &scope_104, 1, 147 }
};
const MappingScope scope_1 = {
    "main_with_time_anomaly/ main_with_time_anomaly",
    scope_1_entries, 148
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "main_with_time_anomaly", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
