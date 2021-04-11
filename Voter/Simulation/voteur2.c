/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/statemachine/Simulation/config.txt
** Generation date: 2021-02-15T23:13:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "voteur2.h"

/* voteur2/ */
void voteur2(inC_voteur2 *inC, outC_voteur2 *outC)
{
  /* error/ */
  kcg_bool error_partial;
  /* Y/ */
  kcg_bool Y_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* error/ */
  kcg_bool _1_error_partial;
  /* Y/ */
  kcg_bool _2_Y_partial;
  /* SM1: */
  SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _5_SM1_fired_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* Y/ */
  kcg_bool _7_Y_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* error/ */
  kcg_bool _11_error_partial;
  /* Y/ */
  kcg_bool _12_Y_partial;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* error/ */
  kcg_bool _16_error_partial;
  /* Y/ */
  kcg_bool _17_Y_partial;
  /* SM1: */
  SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _20_SM1_fired_partial;
  /* error/ */
  kcg_bool _21_error_partial;
  /* Y/ */
  kcg_bool _22_Y_partial;
  /* SM1: */
  SSM_ST_SM1 _23_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _24_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _25_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Initial:<4> */
  kcg_bool tr_4_guard_Initial_SM1;
  /* SM1:Initial:<3> */
  kcg_bool tr_3_guard_Initial_SM1;
  /* SM1:Initial:<2> */
  kcg_bool tr_2_guard_Initial_SM1;
  /* SM1:Initial:<1> */
  kcg_bool tr_1_guard_Initial_SM1;
  /* SM1: */
  SSM_ST_SM1 _26_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _28_SM1_fired_strong_partial;
  /* SM1:X1:<1> */
  kcg_bool tr_1_guard_X1_SM1;
  /* SM1: */
  SSM_ST_SM1 _29_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _30_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _31_SM1_fired_strong_partial;
  /* SM1:X3:<1> */
  kcg_bool tr_1_guard_X3_SM1;
  /* SM1: */
  SSM_ST_SM1 _32_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _33_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _34_SM1_fired_strong_partial;
  /* SM1:X2:<1> */
  kcg_bool tr_1_guard_X2_SM1;
  /* SM1: */
  SSM_ST_SM1 _35_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _36_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _37_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _38_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _39_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _40_SM1_fired_strong_partial;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;
  /* Y/ */
  kcg_bool Y;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      _38_SM1_state_act_partial = SSM_st_error_SM1;
      outC->SM1_state_act = _38_SM1_state_act_partial;
      break;
    case SSM_st_X1_2_SM1 :
      _35_SM1_state_act_partial = SSM_st_X1_2_SM1;
      outC->SM1_state_act = _35_SM1_state_act_partial;
      break;
    case SSM_st_X2_SM1 :
      tr_1_guard_X2_SM1 = inC->X[0] != inC->X[1];
      if (tr_1_guard_X2_SM1) {
        _32_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else {
        _32_SM1_state_act_partial = SSM_st_X2_SM1;
      }
      outC->SM1_state_act = _32_SM1_state_act_partial;
      break;
    case SSM_st_X3_SM1 :
      tr_1_guard_X3_SM1 = inC->X[1] != inC->X[2];
      if (tr_1_guard_X3_SM1) {
        _29_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else {
        _29_SM1_state_act_partial = SSM_st_X3_SM1;
      }
      outC->SM1_state_act = _29_SM1_state_act_partial;
      break;
    case SSM_st_X1_SM1 :
      tr_1_guard_X1_SM1 = inC->X[0] != inC->X[2];
      if (tr_1_guard_X1_SM1) {
        _26_SM1_state_act_partial = SSM_st_error_SM1;
      }
      else {
        _26_SM1_state_act_partial = SSM_st_X1_SM1;
      }
      outC->SM1_state_act = _26_SM1_state_act_partial;
      break;
    case SSM_st_Initial_SM1 :
      tr_4_guard_Initial_SM1 = (inC->X[0] != inC->X[1]) & (inC->X[2] == inC->X[1]);
      tr_3_guard_Initial_SM1 = (inC->X[0] == inC->X[1]) & (inC->X[1] != inC->X[2]);
      tr_2_guard_Initial_SM1 = (inC->X[0] == inC->X[1]) & (inC->X[1] == inC->X[2]);
      tr_1_guard_Initial_SM1 = (inC->X[0] == inC->X[2]) & (inC->X[1] != inC->X[2]);
      if (tr_1_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_X1_SM1;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_X1_2_SM1;
      }
      else if (tr_3_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_X2_SM1;
      }
      else if (tr_4_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_X3_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Y = inC->X[0];
  switch (outC->SM1_state_act) {
    case SSM_st_error_SM1 :
      _22_Y_partial = Y;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      _40_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _40_SM1_fired_strong_partial;
      break;
    case SSM_st_X1_2_SM1 :
      _37_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _37_SM1_fired_strong_partial;
      break;
    case SSM_st_X2_SM1 :
      if (tr_1_guard_X2_SM1) {
        _34_SM1_fired_strong_partial = SSM_TR_X2_error_1_X2_SM1;
      }
      else {
        _34_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _34_SM1_fired_strong_partial;
      break;
    case SSM_st_X3_SM1 :
      if (tr_1_guard_X3_SM1) {
        _31_SM1_fired_strong_partial = SSM_TR_X3_error_1_X3_SM1;
      }
      else {
        _31_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _31_SM1_fired_strong_partial;
      break;
    case SSM_st_X1_SM1 :
      if (tr_1_guard_X1_SM1) {
        _28_SM1_fired_strong_partial = SSM_TR_X1_error_1_X1_SM1;
      }
      else {
        _28_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _28_SM1_fired_strong_partial;
      break;
    case SSM_st_Initial_SM1 :
      if (tr_1_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_X1_1_Initial_SM1;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_X1_2_2_Initial_SM1;
      }
      else if (tr_3_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_X2_3_Initial_SM1;
      }
      else if (tr_4_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_X3_4_Initial_SM1;
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
    case SSM_st_error_SM1 :
      _25_SM1_fired_partial = outC->SM1_fired_strong;
      _24_SM1_reset_nxt_partial = kcg_false;
      _23_SM1_state_nxt_partial = SSM_st_error_SM1;
      outC->_L1_error_SM1 = kcg_true;
      _21_error_partial = outC->_L1_error_SM1;
      outC->error = _21_error_partial;
      outC->Y = _22_Y_partial;
      outC->SM1_state_nxt = _23_SM1_state_nxt_partial;
      break;
    case SSM_st_X1_2_SM1 :
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_X1_2_SM1;
      outC->_L2_X1_2_SM1 = inC->X[0];
      _17_Y_partial = outC->_L2_X1_2_SM1;
      outC->_L1_X1_2_SM1 = kcg_false;
      _16_error_partial = outC->_L1_X1_2_SM1;
      outC->error = _16_error_partial;
      outC->Y = _17_Y_partial;
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_X2_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_X2_SM1;
      outC->_L2_X2_SM1 = inC->X[2];
      _12_Y_partial = outC->_L2_X2_SM1;
      outC->_L1_X2_SM1 = kcg_false;
      _11_error_partial = outC->_L1_X2_SM1;
      outC->error = _11_error_partial;
      outC->Y = _12_Y_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_X3_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_X3_SM1;
      outC->_L2_X3_SM1 = inC->X[2];
      _7_Y_partial = outC->_L2_X3_SM1;
      outC->_L1_X3_SM1 = kcg_false;
      _6_error_partial = outC->_L1_X3_SM1;
      outC->error = _6_error_partial;
      outC->Y = _7_Y_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_X1_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_X1_SM1;
      outC->_L2_X1_SM1 = inC->X[0];
      _2_Y_partial = outC->_L2_X1_SM1;
      outC->_L1_X1_SM1 = kcg_false;
      _1_error_partial = outC->_L1_X1_SM1;
      outC->error = _1_error_partial;
      outC->Y = _2_Y_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_Initial_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Initial_SM1;
      outC->_L2_Initial_SM1 = inC->X[0];
      Y_partial = outC->_L2_Initial_SM1;
      outC->_L1_Initial_SM1 = kcg_false;
      error_partial = outC->_L1_Initial_SM1;
      outC->error = error_partial;
      outC->Y = Y_partial;
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
      outC->SM1_reset_nxt = _24_SM1_reset_nxt_partial;
      outC->SM1_fired = _25_SM1_fired_partial;
      break;
    case SSM_st_X1_2_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_X2_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_X3_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_X1_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_Initial_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      _39_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_X1_2_SM1 :
      _36_SM1_reset_act_partial = kcg_false;
      break;
    case SSM_st_X2_SM1 :
      _33_SM1_reset_act_partial = tr_1_guard_X2_SM1;
      break;
    case SSM_st_X3_SM1 :
      _30_SM1_reset_act_partial = tr_1_guard_X3_SM1;
      break;
    case SSM_st_X1_SM1 :
      _27_SM1_reset_act_partial = tr_1_guard_X1_SM1;
      break;
    case SSM_st_Initial_SM1 :
      if (tr_1_guard_Initial_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_Initial_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_4_guard_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_error_SM1 :
      outC->SM1_reset_act = _39_SM1_reset_act_partial;
      break;
    case SSM_st_X1_2_SM1 :
      outC->SM1_reset_act = _36_SM1_reset_act_partial;
      break;
    case SSM_st_X2_SM1 :
      outC->SM1_reset_act = _33_SM1_reset_act_partial;
      break;
    case SSM_st_X3_SM1 :
      outC->SM1_reset_act = _30_SM1_reset_act_partial;
      break;
    case SSM_st_X1_SM1 :
      outC->SM1_reset_act = _27_SM1_reset_act_partial;
      break;
    case SSM_st_Initial_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void voteur2_init(outC_voteur2 *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Initial_SM1;
  outC->SM1_state_sel = SSM_st_Initial_SM1;
  outC->_L1_error_SM1 = kcg_true;
  outC->_L1_X1_2_SM1 = kcg_true;
  outC->_L2_X1_2_SM1 = kcg_true;
  outC->_L1_X2_SM1 = kcg_true;
  outC->_L2_X2_SM1 = kcg_true;
  outC->_L1_X3_SM1 = kcg_true;
  outC->_L2_X3_SM1 = kcg_true;
  outC->_L1_X1_SM1 = kcg_true;
  outC->_L2_X1_SM1 = kcg_true;
  outC->_L1_Initial_SM1 = kcg_true;
  outC->_L2_Initial_SM1 = kcg_true;
  outC->Y = kcg_true;
  outC->error = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void voteur2_reset(outC_voteur2 *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** voteur2.c
** Generation date: 2021-02-15T23:13:17
*************************************************************$ */

