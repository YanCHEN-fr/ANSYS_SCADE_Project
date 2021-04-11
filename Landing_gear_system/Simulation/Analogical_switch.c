/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Analogical_switch.h"

/* Analogical_switch/ */
void Analogical_switch(
  /* general_EV/ */
  kcg_bool general_EV,
  outC_Analogical_switch *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  /* analogical_switch/ */
  array_bool_3 analogical_switch_partial;
  /* SM1: */
  _14_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _15_SSM_TR_SM1 SM1_fired_partial;
  /* analogical_switch/ */
  array_bool_3 _4_analogical_switch_partial;
  /* SM1: */
  _14_SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _7_SM1_fired_partial;
  /* analogical_switch/ */
  array_bool_3 _8_analogical_switch_partial;
  /* SM1: */
  _14_SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_nxt_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _11_SM1_fired_partial;
  /* analogical_switch/ */
  array_bool_3 _12_analogical_switch_partial;
  /* SM1: */
  _14_SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _15_SM1_fired_partial;
  /* SM1: */
  _14_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _15_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:switch_open:<1> */
  kcg_bool tr_1_guard_switch_open_SM1;
  /* SM1: */
  _14_SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:switch_close:<2> */
  kcg_bool tr_2_guard_switch_close_SM1;
  /* SM1:switch_close:<1> */
  kcg_bool tr_1_guard_switch_close_SM1;
  /* SM1: */
  _14_SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  kcg_bool tr_1_guard_State3_SM1;
  /* SM1: */
  _14_SSM_ST_SM1 _22_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_act_partial;
  /* SM1: */
  _15_SSM_TR_SM1 _24_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_switch_close_SM1 :
      outC->n_times_12_size = 200;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State4_SM1 :
      outC->n_times_11_size = 12;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_11_size = outC->n_times_11_size;
      }
      else {
        outC->v4_times_11_size = outC->v3_times_11_size;
      }
      outC->c_times_11_size = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_11_size < 0) {
        outC->v3_times_11_size = outC->v4_times_11_size;
      }
      else /* @3/_/v3= */
      if (outC->c_times_11_size) {
        outC->v3_times_11_size = outC->v4_times_11_size - 1;
      }
      else {
        outC->v3_times_11_size = outC->v4_times_11_size;
      }
      outC->o_times_11_size = outC->c_times_11_size & (outC->v3_times_11_size == 0);
      tr_1_guard_State4_SM1 = outC->o_times_11_size;
      if (tr_1_guard_State4_SM1) {
        _22_SM1_state_act_partial = SSM_st_switch_open_SM1;
      }
      else {
        _22_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _22_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _24_SM1_fired_strong_partial = SSM_TR_State4_switch_open_1_State4_SM1;
      }
      else {
        _24_SM1_fired_strong_partial = _18_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _24_SM1_fired_strong_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->n_times_13_size = 10;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_13_size = outC->n_times_13_size;
      }
      else {
        outC->v4_times_13_size = outC->v3_times_13_size;
      }
      outC->c_times_13_size = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_13_size < 0) {
        outC->v3_times_13_size = outC->v4_times_13_size;
      }
      else /* @2/_/v3= */
      if (outC->c_times_13_size) {
        outC->v3_times_13_size = outC->v4_times_13_size - 1;
      }
      else {
        outC->v3_times_13_size = outC->v4_times_13_size;
      }
      outC->o_times_13_size = outC->c_times_13_size & (outC->v3_times_13_size == 0);
      tr_1_guard_State3_SM1 = outC->o_times_13_size;
      if (tr_1_guard_State3_SM1) {
        _19_SM1_state_act_partial = SSM_st_switch_close_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_State3_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_State3_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_State3_switch_close_1_State3_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = _18_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_switch_close_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_12_size = outC->n_times_12_size;
      }
      else {
        outC->v4_times_12_size = outC->v3_times_12_size;
      }
      outC->c_times_12_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_12_size < 0) {
        outC->v3_times_12_size = outC->v4_times_12_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_12_size) {
        outC->v3_times_12_size = outC->v4_times_12_size - 1;
      }
      else {
        outC->v3_times_12_size = outC->v4_times_12_size;
      }
      outC->o_times_12_size = outC->c_times_12_size & (outC->v3_times_12_size == 0);
      tr_2_guard_switch_close_SM1 = outC->o_times_12_size;
      tr_1_guard_switch_close_SM1 = !general_EV;
      if (tr_1_guard_switch_close_SM1) {
        _16_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else if (tr_2_guard_switch_close_SM1) {
        _16_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else {
        _16_SM1_state_act_partial = SSM_st_switch_close_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_switch_close_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_switch_close_State4_1_switch_close_SM1;
      }
      else if (tr_2_guard_switch_close_SM1) {
        _18_SM1_fired_strong_partial = SSM_TR_switch_close_State4_2_switch_close_SM1;
      }
      else {
        _18_SM1_fired_strong_partial = _18_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case SSM_st_switch_open_SM1 :
      tr_1_guard_switch_open_SM1 = general_EV;
      if (tr_1_guard_switch_open_SM1) {
        SM1_state_act_partial = SSM_st_State3_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_switch_open_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_switch_open_SM1) {
        SM1_fired_strong_partial = SSM_TR_switch_open_State3_1_switch_open_SM1;
      }
      else {
        SM1_fired_strong_partial = _18_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State4_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_State4_SM1;
      /* SM1:State4:_L1/ */
      for (idx = 0; idx < 3; idx++) {
        outC->_L1_State4_SM1[idx] = kcg_true;
      }
      kcg_copy_array_bool_3(&_12_analogical_switch_partial, &outC->_L1_State4_SM1);
      kcg_copy_array_bool_3(&outC->analogical_switch, &_12_analogical_switch_partial);
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_State3_SM1 :
      _11_SM1_fired_partial = outC->SM1_fired_strong;
      _10_SM1_reset_nxt_partial = kcg_false;
      _9_SM1_state_nxt_partial = SSM_st_State3_SM1;
      /* SM1:State3:_L1/ */
      for (idx1 = 0; idx1 < 3; idx1++) {
        outC->_L1_State3_SM1[idx1] = kcg_false;
      }
      kcg_copy_array_bool_3(&_8_analogical_switch_partial, &outC->_L1_State3_SM1);
      kcg_copy_array_bool_3(&outC->analogical_switch, &_8_analogical_switch_partial);
      outC->SM1_state_nxt = _9_SM1_state_nxt_partial;
      break;
    case SSM_st_switch_close_SM1 :
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_switch_close_SM1;
      /* SM1:switch_close:_L1/ */
      for (idx2 = 0; idx2 < 3; idx2++) {
        outC->_L1_switch_close_SM1[idx2] = kcg_true;
      }
      kcg_copy_array_bool_3(
        &_4_analogical_switch_partial,
        &outC->_L1_switch_close_SM1);
      kcg_copy_array_bool_3(&outC->analogical_switch, &_4_analogical_switch_partial);
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case SSM_st_switch_open_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_switch_open_SM1;
      /* SM1:switch_open:_L4/ */
      for (idx3 = 0; idx3 < 3; idx3++) {
        outC->_L4_switch_open_SM1[idx3] = kcg_false;
      }
      kcg_copy_array_bool_3(&analogical_switch_partial, &outC->_L4_switch_open_SM1);
      kcg_copy_array_bool_3(&outC->analogical_switch, &analogical_switch_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _10_SM1_reset_nxt_partial;
      outC->SM1_fired = _11_SM1_fired_partial;
      break;
    case SSM_st_switch_close_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case SSM_st_switch_open_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State4_SM1 :
      _23_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      outC->SM1_reset_act = _23_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_State3_SM1 :
      _20_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_switch_close_SM1 :
      if (tr_1_guard_switch_close_SM1) {
        _17_SM1_reset_act_partial = kcg_true;
      }
      else {
        _17_SM1_reset_act_partial = tr_2_guard_switch_close_SM1;
      }
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_switch_open_SM1 :
      SM1_reset_act_partial = tr_1_guard_switch_open_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Analogical_switch_init(outC_Analogical_switch *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->SM1_fired = _18_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _18_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_switch_open_SM1;
  outC->SM1_state_sel = SSM_st_switch_open_SM1;
  for (idx = 0; idx < 3; idx++) {
    outC->_L1_State4_SM1[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L1_State3_SM1[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L1_switch_close_SM1[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L4_switch_open_SM1[idx3] = kcg_true;
  }
  outC->v4_times_11_size = 0;
  outC->n_times_11_size = 0;
  outC->c_times_11_size = kcg_true;
  outC->o_times_11_size = kcg_true;
  outC->v4_times_13_size = 0;
  outC->n_times_13_size = 0;
  outC->c_times_13_size = kcg_true;
  outC->o_times_13_size = kcg_true;
  outC->v4_times_12_size = 0;
  outC->n_times_12_size = 0;
  outC->c_times_12_size = kcg_true;
  outC->o_times_12_size = kcg_true;
  outC->v3_times_11_size = 0;
  outC->v3_times_13_size = 0;
  outC->v3_times_12_size = 0;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->analogical_switch[idx4] = kcg_true;
  }
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_switch_open_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Analogical_switch_reset(outC_Analogical_switch *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_switch_open_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Analogical_switch/
  @3: (times#11)
  @2: (times#13)
  @1: (times#12)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Analogical_switch.c
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

