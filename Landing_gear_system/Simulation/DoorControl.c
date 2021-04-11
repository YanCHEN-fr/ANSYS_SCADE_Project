/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DoorControl.h"

/* DoorControl/ */
void DoorControl(
  /* unlock_high_time/ */
  kcg_int16 unlock_high_time,
  /* high_to_down_time/ */
  kcg_int16 high_to_down_time,
  /* open_EV/ */
  kcg_bool open_EV,
  /* down_to_high_time/ */
  kcg_int16 down_to_high_time,
  /* lock_high_time/ */
  kcg_int16 lock_high_time,
  /* close_EV/ */
  kcg_bool close_EV,
  outC_DoorControl *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  /* door_closed/ */
  array_bool_3 door_closed_partial;
  /* door_open/ */
  array_bool_3 door_open_partial;
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 SM1_fired_partial;
  /* door_closed/ */
  array_bool_3 _9_door_closed_partial;
  /* door_open/ */
  array_bool_3 _10_door_open_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _11_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _12_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _13_SM1_fired_partial;
  /* door_closed/ */
  array_bool_3 _14_door_closed_partial;
  /* door_open/ */
  array_bool_3 _15_door_open_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _16_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _18_SM1_fired_partial;
  /* door_closed/ */
  array_bool_3 _19_door_closed_partial;
  /* door_open/ */
  array_bool_3 _20_door_open_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _21_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _22_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _23_SM1_fired_partial;
  /* door_closed/ */
  array_bool_3 _24_door_closed_partial;
  /* door_open/ */
  array_bool_3 _25_door_open_partial;
  /* SM1: */
  _8_SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _28_SM1_fired_partial;
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:open_door:<1> */
  kcg_bool tr_1_guard_open_door_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _29_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _30_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _31_SM1_fired_strong_partial;
  /* SM1:close_door:<1> */
  kcg_bool tr_1_guard_close_door_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _32_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _33_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _34_SM1_fired_strong_partial;
  /* SM1:Intermediate1:<1> */
  kcg_bool tr_1_guard_Intermediate1_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _35_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _36_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _37_SM1_fired_strong_partial;
  /* SM1:State5:<1> */
  kcg_bool tr_1_guard_State5_SM1;
  /* SM1: */
  _8_SSM_ST_SM1 _38_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _39_SM1_reset_act_partial;
  /* SM1: */
  _9_SSM_TR_SM1 _40_SM1_fired_strong_partial;
  /* SM1:inter_close_door:<1> */
  kcg_bool tr_1_guard_inter_close_door_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_Intermediate1_SM1 :
      outC->n_times_4_int16 = high_to_down_time;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_inter_close_door_SM1 :
      outC->n_times_19_int16 = lock_high_time + down_to_high_time;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_19_int16 = outC->n_times_19_int16;
      }
      else {
        outC->v4_times_19_int16 = outC->v3_times_19_int16;
      }
      outC->c_times_19_int16 = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_19_int16 < kcg_lit_int16(0)) {
        outC->v3_times_19_int16 = outC->v4_times_19_int16;
      }
      else /* @3/_/v3= */
      if (outC->c_times_19_int16) {
        outC->v3_times_19_int16 = outC->v4_times_19_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_19_int16 = outC->v4_times_19_int16;
      }
      outC->o_times_19_int16 = outC->c_times_19_int16 &
        (outC->v3_times_19_int16 == kcg_lit_int16(0));
      tr_1_guard_inter_close_door_SM1 = outC->o_times_19_int16;
      if (tr_1_guard_inter_close_door_SM1) {
        _38_SM1_state_act_partial = SSM_st_close_door_SM1;
      }
      else {
        _38_SM1_state_act_partial = SSM_st_inter_close_door_SM1;
      }
      outC->SM1_state_act = _38_SM1_state_act_partial;
      if (tr_1_guard_inter_close_door_SM1) {
        _40_SM1_fired_strong_partial =
          SSM_TR_inter_close_door_close_door_1_inter_close_door_SM1;
      }
      else {
        _40_SM1_fired_strong_partial = _21_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _40_SM1_fired_strong_partial;
      break;
    case SSM_st_State5_SM1 :
      outC->n_times_17_int16 = unlock_high_time;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_17_int16 = outC->n_times_17_int16;
      }
      else {
        outC->v4_times_17_int16 = outC->v3_times_17_int16;
      }
      outC->c_times_17_int16 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_17_int16 < kcg_lit_int16(0)) {
        outC->v3_times_17_int16 = outC->v4_times_17_int16;
      }
      else /* @2/_/v3= */
      if (outC->c_times_17_int16) {
        outC->v3_times_17_int16 = outC->v4_times_17_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_17_int16 = outC->v4_times_17_int16;
      }
      outC->o_times_17_int16 = outC->c_times_17_int16 &
        (outC->v3_times_17_int16 == kcg_lit_int16(0));
      tr_1_guard_State5_SM1 = outC->o_times_17_int16;
      if (tr_1_guard_State5_SM1) {
        _35_SM1_state_act_partial = SSM_st_Intermediate1_SM1;
      }
      else {
        _35_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      outC->SM1_state_act = _35_SM1_state_act_partial;
      if (tr_1_guard_State5_SM1) {
        _37_SM1_fired_strong_partial = SSM_TR_State5_Intermediate1_1_State5_SM1;
      }
      else {
        _37_SM1_fired_strong_partial = _21_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _37_SM1_fired_strong_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_4_int16 = outC->n_times_4_int16;
      }
      else {
        outC->v4_times_4_int16 = outC->v3_times_4_int16;
      }
      outC->c_times_4_int16 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_4_int16 < kcg_lit_int16(0)) {
        outC->v3_times_4_int16 = outC->v4_times_4_int16;
      }
      else /* @1/_/v3= */
      if (outC->c_times_4_int16) {
        outC->v3_times_4_int16 = outC->v4_times_4_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_4_int16 = outC->v4_times_4_int16;
      }
      outC->o_times_4_int16 = outC->c_times_4_int16 & (outC->v3_times_4_int16 ==
          kcg_lit_int16(0));
      tr_1_guard_Intermediate1_SM1 = outC->o_times_4_int16;
      if (tr_1_guard_Intermediate1_SM1) {
        _32_SM1_state_act_partial = SSM_st_open_door_SM1;
      }
      else {
        _32_SM1_state_act_partial = SSM_st_Intermediate1_SM1;
      }
      outC->SM1_state_act = _32_SM1_state_act_partial;
      if (tr_1_guard_Intermediate1_SM1) {
        _34_SM1_fired_strong_partial =
          SSM_TR_Intermediate1_open_door_1_Intermediate1_SM1;
      }
      else {
        _34_SM1_fired_strong_partial = _21_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _34_SM1_fired_strong_partial;
      break;
    case SSM_st_close_door_SM1 :
      tr_1_guard_close_door_SM1 = open_EV;
      if (tr_1_guard_close_door_SM1) {
        _29_SM1_state_act_partial = SSM_st_State5_SM1;
      }
      else {
        _29_SM1_state_act_partial = SSM_st_close_door_SM1;
      }
      outC->SM1_state_act = _29_SM1_state_act_partial;
      if (tr_1_guard_close_door_SM1) {
        _31_SM1_fired_strong_partial = SSM_TR_close_door_State5_1_close_door_SM1;
      }
      else {
        _31_SM1_fired_strong_partial = _21_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _31_SM1_fired_strong_partial;
      break;
    case SSM_st_open_door_SM1 :
      tr_1_guard_open_door_SM1 = close_EV;
      if (tr_1_guard_open_door_SM1) {
        SM1_state_act_partial = SSM_st_inter_close_door_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_open_door_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_open_door_SM1) {
        SM1_fired_strong_partial = SSM_TR_open_door_inter_close_door_1_open_door_SM1;
      }
      else {
        SM1_fired_strong_partial = _21_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_inter_close_door_SM1 :
      _28_SM1_fired_partial = outC->SM1_fired_strong;
      _27_SM1_reset_nxt_partial = kcg_false;
      _26_SM1_state_nxt_partial = SSM_st_inter_close_door_SM1;
      /* SM1:inter_close_door:_L3/ */
      for (idx = 0; idx < 3; idx++) {
        outC->_L3_inter_close_door_SM1[idx] = kcg_false;
      }
      /* SM1:inter_close_door:_L1/ */
      for (idx1 = 0; idx1 < 3; idx1++) {
        outC->_L1_inter_close_door_SM1[idx1] = kcg_true;
      }
      kcg_copy_array_bool_3(&_25_door_open_partial, &outC->_L1_inter_close_door_SM1);
      kcg_copy_array_bool_3(
        &_24_door_closed_partial,
        &outC->_L3_inter_close_door_SM1);
      kcg_copy_array_bool_3(&outC->door_closed, &_24_door_closed_partial);
      kcg_copy_array_bool_3(&outC->door_open, &_25_door_open_partial);
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_State5_SM1 :
      _23_SM1_fired_partial = outC->SM1_fired_strong;
      _22_SM1_reset_nxt_partial = kcg_false;
      _21_SM1_state_nxt_partial = SSM_st_State5_SM1;
      /* SM1:State5:_L3/ */
      for (idx2 = 0; idx2 < 3; idx2++) {
        outC->_L3_State5_SM1[idx2] = kcg_false;
      }
      kcg_copy_array_bool_3(&_20_door_open_partial, &outC->_L3_State5_SM1);
      /* SM1:State5:_L2/ */
      for (idx3 = 0; idx3 < 3; idx3++) {
        outC->_L2_State5_SM1[idx3] = kcg_true;
      }
      kcg_copy_array_bool_3(&_19_door_closed_partial, &outC->_L2_State5_SM1);
      kcg_copy_array_bool_3(&outC->door_closed, &_19_door_closed_partial);
      kcg_copy_array_bool_3(&outC->door_open, &_20_door_open_partial);
      outC->SM1_state_nxt = _21_SM1_state_nxt_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      _18_SM1_fired_partial = outC->SM1_fired_strong;
      _17_SM1_reset_nxt_partial = kcg_false;
      _16_SM1_state_nxt_partial = SSM_st_Intermediate1_SM1;
      /* SM1:Intermediate1:_L1/ */
      for (idx4 = 0; idx4 < 3; idx4++) {
        outC->_L1_Intermediate1_SM1[idx4] = kcg_false;
      }
      kcg_copy_array_bool_3(&_15_door_open_partial, &outC->_L1_Intermediate1_SM1);
      kcg_copy_array_bool_3(&_14_door_closed_partial, &outC->_L1_Intermediate1_SM1);
      kcg_copy_array_bool_3(&outC->door_closed, &_14_door_closed_partial);
      kcg_copy_array_bool_3(&outC->door_open, &_15_door_open_partial);
      outC->SM1_state_nxt = _16_SM1_state_nxt_partial;
      break;
    case SSM_st_close_door_SM1 :
      _13_SM1_fired_partial = outC->SM1_fired_strong;
      _12_SM1_reset_nxt_partial = kcg_false;
      _11_SM1_state_nxt_partial = SSM_st_close_door_SM1;
      /* SM1:close_door:_L2/ */
      for (idx5 = 0; idx5 < 3; idx5++) {
        outC->_L2_close_door_SM1[idx5] = kcg_false;
      }
      kcg_copy_array_bool_3(&_10_door_open_partial, &outC->_L2_close_door_SM1);
      /* SM1:close_door:_L1/ */
      for (idx6 = 0; idx6 < 3; idx6++) {
        outC->_L1_close_door_SM1[idx6] = kcg_true;
      }
      kcg_copy_array_bool_3(&_9_door_closed_partial, &outC->_L1_close_door_SM1);
      kcg_copy_array_bool_3(&outC->door_closed, &_9_door_closed_partial);
      kcg_copy_array_bool_3(&outC->door_open, &_10_door_open_partial);
      outC->SM1_state_nxt = _11_SM1_state_nxt_partial;
      break;
    case SSM_st_open_door_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_open_door_SM1;
      /* SM1:open_door:_L3/ */
      for (idx7 = 0; idx7 < 3; idx7++) {
        outC->_L3_open_door_SM1[idx7] = kcg_false;
      }
      /* SM1:open_door:_L1/ */
      for (idx8 = 0; idx8 < 3; idx8++) {
        outC->_L1_open_door_SM1[idx8] = kcg_true;
      }
      kcg_copy_array_bool_3(&door_open_partial, &outC->_L1_open_door_SM1);
      kcg_copy_array_bool_3(&door_closed_partial, &outC->_L3_open_door_SM1);
      kcg_copy_array_bool_3(&outC->door_closed, &door_closed_partial);
      kcg_copy_array_bool_3(&outC->door_open, &door_open_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_inter_close_door_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_State5_SM1 :
      outC->SM1_reset_nxt = _22_SM1_reset_nxt_partial;
      outC->SM1_fired = _23_SM1_fired_partial;
      break;
    case SSM_st_Intermediate1_SM1 :
      outC->SM1_reset_nxt = _17_SM1_reset_nxt_partial;
      outC->SM1_fired = _18_SM1_fired_partial;
      break;
    case SSM_st_close_door_SM1 :
      outC->SM1_reset_nxt = _12_SM1_reset_nxt_partial;
      outC->SM1_fired = _13_SM1_fired_partial;
      break;
    case SSM_st_open_door_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_inter_close_door_SM1 :
      _39_SM1_reset_act_partial = tr_1_guard_inter_close_door_SM1;
      outC->SM1_reset_act = _39_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_State5_SM1 :
      _36_SM1_reset_act_partial = tr_1_guard_State5_SM1;
      outC->SM1_reset_act = _36_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_Intermediate1_SM1 :
      _33_SM1_reset_act_partial = tr_1_guard_Intermediate1_SM1;
      outC->SM1_reset_act = _33_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_close_door_SM1 :
      _30_SM1_reset_act_partial = tr_1_guard_close_door_SM1;
      outC->SM1_reset_act = _30_SM1_reset_act_partial;
      break;
    case SSM_st_open_door_SM1 :
      SM1_reset_act_partial = tr_1_guard_open_door_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void DoorControl_init(outC_DoorControl *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;

  outC->SM1_fired = _21_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _21_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_open_door_SM1;
  outC->SM1_state_sel = SSM_st_open_door_SM1;
  for (idx = 0; idx < 3; idx++) {
    outC->_L1_inter_close_door_SM1[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L3_inter_close_door_SM1[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L2_State5_SM1[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L3_State5_SM1[idx3] = kcg_true;
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L1_Intermediate1_SM1[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L1_close_door_SM1[idx5] = kcg_true;
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L2_close_door_SM1[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L1_open_door_SM1[idx7] = kcg_true;
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L3_open_door_SM1[idx8] = kcg_true;
  }
  outC->v4_times_19_int16 = kcg_lit_int16(0);
  outC->n_times_19_int16 = kcg_lit_int16(0);
  outC->c_times_19_int16 = kcg_true;
  outC->o_times_19_int16 = kcg_true;
  outC->v4_times_17_int16 = kcg_lit_int16(0);
  outC->n_times_17_int16 = kcg_lit_int16(0);
  outC->c_times_17_int16 = kcg_true;
  outC->o_times_17_int16 = kcg_true;
  outC->v4_times_4_int16 = kcg_lit_int16(0);
  outC->n_times_4_int16 = kcg_lit_int16(0);
  outC->c_times_4_int16 = kcg_true;
  outC->o_times_4_int16 = kcg_true;
  outC->v3_times_19_int16 = kcg_lit_int16(0);
  outC->v3_times_17_int16 = kcg_lit_int16(0);
  outC->v3_times_4_int16 = kcg_lit_int16(0);
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->door_open[idx9] = kcg_true;
  }
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->door_closed[idx10] = kcg_true;
  }
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_close_door_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DoorControl_reset(outC_DoorControl *outC)
{
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_close_door_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: DoorControl/
  @3: (times#19)
  @2: (times#17)
  @1: (times#4)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DoorControl.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

