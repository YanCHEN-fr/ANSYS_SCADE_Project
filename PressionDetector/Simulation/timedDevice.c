/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "timedDevice.h"

/* timedDevice/ */
void timedDevice(
  /* order/ */
  kcg_bool order,
  /* duration/ */
  kcg_int8 duration,
  outC_timedDevice *outC)
{
  /* alarm/ */
  kcg_bool alarm_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* alarm/ */
  kcg_bool _1_alarm_partial;
  /* SM1: */
  SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:off:<1> */
  kcg_bool tr_1_guard_off_SM1;
  /* SM1: */
  SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:on:<1> */
  kcg_bool tr_1_guard_on_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      outC->n_times_1_int8 = duration;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_1_int8 = outC->n_times_1_int8;
      }
      else {
        outC->v4_times_1_int8 = outC->v3_times_1_int8;
      }
      outC->c_times_1_int8 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_1_int8 < kcg_lit_int8(0)) {
        outC->v3_times_1_int8 = outC->v4_times_1_int8;
      }
      else /* @1/_/v3= */
      if (outC->c_times_1_int8) {
        outC->v3_times_1_int8 = outC->v4_times_1_int8 - kcg_lit_int8(1);
      }
      else {
        outC->v3_times_1_int8 = outC->v4_times_1_int8;
      }
      outC->o_times_1_int8 = outC->c_times_1_int8 & (outC->v3_times_1_int8 ==
          kcg_lit_int8(0));
      tr_1_guard_on_SM1 = outC->o_times_1_int8;
      if (tr_1_guard_on_SM1) {
        _5_SM1_state_act_partial = SSM_st_off_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_on_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act_partial;
      if (tr_1_guard_on_SM1) {
        _7_SM1_fired_strong_partial = SSM_TR_on_off_1_on_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_off_SM1 :
      tr_1_guard_off_SM1 = order;
      if (tr_1_guard_off_SM1) {
        SM1_state_act_partial = SSM_st_on_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_off_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_off_SM1) {
        SM1_fired_strong_partial = SSM_TR_off_on_1_off_SM1;
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
    case SSM_st_on_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_on_SM1;
      outC->_L1_on_SM1 = kcg_true;
      _1_alarm_partial = outC->_L1_on_SM1;
      outC->alarm = _1_alarm_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_off_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_off_SM1;
      outC->_L1_off_SM1 = kcg_false;
      alarm_partial = outC->_L1_off_SM1;
      outC->alarm = alarm_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_off_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_on_SM1;
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_off_SM1 :
      SM1_reset_act_partial = tr_1_guard_off_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void timedDevice_init(outC_timedDevice *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_off_SM1;
  outC->SM1_state_sel = SSM_st_off_SM1;
  outC->_L1_on_SM1 = kcg_true;
  outC->_L1_off_SM1 = kcg_true;
  outC->v4_times_1_int8 = kcg_lit_int8(0);
  outC->n_times_1_int8 = kcg_lit_int8(0);
  outC->c_times_1_int8 = kcg_true;
  outC->o_times_1_int8 = kcg_true;
  outC->v3_times_1_int8 = kcg_lit_int8(0);
  outC->init = kcg_true;
  outC->alarm = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_off_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void timedDevice_reset(outC_timedDevice *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_off_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: timedDevice/
  @1: (times#1)
*/

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** timedDevice.c
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

