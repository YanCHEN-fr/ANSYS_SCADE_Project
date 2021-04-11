/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GenericMonitoring.h"

/* GenericMonitoring/ */
void GenericMonitoring(
  /* sensor_input/ */
  array_bool_3 *sensor_input,
  outC_GenericMonitoring *outC)
{
  /* anomal/ */
  kcg_bool anomal_partial;
  /* sensor_output/ */
  kcg_bool sensor_output_partial;
  /* SM1: */
  _12_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _13_SSM_TR_SM1 SM1_fired_partial;
  /* anomal/ */
  kcg_bool _1_anomal_partial;
  /* sensor_output/ */
  kcg_bool _2_sensor_output_partial;
  /* SM1: */
  _12_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _5_SM1_fired_partial;
  /* anomal/ */
  kcg_bool _6_anomal_partial;
  /* sensor_output/ */
  kcg_bool _7_sensor_output_partial;
  /* SM1: */
  _12_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _10_SM1_fired_partial;
  /* anomal/ */
  kcg_bool _11_anomal_partial;
  /* sensor_output/ */
  kcg_bool _12_sensor_output_partial;
  /* SM1: */
  _12_SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _15_SM1_fired_partial;
  /* anomal/ */
  kcg_bool _16_anomal_partial;
  /* sensor_output/ */
  kcg_bool _17_sensor_output_partial;
  /* SM1: */
  _12_SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _20_SM1_fired_partial;
  /* SM1: */
  _12_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _13_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:All:<3> */
  kcg_bool tr_3_guard_All_SM1;
  /* SM1:All:<2> */
  kcg_bool tr_2_guard_All_SM1;
  /* SM1:All:<1> */
  kcg_bool tr_1_guard_All_SM1;
  /* SM1: */
  _12_SSM_ST_SM1 _21_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _22_SM1_reset_act_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _23_SM1_fired_strong_partial;
  /* SM1:invalid0:<1> */
  kcg_bool tr_1_guard_invalid0_SM1;
  /* SM1: */
  _12_SSM_ST_SM1 _24_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_act_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _26_SM1_fired_strong_partial;
  /* SM1:invalid1:<1> */
  kcg_bool tr_1_guard_invalid1_SM1;
  /* SM1: */
  _12_SSM_ST_SM1 _27_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _28_SM1_reset_act_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _29_SM1_fired_strong_partial;
  /* SM1:invalid2:<1> */
  kcg_bool tr_1_guard_invalid2_SM1;
  /* SM1: */
  _12_SSM_ST_SM1 _30_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _31_SM1_reset_act_partial;
  /* SM1: */
  _13_SSM_TR_SM1 _32_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_invalidAll_SM1 :
      _30_SM1_state_act_partial = SSM_st_invalidAll_SM1;
      outC->SM1_state_act = _30_SM1_state_act_partial;
      _32_SM1_fired_strong_partial = _19_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _32_SM1_fired_strong_partial;
      break;
    case SSM_st_invalid2_SM1 :
      tr_1_guard_invalid2_SM1 = (*sensor_input)[1] != (*sensor_input)[0];
      if (tr_1_guard_invalid2_SM1) {
        _27_SM1_state_act_partial = SSM_st_invalidAll_SM1;
      }
      else {
        _27_SM1_state_act_partial = SSM_st_invalid2_SM1;
      }
      outC->SM1_state_act = _27_SM1_state_act_partial;
      if (tr_1_guard_invalid2_SM1) {
        _29_SM1_fired_strong_partial = SSM_TR_invalid2_invalidAll_1_invalid2_SM1;
      }
      else {
        _29_SM1_fired_strong_partial = _19_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _29_SM1_fired_strong_partial;
      break;
    case SSM_st_invalid1_SM1 :
      tr_1_guard_invalid1_SM1 = (*sensor_input)[2] != (*sensor_input)[0];
      if (tr_1_guard_invalid1_SM1) {
        _24_SM1_state_act_partial = SSM_st_invalidAll_SM1;
      }
      else {
        _24_SM1_state_act_partial = SSM_st_invalid1_SM1;
      }
      outC->SM1_state_act = _24_SM1_state_act_partial;
      if (tr_1_guard_invalid1_SM1) {
        _26_SM1_fired_strong_partial = SSM_TR_invalid1_invalidAll_1_invalid1_SM1;
      }
      else {
        _26_SM1_fired_strong_partial = _19_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _26_SM1_fired_strong_partial;
      break;
    case SSM_st_invalid0_SM1 :
      tr_1_guard_invalid0_SM1 = (*sensor_input)[1] != (*sensor_input)[2];
      if (tr_1_guard_invalid0_SM1) {
        _21_SM1_state_act_partial = SSM_st_invalidAll_SM1;
      }
      else {
        _21_SM1_state_act_partial = SSM_st_invalid0_SM1;
      }
      outC->SM1_state_act = _21_SM1_state_act_partial;
      if (tr_1_guard_invalid0_SM1) {
        _23_SM1_fired_strong_partial = SSM_TR_invalid0_invalidAll_1_invalid0_SM1;
      }
      else {
        _23_SM1_fired_strong_partial = _19_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _23_SM1_fired_strong_partial;
      break;
    case SSM_st_All_SM1 :
      tr_3_guard_All_SM1 = ((*sensor_input)[1] != (*sensor_input)[2]) &
        ((*sensor_input)[1] == (*sensor_input)[0]);
      tr_2_guard_All_SM1 = ((*sensor_input)[1] != (*sensor_input)[2]) &
        ((*sensor_input)[2] == (*sensor_input)[0]);
      tr_1_guard_All_SM1 = ((*sensor_input)[0] != (*sensor_input)[1]) &
        ((*sensor_input)[1] == (*sensor_input)[2]);
      if (tr_1_guard_All_SM1) {
        SM1_state_act_partial = SSM_st_invalid0_SM1;
      }
      else if (tr_2_guard_All_SM1) {
        SM1_state_act_partial = SSM_st_invalid1_SM1;
      }
      else if (tr_3_guard_All_SM1) {
        SM1_state_act_partial = SSM_st_invalid2_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_All_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_All_SM1) {
        SM1_fired_strong_partial = SSM_TR_All_invalid0_1_All_SM1;
      }
      else if (tr_2_guard_All_SM1) {
        SM1_fired_strong_partial = SSM_TR_All_invalid1_2_All_SM1;
      }
      else if (tr_3_guard_All_SM1) {
        SM1_fired_strong_partial = SSM_TR_All_invalid2_3_All_SM1;
      }
      else {
        SM1_fired_strong_partial = _19_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_invalidAll_SM1 :
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_invalidAll_SM1;
      outC->_L3_invalidAll_SM1 = kcg_true;
      _16_anomal_partial = outC->_L3_invalidAll_SM1;
      outC->_L2_invalidAll_SM1 = (*sensor_input)[0];
      _17_sensor_output_partial = outC->_L2_invalidAll_SM1;
      outC->anomal = _16_anomal_partial;
      outC->sensor_output = _17_sensor_output_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_invalid2_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_invalid2_SM1;
      outC->_L7_invalid2_SM1 = kcg_true;
      _11_anomal_partial = outC->_L7_invalid2_SM1;
      outC->_L2_invalid2_SM1 = (*sensor_input)[1];
      _12_sensor_output_partial = outC->_L2_invalid2_SM1;
      outC->anomal = _11_anomal_partial;
      outC->sensor_output = _12_sensor_output_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_invalid1_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_invalid1_SM1;
      outC->_L5_invalid1_SM1 = kcg_true;
      _6_anomal_partial = outC->_L5_invalid1_SM1;
      outC->_L2_invalid1_SM1 = (*sensor_input)[0];
      _7_sensor_output_partial = outC->_L2_invalid1_SM1;
      outC->anomal = _6_anomal_partial;
      outC->sensor_output = _7_sensor_output_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_invalid0_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_invalid0_SM1;
      outC->_L5_invalid0_SM1 = kcg_true;
      _1_anomal_partial = outC->_L5_invalid0_SM1;
      outC->_L2_invalid0_SM1 = (*sensor_input)[1];
      _2_sensor_output_partial = outC->_L2_invalid0_SM1;
      outC->anomal = _1_anomal_partial;
      outC->sensor_output = _2_sensor_output_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_All_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_All_SM1;
      outC->_L3_All_SM1 = kcg_false;
      anomal_partial = outC->_L3_All_SM1;
      outC->_L2_All_SM1 = (*sensor_input)[0];
      sensor_output_partial = outC->_L2_All_SM1;
      outC->anomal = anomal_partial;
      outC->sensor_output = sensor_output_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_invalidAll_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_invalid2_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_invalid1_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_invalid0_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_All_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_invalidAll_SM1 :
      _31_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_invalid2_SM1 :
      _28_SM1_reset_act_partial = tr_1_guard_invalid2_SM1;
      break;
    case SSM_st_invalid1_SM1 :
      _25_SM1_reset_act_partial = tr_1_guard_invalid1_SM1;
      break;
    case SSM_st_invalid0_SM1 :
      _22_SM1_reset_act_partial = tr_1_guard_invalid0_SM1;
      break;
    case SSM_st_All_SM1 :
      if (tr_1_guard_All_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_All_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_3_guard_All_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_invalidAll_SM1 :
      outC->SM1_reset_act = _31_SM1_reset_act_partial;
      break;
    case SSM_st_invalid2_SM1 :
      outC->SM1_reset_act = _28_SM1_reset_act_partial;
      break;
    case SSM_st_invalid1_SM1 :
      outC->SM1_reset_act = _25_SM1_reset_act_partial;
      break;
    case SSM_st_invalid0_SM1 :
      outC->SM1_reset_act = _22_SM1_reset_act_partial;
      break;
    case SSM_st_All_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void GenericMonitoring_init(outC_GenericMonitoring *outC)
{
  outC->SM1_fired = _19_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _19_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_All_SM1;
  outC->SM1_state_sel = SSM_st_All_SM1;
  outC->_L2_invalidAll_SM1 = kcg_true;
  outC->_L3_invalidAll_SM1 = kcg_true;
  outC->_L2_invalid2_SM1 = kcg_true;
  outC->_L7_invalid2_SM1 = kcg_true;
  outC->_L2_invalid1_SM1 = kcg_true;
  outC->_L5_invalid1_SM1 = kcg_true;
  outC->_L2_invalid0_SM1 = kcg_true;
  outC->_L5_invalid0_SM1 = kcg_true;
  outC->_L2_All_SM1 = kcg_true;
  outC->_L3_All_SM1 = kcg_true;
  outC->sensor_output = kcg_true;
  outC->anomal = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_All_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GenericMonitoring_reset(outC_GenericMonitoring *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_All_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** GenericMonitoring.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

