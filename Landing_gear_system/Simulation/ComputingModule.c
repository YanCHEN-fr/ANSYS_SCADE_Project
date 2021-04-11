/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputingModule.h"

/* ComputingModule/ */
void ComputingModule(
  /* door_open/ */
  kcg_bool door_open,
  /* door_closed/ */
  kcg_bool door_closed,
  /* gear_extended/ */
  kcg_bool gear_extended,
  /* gear_retracted/ */
  kcg_bool gear_retracted,
  /* handle/ */
  kcg_bool handle,
  /* anomal/ */
  kcg_bool anomal,
  outC_ComputingModule *outC)
{
  /* general_EV/ */
  kcg_bool general_EV_partial;
  /* close_EV/ */
  kcg_bool close_EV_partial;
  /* open_EV/ */
  kcg_bool open_EV_partial;
  /* retract_EV/ */
  kcg_bool retract_EV_partial;
  /* extend_EV/ */
  kcg_bool extend_EV_partial;
  /* anomaly/ */
  kcg_bool anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _1_general_EV_partial;
  /* close_EV/ */
  kcg_bool _2_close_EV_partial;
  /* open_EV/ */
  kcg_bool _3_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _4_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _5_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _6_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _7_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _8_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _11_SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _12_general_EV_partial;
  /* close_EV/ */
  kcg_bool _13_close_EV_partial;
  /* open_EV/ */
  kcg_bool _14_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _15_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _16_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _17_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _18_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _19_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _20_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _21_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _22_SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _23_general_EV_partial;
  /* close_EV/ */
  kcg_bool _24_close_EV_partial;
  /* open_EV/ */
  kcg_bool _25_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _26_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _27_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _28_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _29_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _30_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _31_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _32_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _33_SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _34_general_EV_partial;
  /* close_EV/ */
  kcg_bool _35_close_EV_partial;
  /* open_EV/ */
  kcg_bool _36_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _37_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _38_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _39_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _40_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _41_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _42_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _43_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _44_SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _45_general_EV_partial;
  /* close_EV/ */
  kcg_bool _46_close_EV_partial;
  /* open_EV/ */
  kcg_bool _47_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _48_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _49_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _50_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _51_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _52_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _53_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _54_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _55_SM1_fired_partial;
  /* general_EV/ */
  kcg_bool _56_general_EV_partial;
  /* close_EV/ */
  kcg_bool _57_close_EV_partial;
  /* open_EV/ */
  kcg_bool _58_open_EV_partial;
  /* retract_EV/ */
  kcg_bool _59_retract_EV_partial;
  /* extend_EV/ */
  kcg_bool _60_extend_EV_partial;
  /* anomaly/ */
  kcg_bool _61_anomaly_partial;
  /* gears_maneuvering/ */
  kcg_bool _62_gears_maneuvering_partial;
  /* gears_locked_down/ */
  kcg_bool _63_gears_locked_down_partial;
  /* SM1: */
  _16_SSM_ST_SM1 _64_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _65_SM1_reset_nxt_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _66_SM1_fired_partial;
  /* SM1: */
  _16_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Init:<1> */
  kcg_bool tr_1_guard_Init_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _67_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _68_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _69_SM1_fired_strong_partial;
  /* SM1:Extend:<1> */
  kcg_bool tr_1_guard_Extend_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _70_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _71_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _72_SM1_fired_strong_partial;
  /* SM1:Retract:<1> */
  kcg_bool tr_1_guard_Retract_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _73_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _74_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _75_SM1_fired_strong_partial;
  /* SM1:GearRetractDone:<1> */
  kcg_bool tr_1_guard_GearRetractDone_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _76_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _77_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _78_SM1_fired_strong_partial;
  /* SM1:CloseDoor1:<1> */
  kcg_bool tr_1_guard_CloseDoor1_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _79_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _80_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _81_SM1_fired_strong_partial;
  /* SM1:OpenSwitchDoorValve:<2> */
  kcg_bool tr_2_guard_OpenSwitchDoorValve_SM1;
  /* SM1:OpenSwitchDoorValve:<1> */
  kcg_bool tr_1_guard_OpenSwitchDoorValve_SM1;
  /* SM1: */
  _16_SSM_ST_SM1 _82_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _83_SM1_reset_act_partial;
  /* SM1: */
  _17_SSM_TR_SM1 _84_SM1_fired_strong_partial;
  /* SM1:GearsLockedDown:<1> */
  kcg_bool tr_1_guard_GearsLockedDown_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_CloseDoor1_SM1 :
      outC->n_times_1_size = 22;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  switch (outC->SM1_state_sel) {
    case SSM_st_CloseDoor1_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_1_size = outC->n_times_1_size;
      }
      else {
        outC->v4_times_1_size = outC->v3_times_1_size;
      }
      outC->c_times_1_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_1_size < 0) {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_1_size) {
        outC->v3_times_1_size = outC->v4_times_1_size - 1;
      }
      else {
        outC->v3_times_1_size = outC->v4_times_1_size;
      }
      outC->o_times_1_size = outC->c_times_1_size & (outC->v3_times_1_size == 0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L3 = handle;
  /* _L4=(handle_node#2)/ */ handle_node(outC->_L3, &outC->Context_handle_node_2);
  outC->_L4 = outC->Context_handle_node_2.down2up;
  outC->_L5 = outC->Context_handle_node_2.up2down;
  outC->down2up = outC->_L5;
  outC->up2down = outC->_L4;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_GearsLockedDown_SM1 :
      tr_1_guard_GearsLockedDown_SM1 = door_closed;
      if (tr_1_guard_GearsLockedDown_SM1) {
        _82_SM1_state_act_partial = SSM_st_CloseDoor1_SM1;
      }
      else {
        _82_SM1_state_act_partial = SSM_st_GearsLockedDown_SM1;
      }
      outC->SM1_state_act = _82_SM1_state_act_partial;
      if (tr_1_guard_GearsLockedDown_SM1) {
        _84_SM1_fired_strong_partial =
          SSM_TR_GearsLockedDown_CloseDoor1_1_GearsLockedDown_SM1;
      }
      else {
        _84_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _84_SM1_fired_strong_partial;
      break;
    case SSM_st_OpenSwitchDoorValve_SM1 :
      tr_2_guard_OpenSwitchDoorValve_SM1 = (!handle) & door_open;
      tr_1_guard_OpenSwitchDoorValve_SM1 = handle & door_open;
      if (tr_1_guard_OpenSwitchDoorValve_SM1) {
        _79_SM1_state_act_partial = SSM_st_Retract_SM1;
      }
      else if (tr_2_guard_OpenSwitchDoorValve_SM1) {
        _79_SM1_state_act_partial = SSM_st_Extend_SM1;
      }
      else {
        _79_SM1_state_act_partial = SSM_st_OpenSwitchDoorValve_SM1;
      }
      outC->SM1_state_act = _79_SM1_state_act_partial;
      if (tr_1_guard_OpenSwitchDoorValve_SM1) {
        _81_SM1_fired_strong_partial =
          SSM_TR_OpenSwitchDoorValve_Retract_1_OpenSwitchDoorValve_SM1;
      }
      else if (tr_2_guard_OpenSwitchDoorValve_SM1) {
        _81_SM1_fired_strong_partial =
          SSM_TR_OpenSwitchDoorValve_Extend_2_OpenSwitchDoorValve_SM1;
      }
      else {
        _81_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _81_SM1_fired_strong_partial;
      break;
    case SSM_st_CloseDoor1_SM1 :
      tr_1_guard_CloseDoor1_SM1 = outC->o_times_1_size;
      if (tr_1_guard_CloseDoor1_SM1) {
        _76_SM1_state_act_partial = SSM_st_Init_SM1;
      }
      else {
        _76_SM1_state_act_partial = SSM_st_CloseDoor1_SM1;
      }
      outC->SM1_state_act = _76_SM1_state_act_partial;
      if (tr_1_guard_CloseDoor1_SM1) {
        _78_SM1_fired_strong_partial = SSM_TR_CloseDoor1_Init_1_CloseDoor1_SM1;
      }
      else {
        _78_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _78_SM1_fired_strong_partial;
      break;
    case SSM_st_GearRetractDone_SM1 :
      tr_1_guard_GearRetractDone_SM1 = door_closed;
      if (tr_1_guard_GearRetractDone_SM1) {
        _73_SM1_state_act_partial = SSM_st_CloseDoor1_SM1;
      }
      else {
        _73_SM1_state_act_partial = SSM_st_GearRetractDone_SM1;
      }
      outC->SM1_state_act = _73_SM1_state_act_partial;
      if (tr_1_guard_GearRetractDone_SM1) {
        _75_SM1_fired_strong_partial =
          SSM_TR_GearRetractDone_CloseDoor1_1_GearRetractDone_SM1;
      }
      else {
        _75_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _75_SM1_fired_strong_partial;
      break;
    case SSM_st_Retract_SM1 :
      tr_1_guard_Retract_SM1 = gear_retracted;
      if (tr_1_guard_Retract_SM1) {
        _70_SM1_state_act_partial = SSM_st_GearRetractDone_SM1;
      }
      else {
        _70_SM1_state_act_partial = SSM_st_Retract_SM1;
      }
      outC->SM1_state_act = _70_SM1_state_act_partial;
      if (tr_1_guard_Retract_SM1) {
        _72_SM1_fired_strong_partial = SSM_TR_Retract_GearRetractDone_1_Retract_SM1;
      }
      else {
        _72_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _72_SM1_fired_strong_partial;
      break;
    case SSM_st_Extend_SM1 :
      tr_1_guard_Extend_SM1 = gear_extended;
      if (tr_1_guard_Extend_SM1) {
        _67_SM1_state_act_partial = SSM_st_GearsLockedDown_SM1;
      }
      else {
        _67_SM1_state_act_partial = SSM_st_Extend_SM1;
      }
      outC->SM1_state_act = _67_SM1_state_act_partial;
      if (tr_1_guard_Extend_SM1) {
        _69_SM1_fired_strong_partial = SSM_TR_Extend_GearsLockedDown_1_Extend_SM1;
      }
      else {
        _69_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _69_SM1_fired_strong_partial;
      break;
    case SSM_st_Init_SM1 :
      tr_1_guard_Init_SM1 = outC->up2down | outC->down2up;
      if (tr_1_guard_Init_SM1) {
        SM1_state_act_partial = SSM_st_OpenSwitchDoorValve_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Init_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_Init_SM1) {
        SM1_fired_strong_partial = SSM_TR_Init_OpenSwitchDoorValve_1_Init_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_GearsLockedDown_SM1 :
      _66_SM1_fired_partial = outC->SM1_fired_strong;
      _65_SM1_reset_nxt_partial = kcg_false;
      _64_SM1_state_nxt_partial = SSM_st_GearsLockedDown_SM1;
      outC->_L3_GearsLockedDown_SM1 = anomal;
      outC->_L2_GearsLockedDown_SM1 = kcg_true;
      outC->_L1_GearsLockedDown_SM1 = kcg_false;
      _63_gears_locked_down_partial = outC->_L2_GearsLockedDown_SM1;
      _62_gears_maneuvering_partial = outC->_L2_GearsLockedDown_SM1;
      _61_anomaly_partial = outC->_L3_GearsLockedDown_SM1;
      _60_extend_EV_partial = outC->_L1_GearsLockedDown_SM1;
      _59_retract_EV_partial = outC->_L1_GearsLockedDown_SM1;
      _58_open_EV_partial = outC->_L1_GearsLockedDown_SM1;
      _57_close_EV_partial = outC->_L2_GearsLockedDown_SM1;
      _56_general_EV_partial = outC->_L2_GearsLockedDown_SM1;
      outC->general_EV = _56_general_EV_partial;
      outC->close_EV = _57_close_EV_partial;
      outC->open_EV = _58_open_EV_partial;
      outC->retract_EV = _59_retract_EV_partial;
      outC->extend_EV = _60_extend_EV_partial;
      outC->anomaly = _61_anomaly_partial;
      outC->gears_maneuvering = _62_gears_maneuvering_partial;
      outC->gears_locked_down = _63_gears_locked_down_partial;
      outC->SM1_state_nxt = _64_SM1_state_nxt_partial;
      break;
    case SSM_st_OpenSwitchDoorValve_SM1 :
      _55_SM1_fired_partial = outC->SM1_fired_strong;
      _54_SM1_reset_nxt_partial = kcg_false;
      _53_SM1_state_nxt_partial = SSM_st_OpenSwitchDoorValve_SM1;
      outC->_L3_OpenSwitchDoorValve_SM1 = anomal;
      outC->_L2_OpenSwitchDoorValve_SM1 = kcg_false;
      _48_retract_EV_partial = outC->_L2_OpenSwitchDoorValve_SM1;
      _52_gears_locked_down_partial = outC->_L2_OpenSwitchDoorValve_SM1;
      _51_gears_maneuvering_partial = outC->_L2_OpenSwitchDoorValve_SM1;
      _50_anomaly_partial = outC->_L3_OpenSwitchDoorValve_SM1;
      _49_extend_EV_partial = outC->_L2_OpenSwitchDoorValve_SM1;
      outC->_L1_OpenSwitchDoorValve_SM1 = kcg_true;
      _47_open_EV_partial = outC->_L1_OpenSwitchDoorValve_SM1;
      _46_close_EV_partial = outC->_L2_OpenSwitchDoorValve_SM1;
      _45_general_EV_partial = outC->_L1_OpenSwitchDoorValve_SM1;
      outC->general_EV = _45_general_EV_partial;
      outC->close_EV = _46_close_EV_partial;
      outC->open_EV = _47_open_EV_partial;
      outC->retract_EV = _48_retract_EV_partial;
      outC->extend_EV = _49_extend_EV_partial;
      outC->anomaly = _50_anomaly_partial;
      outC->gears_maneuvering = _51_gears_maneuvering_partial;
      outC->gears_locked_down = _52_gears_locked_down_partial;
      outC->SM1_state_nxt = _53_SM1_state_nxt_partial;
      break;
    case SSM_st_CloseDoor1_SM1 :
      _44_SM1_fired_partial = outC->SM1_fired_strong;
      _43_SM1_reset_nxt_partial = kcg_false;
      _42_SM1_state_nxt_partial = SSM_st_CloseDoor1_SM1;
      outC->_L3_CloseDoor1_SM1 = anomal;
      outC->_L2_CloseDoor1_SM1 = kcg_true;
      outC->_L1_CloseDoor1_SM1 = kcg_false;
      _41_gears_locked_down_partial = outC->_L1_CloseDoor1_SM1;
      _40_gears_maneuvering_partial = outC->_L1_CloseDoor1_SM1;
      _39_anomaly_partial = outC->_L3_CloseDoor1_SM1;
      _38_extend_EV_partial = outC->_L1_CloseDoor1_SM1;
      _37_retract_EV_partial = outC->_L1_CloseDoor1_SM1;
      _36_open_EV_partial = outC->_L1_CloseDoor1_SM1;
      _35_close_EV_partial = outC->_L1_CloseDoor1_SM1;
      _34_general_EV_partial = outC->_L2_CloseDoor1_SM1;
      outC->general_EV = _34_general_EV_partial;
      outC->close_EV = _35_close_EV_partial;
      outC->open_EV = _36_open_EV_partial;
      outC->retract_EV = _37_retract_EV_partial;
      outC->extend_EV = _38_extend_EV_partial;
      outC->anomaly = _39_anomaly_partial;
      outC->gears_maneuvering = _40_gears_maneuvering_partial;
      outC->gears_locked_down = _41_gears_locked_down_partial;
      outC->SM1_state_nxt = _42_SM1_state_nxt_partial;
      break;
    case SSM_st_GearRetractDone_SM1 :
      _33_SM1_fired_partial = outC->SM1_fired_strong;
      _32_SM1_reset_nxt_partial = kcg_false;
      _31_SM1_state_nxt_partial = SSM_st_GearRetractDone_SM1;
      outC->_L3_GearRetractDone_SM1 = anomal;
      outC->_L2_GearRetractDone_SM1 = kcg_true;
      outC->_L1_GearRetractDone_SM1 = kcg_false;
      _30_gears_locked_down_partial = outC->_L1_GearRetractDone_SM1;
      _29_gears_maneuvering_partial = outC->_L1_GearRetractDone_SM1;
      _28_anomaly_partial = outC->_L3_GearRetractDone_SM1;
      _27_extend_EV_partial = outC->_L1_GearRetractDone_SM1;
      _26_retract_EV_partial = outC->_L1_GearRetractDone_SM1;
      _25_open_EV_partial = outC->_L1_GearRetractDone_SM1;
      _24_close_EV_partial = outC->_L2_GearRetractDone_SM1;
      _23_general_EV_partial = outC->_L2_GearRetractDone_SM1;
      outC->general_EV = _23_general_EV_partial;
      outC->close_EV = _24_close_EV_partial;
      outC->open_EV = _25_open_EV_partial;
      outC->retract_EV = _26_retract_EV_partial;
      outC->extend_EV = _27_extend_EV_partial;
      outC->anomaly = _28_anomaly_partial;
      outC->gears_maneuvering = _29_gears_maneuvering_partial;
      outC->gears_locked_down = _30_gears_locked_down_partial;
      outC->SM1_state_nxt = _31_SM1_state_nxt_partial;
      break;
    case SSM_st_Retract_SM1 :
      _22_SM1_fired_partial = outC->SM1_fired_strong;
      _21_SM1_reset_nxt_partial = kcg_false;
      _20_SM1_state_nxt_partial = SSM_st_Retract_SM1;
      outC->_L3_Retract_SM1 = anomal;
      outC->_L2_Retract_SM1 = kcg_true;
      outC->_L1_Retract_SM1 = kcg_false;
      _19_gears_locked_down_partial = outC->_L1_Retract_SM1;
      _18_gears_maneuvering_partial = outC->_L2_Retract_SM1;
      _17_anomaly_partial = outC->_L3_Retract_SM1;
      _16_extend_EV_partial = outC->_L1_Retract_SM1;
      _15_retract_EV_partial = outC->_L2_Retract_SM1;
      _14_open_EV_partial = outC->_L1_Retract_SM1;
      _13_close_EV_partial = outC->_L1_Retract_SM1;
      _12_general_EV_partial = outC->_L2_Retract_SM1;
      outC->general_EV = _12_general_EV_partial;
      outC->close_EV = _13_close_EV_partial;
      outC->open_EV = _14_open_EV_partial;
      outC->retract_EV = _15_retract_EV_partial;
      outC->extend_EV = _16_extend_EV_partial;
      outC->anomaly = _17_anomaly_partial;
      outC->gears_maneuvering = _18_gears_maneuvering_partial;
      outC->gears_locked_down = _19_gears_locked_down_partial;
      outC->SM1_state_nxt = _20_SM1_state_nxt_partial;
      break;
    case SSM_st_Extend_SM1 :
      _11_SM1_fired_partial = outC->SM1_fired_strong;
      _10_SM1_reset_nxt_partial = kcg_false;
      _9_SM1_state_nxt_partial = SSM_st_Extend_SM1;
      outC->_L3_Extend_SM1 = anomal;
      outC->_L2_Extend_SM1 = kcg_true;
      _5_extend_EV_partial = outC->_L2_Extend_SM1;
      outC->_L1_Extend_SM1 = kcg_false;
      _8_gears_locked_down_partial = outC->_L1_Extend_SM1;
      _7_gears_maneuvering_partial = outC->_L2_Extend_SM1;
      _6_anomaly_partial = outC->_L3_Extend_SM1;
      _4_retract_EV_partial = outC->_L1_Extend_SM1;
      _3_open_EV_partial = outC->_L1_Extend_SM1;
      _2_close_EV_partial = outC->_L1_Extend_SM1;
      _1_general_EV_partial = outC->_L2_Extend_SM1;
      outC->general_EV = _1_general_EV_partial;
      outC->close_EV = _2_close_EV_partial;
      outC->open_EV = _3_open_EV_partial;
      outC->retract_EV = _4_retract_EV_partial;
      outC->extend_EV = _5_extend_EV_partial;
      outC->anomaly = _6_anomaly_partial;
      outC->gears_maneuvering = _7_gears_maneuvering_partial;
      outC->gears_locked_down = _8_gears_locked_down_partial;
      outC->SM1_state_nxt = _9_SM1_state_nxt_partial;
      break;
    case SSM_st_Init_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Init_SM1;
      outC->_L2_Init_SM1 = anomal;
      outC->_L1_Init_SM1 = kcg_false;
      gears_locked_down_partial = outC->_L1_Init_SM1;
      gears_maneuvering_partial = outC->_L1_Init_SM1;
      anomaly_partial = outC->_L2_Init_SM1;
      extend_EV_partial = outC->_L1_Init_SM1;
      retract_EV_partial = outC->_L1_Init_SM1;
      open_EV_partial = outC->_L1_Init_SM1;
      close_EV_partial = outC->_L1_Init_SM1;
      general_EV_partial = outC->_L1_Init_SM1;
      outC->general_EV = general_EV_partial;
      outC->close_EV = close_EV_partial;
      outC->open_EV = open_EV_partial;
      outC->retract_EV = retract_EV_partial;
      outC->extend_EV = extend_EV_partial;
      outC->anomaly = anomaly_partial;
      outC->gears_maneuvering = gears_maneuvering_partial;
      outC->gears_locked_down = gears_locked_down_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_GearsLockedDown_SM1 :
      outC->SM1_reset_nxt = _65_SM1_reset_nxt_partial;
      outC->SM1_fired = _66_SM1_fired_partial;
      break;
    case SSM_st_OpenSwitchDoorValve_SM1 :
      outC->SM1_reset_nxt = _54_SM1_reset_nxt_partial;
      outC->SM1_fired = _55_SM1_fired_partial;
      break;
    case SSM_st_CloseDoor1_SM1 :
      outC->SM1_reset_nxt = _43_SM1_reset_nxt_partial;
      outC->SM1_fired = _44_SM1_fired_partial;
      break;
    case SSM_st_GearRetractDone_SM1 :
      outC->SM1_reset_nxt = _32_SM1_reset_nxt_partial;
      outC->SM1_fired = _33_SM1_fired_partial;
      break;
    case SSM_st_Retract_SM1 :
      outC->SM1_reset_nxt = _21_SM1_reset_nxt_partial;
      outC->SM1_fired = _22_SM1_fired_partial;
      break;
    case SSM_st_Extend_SM1 :
      outC->SM1_reset_nxt = _10_SM1_reset_nxt_partial;
      outC->SM1_fired = _11_SM1_fired_partial;
      break;
    case SSM_st_Init_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_GearsLockedDown_SM1 :
      _83_SM1_reset_act_partial = tr_1_guard_GearsLockedDown_SM1;
      outC->SM1_reset_act = _83_SM1_reset_act_partial;
      break;
    case SSM_st_OpenSwitchDoorValve_SM1 :
      if (tr_1_guard_OpenSwitchDoorValve_SM1) {
        _80_SM1_reset_act_partial = kcg_true;
      }
      else {
        _80_SM1_reset_act_partial = tr_2_guard_OpenSwitchDoorValve_SM1;
      }
      outC->SM1_reset_act = _80_SM1_reset_act_partial;
      break;
    case SSM_st_CloseDoor1_SM1 :
      _77_SM1_reset_act_partial = tr_1_guard_CloseDoor1_SM1;
      outC->SM1_reset_act = _77_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_GearRetractDone_SM1 :
      _74_SM1_reset_act_partial = tr_1_guard_GearRetractDone_SM1;
      outC->SM1_reset_act = _74_SM1_reset_act_partial;
      break;
    case SSM_st_Retract_SM1 :
      _71_SM1_reset_act_partial = tr_1_guard_Retract_SM1;
      outC->SM1_reset_act = _71_SM1_reset_act_partial;
      break;
    case SSM_st_Extend_SM1 :
      _68_SM1_reset_act_partial = tr_1_guard_Extend_SM1;
      outC->SM1_reset_act = _68_SM1_reset_act_partial;
      break;
    case SSM_st_Init_SM1 :
      SM1_reset_act_partial = tr_1_guard_Init_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ComputingModule_init(outC_ComputingModule *outC)
{
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_true;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Init_SM1;
  outC->SM1_state_sel = SSM_st_Init_SM1;
  outC->_L1_GearsLockedDown_SM1 = kcg_true;
  outC->_L2_GearsLockedDown_SM1 = kcg_true;
  outC->_L3_GearsLockedDown_SM1 = kcg_true;
  outC->_L1_OpenSwitchDoorValve_SM1 = kcg_true;
  outC->_L2_OpenSwitchDoorValve_SM1 = kcg_true;
  outC->_L3_OpenSwitchDoorValve_SM1 = kcg_true;
  outC->_L1_CloseDoor1_SM1 = kcg_true;
  outC->_L2_CloseDoor1_SM1 = kcg_true;
  outC->_L3_CloseDoor1_SM1 = kcg_true;
  outC->_L1_GearRetractDone_SM1 = kcg_true;
  outC->_L2_GearRetractDone_SM1 = kcg_true;
  outC->_L3_GearRetractDone_SM1 = kcg_true;
  outC->_L1_Retract_SM1 = kcg_true;
  outC->_L2_Retract_SM1 = kcg_true;
  outC->_L3_Retract_SM1 = kcg_true;
  outC->_L1_Extend_SM1 = kcg_true;
  outC->_L2_Extend_SM1 = kcg_true;
  outC->_L3_Extend_SM1 = kcg_true;
  outC->_L1_Init_SM1 = kcg_true;
  outC->_L2_Init_SM1 = kcg_true;
  outC->v4_times_1_size = 0;
  outC->n_times_1_size = 0;
  outC->c_times_1_size = kcg_true;
  outC->o_times_1_size = kcg_true;
  outC->v3_times_1_size = 0;
  outC->init = kcg_true;
  outC->down2up = kcg_true;
  outC->up2down = kcg_true;
  outC->gears_locked_down = kcg_true;
  outC->gears_maneuvering = kcg_true;
  outC->anomaly = kcg_true;
  outC->extend_EV = kcg_true;
  outC->retract_EV = kcg_true;
  outC->open_EV = kcg_true;
  outC->close_EV = kcg_true;
  outC->general_EV = kcg_true;
  /* _L4=(handle_node#2)/ */ handle_node_init(&outC->Context_handle_node_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Init_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ComputingModule_reset(outC_ComputingModule *outC)
{
  outC->init = kcg_true;
  /* _L4=(handle_node#2)/ */ handle_node_reset(&outC->Context_handle_node_2);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Init_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ComputingModule/
  @1: (times#1)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ComputingModule.c
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

