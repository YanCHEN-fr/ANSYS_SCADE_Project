/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DoorsMotionMonitoring.h"

/* DoorsMotionMonitoring/ */
void DoorsMotionMonitoring(
  /* door_closed/ */
  array_bool_3 *door_closed,
  /* door_open/ */
  array_bool_3 *door_open,
  /* anomaly_time/ */
  kcg_int16 anomaly_time,
  /* close_EV/ */
  kcg_bool close_EV,
  /* open_EV/ */
  kcg_bool open_EV,
  outC_DoorsMotionMonitoring *outC)
{
  kcg_bool op_call;
  kcg_bool _1_op_call;
  kcg_bool _2_op_call;
  kcg_bool _3_op_call;
  /* doors_anomaly/ */
  kcg_bool doors_anomaly_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_partial;
  /* doors_anomaly/ */
  kcg_bool _4_doors_anomaly_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _7_SM1_fired_partial;
  /* doors_anomaly/ */
  kcg_bool _8_doors_anomaly_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _11_SM1_fired_partial;
  /* doors_anomaly/ */
  kcg_bool _12_doors_anomaly_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _15_SM1_fired_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:normal:<2> */
  kcg_bool tr_2_guard_normal_SM1;
  /* SM1:normal:<1> */
  kcg_bool tr_1_guard_normal_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:openEV:<2> */
  kcg_bool tr_2_guard_openEV_SM1;
  /* SM1:openEV:<1> */
  kcg_bool tr_1_guard_openEV_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:closeEV:<2> */
  kcg_bool tr_2_guard_closeEV_SM1;
  /* SM1:closeEV:<1> */
  kcg_bool tr_1_guard_closeEV_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _22_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _24_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_closeEV_SM1 :
      outC->n_times_39_int16 = anomaly_time;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      _22_SM1_state_act_partial = SSM_st_error_SM1;
      outC->SM1_state_act = _22_SM1_state_act_partial;
      _24_SM1_fired_strong_partial = _26_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _24_SM1_fired_strong_partial;
      break;
    case SSM_st_closeEV_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_39_int16 = outC->n_times_39_int16;
      }
      else {
        outC->v4_times_39_int16 = outC->v3_times_39_int16;
      }
      outC->c_times_39_int16 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_39_int16 < kcg_lit_int16(0)) {
        outC->v3_times_39_int16 = outC->v4_times_39_int16;
      }
      else /* @1/_/v3= */
      if (outC->c_times_39_int16) {
        outC->v3_times_39_int16 = outC->v4_times_39_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_39_int16 = outC->v4_times_39_int16;
      }
      outC->o_times_39_int16 = outC->c_times_39_int16 &
        (outC->v3_times_39_int16 == kcg_lit_int16(0));
      outC->n_times_40_int16 = anomaly_time;
      /* @2/_/v4= */
      if (outC->init) {
        outC->v4_times_40_int16 = outC->n_times_40_int16;
      }
      else {
        outC->v4_times_40_int16 = outC->v3_times_40_int16;
      }
      outC->c_times_40_int16 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_40_int16 < kcg_lit_int16(0)) {
        outC->v3_times_40_int16 = outC->v4_times_40_int16;
      }
      else /* @2/_/v3= */
      if (outC->c_times_40_int16) {
        outC->v3_times_40_int16 = outC->v4_times_40_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_40_int16 = outC->v4_times_40_int16;
      }
      outC->o_times_40_int16 = outC->c_times_40_int16 &
        (outC->v3_times_40_int16 == kcg_lit_int16(0));
      _2_op_call = outC->o_times_40_int16;
      _3_op_call = outC->o_times_39_int16;
      tr_2_guard_closeEV_SM1 = (((*door_closed)[0] & (*door_closed)[1] &
            (*door_closed)[2]) == kcg_false) & _3_op_call;
      tr_1_guard_closeEV_SM1 = ((*door_open)[0] | (*door_open)[1] |
          (*door_open)[2]) & _2_op_call;
      if (tr_1_guard_closeEV_SM1) {
        _19_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else if (tr_2_guard_closeEV_SM1) {
        _19_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_closeEV_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_closeEV_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_closeEV_error_1_closeEV_SM1;
      }
      else if (tr_2_guard_closeEV_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_closeEV_error_2_closeEV_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = _26_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_openEV_SM1 :
      outC->n_times_37_int16 = anomaly_time;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init1) {
        outC->v4_times_37_int16 = outC->n_times_37_int16;
      }
      else {
        outC->v4_times_37_int16 = outC->v3_times_37_int16;
      }
      outC->c_times_37_int16 = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_37_int16 < kcg_lit_int16(0)) {
        outC->v3_times_37_int16 = outC->v4_times_37_int16;
      }
      else /* @3/_/v3= */
      if (outC->c_times_37_int16) {
        outC->v3_times_37_int16 = outC->v4_times_37_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_37_int16 = outC->v4_times_37_int16;
      }
      outC->o_times_37_int16 = outC->c_times_37_int16 &
        (outC->v3_times_37_int16 == kcg_lit_int16(0));
      outC->n_times_36_int16 = anomaly_time;
      /* @4/_/v4= */
      if (outC->init1) {
        outC->v4_times_36_int16 = outC->n_times_36_int16;
      }
      else {
        outC->v4_times_36_int16 = outC->v3_times_36_int16;
      }
      outC->c_times_36_int16 = kcg_true;
      /* @4/_/v3= */
      if (outC->v4_times_36_int16 < kcg_lit_int16(0)) {
        outC->v3_times_36_int16 = outC->v4_times_36_int16;
      }
      else /* @4/_/v3= */
      if (outC->c_times_36_int16) {
        outC->v3_times_36_int16 = outC->v4_times_36_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_36_int16 = outC->v4_times_36_int16;
      }
      outC->o_times_36_int16 = outC->c_times_36_int16 &
        (outC->v3_times_36_int16 == kcg_lit_int16(0));
      op_call = outC->o_times_36_int16;
      _1_op_call = outC->o_times_37_int16;
      tr_2_guard_openEV_SM1 = (((*door_open)[0] == kcg_false) |
          ((*door_open)[1] == kcg_false) | ((*door_open)[2] == kcg_false)) &
        _1_op_call;
      tr_1_guard_openEV_SM1 = ((*door_closed)[0] | (*door_closed)[1] |
          (*door_closed)[2]) & op_call;
      if (tr_1_guard_openEV_SM1) {
        _16_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else if (tr_2_guard_openEV_SM1) {
        _16_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else {
        _16_SM1_state_act_partial = SSM_st_openEV_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_openEV_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_openEV_error_1_openEV_SM1;
      }
      else if (tr_2_guard_openEV_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_openEV_error_2_openEV_SM1;
      }
      else {
        _18_SM1_fired_strong_partial = _26_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case _27_SSM_st_normal_SM1 :
      tr_2_guard_normal_SM1 = close_EV;
      tr_1_guard_normal_SM1 = open_EV;
      if (tr_1_guard_normal_SM1) {
        SM1_state_act_partial = SSM_st_openEV_SM1;
      }
      else if (tr_2_guard_normal_SM1) {
        SM1_state_act_partial = SSM_st_closeEV_SM1;
      }
      else {
        SM1_state_act_partial = _27_SSM_st_normal_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_normal_SM1) {
        SM1_fired_strong_partial = SSM_TR_normal_openEV_1_normal_SM1;
      }
      else if (tr_2_guard_normal_SM1) {
        SM1_fired_strong_partial = SSM_TR_normal_closeEV_2_normal_SM1;
      }
      else {
        SM1_fired_strong_partial = _26_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_error_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_error_SM1;
      outC->_L1_error_SM1 = kcg_true;
      _12_doors_anomaly_partial = outC->_L1_error_SM1;
      outC->doors_anomaly = _12_doors_anomaly_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_closeEV_SM1 :
      _11_SM1_fired_partial = outC->SM1_fired_strong;
      _10_SM1_reset_nxt_partial = kcg_false;
      _9_SM1_state_nxt_partial = SSM_st_closeEV_SM1;
      outC->_L1_closeEV_SM1 = kcg_false;
      _8_doors_anomaly_partial = outC->_L1_closeEV_SM1;
      outC->doors_anomaly = _8_doors_anomaly_partial;
      outC->SM1_state_nxt = _9_SM1_state_nxt_partial;
      break;
    case SSM_st_openEV_SM1 :
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_openEV_SM1;
      outC->_L1_openEV_SM1 = kcg_false;
      _4_doors_anomaly_partial = outC->_L1_openEV_SM1;
      outC->doors_anomaly = _4_doors_anomaly_partial;
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case _27_SSM_st_normal_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _27_SSM_st_normal_SM1;
      outC->_L1_normal_SM1 = kcg_false;
      doors_anomaly_partial = outC->_L1_normal_SM1;
      outC->doors_anomaly = doors_anomaly_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_error_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_closeEV_SM1 :
      outC->SM1_reset_nxt = _10_SM1_reset_nxt_partial;
      outC->SM1_fired = _11_SM1_fired_partial;
      break;
    case SSM_st_openEV_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case _27_SSM_st_normal_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      _23_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _23_SM1_reset_act_partial;
      break;
    case SSM_st_closeEV_SM1 :
      if (tr_1_guard_closeEV_SM1) {
        _20_SM1_reset_act_partial = kcg_true;
      }
      else {
        _20_SM1_reset_act_partial = tr_2_guard_closeEV_SM1;
      }
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_openEV_SM1 :
      if (tr_1_guard_openEV_SM1) {
        _17_SM1_reset_act_partial = kcg_true;
      }
      else {
        _17_SM1_reset_act_partial = tr_2_guard_openEV_SM1;
      }
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case _27_SSM_st_normal_SM1 :
      if (tr_1_guard_normal_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_normal_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void DoorsMotionMonitoring_init(outC_DoorsMotionMonitoring *outC)
{
  outC->SM1_fired = _26_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _26_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _27_SSM_st_normal_SM1;
  outC->SM1_state_sel = _27_SSM_st_normal_SM1;
  outC->_L1_error_SM1 = kcg_true;
  outC->_L1_closeEV_SM1 = kcg_true;
  outC->_L1_openEV_SM1 = kcg_true;
  outC->_L1_normal_SM1 = kcg_true;
  outC->v4_times_36_int16 = kcg_lit_int16(0);
  outC->n_times_36_int16 = kcg_lit_int16(0);
  outC->c_times_36_int16 = kcg_true;
  outC->o_times_36_int16 = kcg_true;
  outC->v4_times_37_int16 = kcg_lit_int16(0);
  outC->n_times_37_int16 = kcg_lit_int16(0);
  outC->c_times_37_int16 = kcg_true;
  outC->o_times_37_int16 = kcg_true;
  outC->v4_times_40_int16 = kcg_lit_int16(0);
  outC->n_times_40_int16 = kcg_lit_int16(0);
  outC->c_times_40_int16 = kcg_true;
  outC->o_times_40_int16 = kcg_true;
  outC->v4_times_39_int16 = kcg_lit_int16(0);
  outC->n_times_39_int16 = kcg_lit_int16(0);
  outC->c_times_39_int16 = kcg_true;
  outC->o_times_39_int16 = kcg_true;
  outC->v3_times_36_int16 = kcg_lit_int16(0);
  outC->v3_times_37_int16 = kcg_lit_int16(0);
  outC->v3_times_40_int16 = kcg_lit_int16(0);
  outC->v3_times_39_int16 = kcg_lit_int16(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->doors_anomaly = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _27_SSM_st_normal_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DoorsMotionMonitoring_reset(outC_DoorsMotionMonitoring *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = _27_SSM_st_normal_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: DoorsMotionMonitoring/
  @1: (times#39)
  @2: (times#40)
  @3: (times#37)
  @4: (times#36)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DoorsMotionMonitoring.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

