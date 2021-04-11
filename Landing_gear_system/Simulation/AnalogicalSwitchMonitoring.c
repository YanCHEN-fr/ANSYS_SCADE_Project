/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AnalogicalSwitchMonitoring.h"

/* AnalogicalSwitchMonitoring/ */
void AnalogicalSwitchMonitoring(
  /* trigger/ */
  kcg_bool trigger,
  /* analogical_switch/ */
  kcg_bool analogical_switch,
  /* open_time/ */
  kcg_int16 open_time,
  /* close_time/ */
  kcg_int16 close_time,
  outC_AnalogicalSwitchMonitoring *outC)
{
  kcg_bool op_call;
  kcg_bool _1_op_call;
  /* switch_anomal/ */
  kcg_bool switch_anomal_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_partial;
  /* switch_anomal/ */
  kcg_bool _2_switch_anomal_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _5_SM1_fired_partial;
  /* switch_anomal/ */
  kcg_bool _6_switch_anomal_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _7_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _8_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _9_SM1_fired_partial;
  /* switch_anomal/ */
  kcg_bool _10_switch_anomal_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _11_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _12_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _13_SM1_fired_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:normal:<2> */
  kcg_bool tr_2_guard_normal_SM1;
  /* SM1:normal:<1> */
  kcg_bool tr_1_guard_normal_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 _14_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _15_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _16_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _17_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _18_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _19_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  kcg_bool tr_1_guard_State3_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 _20_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _21_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _22_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case _23_SSM_st_State4_SM1 :
      outC->n_times_10_int16 = close_time;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _23_SSM_st_State4_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_10_int16 = outC->n_times_10_int16;
      }
      else {
        outC->v4_times_10_int16 = outC->v3_times_10_int16;
      }
      outC->c_times_10_int16 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_10_int16 < kcg_lit_int16(0)) {
        outC->v3_times_10_int16 = outC->v4_times_10_int16;
      }
      else /* @1/_/v3= */
      if (outC->c_times_10_int16) {
        outC->v3_times_10_int16 = outC->v4_times_10_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_10_int16 = outC->v4_times_10_int16;
      }
      outC->o_times_10_int16 = outC->c_times_10_int16 &
        (outC->v3_times_10_int16 == kcg_lit_int16(0));
      _1_op_call = outC->o_times_10_int16;
      tr_1_guard_State4_SM1 = _1_op_call & analogical_switch;
      if (tr_1_guard_State4_SM1) {
        _20_SM1_state_act_partial = SSM_st_invalid_SM1;
      }
      else {
        _20_SM1_state_act_partial = _23_SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _20_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _22_SM1_fired_strong_partial = SSM_TR_State4_invalid_1_State4_SM1;
      }
      else {
        _22_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _22_SM1_fired_strong_partial;
      break;
    case _25_SSM_st_State3_SM1 :
      outC->n_times_11_int16 = open_time;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_11_int16 = outC->n_times_11_int16;
      }
      else {
        outC->v4_times_11_int16 = outC->v3_times_11_int16;
      }
      outC->c_times_11_int16 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_11_int16 < kcg_lit_int16(0)) {
        outC->v3_times_11_int16 = outC->v4_times_11_int16;
      }
      else /* @2/_/v3= */
      if (outC->c_times_11_int16) {
        outC->v3_times_11_int16 = outC->v4_times_11_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_11_int16 = outC->v4_times_11_int16;
      }
      outC->o_times_11_int16 = outC->c_times_11_int16 &
        (outC->v3_times_11_int16 == kcg_lit_int16(0));
      op_call = outC->o_times_11_int16;
      tr_1_guard_State3_SM1 = op_call & (!analogical_switch);
      if (tr_1_guard_State3_SM1) {
        _17_SM1_state_act_partial = SSM_st_invalid_SM1;
      }
      else {
        _17_SM1_state_act_partial = _25_SSM_st_State3_SM1;
      }
      outC->SM1_state_act = _17_SM1_state_act_partial;
      if (tr_1_guard_State3_SM1) {
        _19_SM1_fired_strong_partial = SSM_TR_State3_invalid_1_State3_SM1;
      }
      else {
        _19_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _19_SM1_fired_strong_partial;
      break;
    case SSM_st_invalid_SM1 :
      _14_SM1_state_act_partial = SSM_st_invalid_SM1;
      outC->SM1_state_act = _14_SM1_state_act_partial;
      _16_SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _16_SM1_fired_strong_partial;
      break;
    case SSM_st_normal_SM1 :
      tr_2_guard_normal_SM1 = (trigger == kcg_false) & (analogical_switch ==
          kcg_true);
      tr_1_guard_normal_SM1 = (trigger == kcg_true) & (analogical_switch ==
          kcg_false);
      if (tr_1_guard_normal_SM1) {
        SM1_state_act_partial = _25_SSM_st_State3_SM1;
      }
      else if (tr_2_guard_normal_SM1) {
        SM1_state_act_partial = _23_SSM_st_State4_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_normal_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_normal_SM1) {
        SM1_fired_strong_partial = SSM_TR_normal_State3_1_normal_SM1;
      }
      else if (tr_2_guard_normal_SM1) {
        SM1_fired_strong_partial = SSM_TR_normal_State4_2_normal_SM1;
      }
      else {
        SM1_fired_strong_partial = _24_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _23_SSM_st_State4_SM1 :
      _13_SM1_fired_partial = outC->SM1_fired_strong;
      _12_SM1_reset_nxt_partial = kcg_false;
      _11_SM1_state_nxt_partial = _23_SSM_st_State4_SM1;
      outC->_L1_State4_SM1 = kcg_false;
      _10_switch_anomal_partial = outC->_L1_State4_SM1;
      outC->switch_anomal = _10_switch_anomal_partial;
      outC->SM1_state_nxt = _11_SM1_state_nxt_partial;
      break;
    case _25_SSM_st_State3_SM1 :
      _9_SM1_fired_partial = outC->SM1_fired_strong;
      _8_SM1_reset_nxt_partial = kcg_false;
      _7_SM1_state_nxt_partial = _25_SSM_st_State3_SM1;
      outC->_L1_State3_SM1 = kcg_false;
      _6_switch_anomal_partial = outC->_L1_State3_SM1;
      outC->switch_anomal = _6_switch_anomal_partial;
      outC->SM1_state_nxt = _7_SM1_state_nxt_partial;
      break;
    case SSM_st_invalid_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_invalid_SM1;
      outC->_L1_invalid_SM1 = kcg_true;
      _2_switch_anomal_partial = outC->_L1_invalid_SM1;
      outC->switch_anomal = _2_switch_anomal_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_normal_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_normal_SM1;
      outC->_L1_normal_SM1 = kcg_false;
      switch_anomal_partial = outC->_L1_normal_SM1;
      outC->switch_anomal = switch_anomal_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case _23_SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _12_SM1_reset_nxt_partial;
      outC->SM1_fired = _13_SM1_fired_partial;
      break;
    case _25_SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _8_SM1_reset_nxt_partial;
      outC->SM1_fired = _9_SM1_fired_partial;
      break;
    case SSM_st_invalid_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_normal_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case _23_SSM_st_State4_SM1 :
      _21_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      outC->SM1_reset_act = _21_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case _25_SSM_st_State3_SM1 :
      _18_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      outC->SM1_reset_act = _18_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_invalid_SM1 :
      _15_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _15_SM1_reset_act_partial;
      break;
    case SSM_st_normal_SM1 :
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
void AnalogicalSwitchMonitoring_init(outC_AnalogicalSwitchMonitoring *outC)
{
  outC->SM1_fired = _24_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _24_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_normal_SM1;
  outC->SM1_state_sel = SSM_st_normal_SM1;
  outC->_L1_State4_SM1 = kcg_true;
  outC->_L1_State3_SM1 = kcg_true;
  outC->_L1_invalid_SM1 = kcg_true;
  outC->_L1_normal_SM1 = kcg_true;
  outC->v4_times_11_int16 = kcg_lit_int16(0);
  outC->n_times_11_int16 = kcg_lit_int16(0);
  outC->c_times_11_int16 = kcg_true;
  outC->o_times_11_int16 = kcg_true;
  outC->v4_times_10_int16 = kcg_lit_int16(0);
  outC->n_times_10_int16 = kcg_lit_int16(0);
  outC->c_times_10_int16 = kcg_true;
  outC->o_times_10_int16 = kcg_true;
  outC->v3_times_11_int16 = kcg_lit_int16(0);
  outC->v3_times_10_int16 = kcg_lit_int16(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->switch_anomal = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_normal_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AnalogicalSwitchMonitoring_reset(outC_AnalogicalSwitchMonitoring *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_normal_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: AnalogicalSwitchMonitoring/
  @1: (times#10)
  @2: (times#11)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** AnalogicalSwitchMonitoring.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

