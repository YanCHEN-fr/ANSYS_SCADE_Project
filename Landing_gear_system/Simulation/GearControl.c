/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GearControl.h"

/* GearControl/ */
void GearControl(
  /* duration_unlock_down/ */
  kcg_int16 duration_unlock_down,
  /* duration_lock_up/ */
  kcg_int16 duration_lock_up,
  /* duration_sim_down_high/ */
  kcg_int16 duration_sim_down_high,
  /* gear_retract/ */
  kcg_bool gear_retract,
  /* duration_lock_down/ */
  kcg_int16 duration_lock_down,
  /* duration_sim_high_down/ */
  kcg_int16 duration_sim_high_down,
  /* duration_unlock_up/ */
  kcg_int16 duration_unlock_up,
  /* gear_extend/ */
  kcg_bool gear_extend,
  /* up2down/ */
  kcg_bool up2down,
  outC_GearControl *outC)
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
  kcg_size idx11;
  /* gear_extended/ */
  array_bool_3 gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 SM1_fired_partial;
  /* gear_extended/ */
  array_bool_3 _12_gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 _13_gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _14_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _15_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _16_SM1_fired_partial;
  /* gear_extended/ */
  array_bool_3 _17_gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 _18_gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _19_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _21_SM1_fired_partial;
  /* gear_extended/ */
  array_bool_3 _22_gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 _23_gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _24_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _26_SM1_fired_partial;
  /* gear_extended/ */
  array_bool_3 _27_gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 _28_gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _29_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _30_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _31_SM1_fired_partial;
  /* gear_extended/ */
  array_bool_3 _32_gear_extended_partial;
  /* gear_retracted/ */
  array_bool_3 _33_gear_retracted_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _36_SM1_fired_partial;
  /* SM1: */
  _6_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:down:<2> */
  kcg_bool tr_2_guard_down_SM1;
  /* SM1:down:<1> */
  kcg_bool tr_1_guard_down_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _37_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _38_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _39_SM1_fired_strong_partial;
  /* SM1:gear_retraction:<1> */
  kcg_bool tr_1_guard_gear_retraction_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _40_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _42_SM1_fired_strong_partial;
  /* SM1:up:<1> */
  kcg_bool tr_1_guard_up_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _43_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _44_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _45_SM1_fired_strong_partial;
  /* SM1:start_retract:<1> */
  kcg_bool tr_1_guard_start_retract_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _46_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _47_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _48_SM1_fired_strong_partial;
  /* SM1:start_outgoing:<1> */
  kcg_bool tr_1_guard_start_outgoing_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _49_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _50_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _51_SM1_fired_strong_partial;
  /* SM1:gear_outgoing:<1> */
  kcg_bool tr_1_guard_gear_outgoing_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_gear_retraction_SM1 :
      outC->n_times_2_int16 = duration_sim_down_high + duration_lock_up;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_gear_outgoing_SM1 :
      outC->n_times_14_int16 = duration_sim_high_down + duration_lock_down;
      if (SM1_reset_prv) {
        outC->init3 = kcg_true;
      }
      /* @4/_/v4= */
      if (outC->init3) {
        outC->v4_times_14_int16 = outC->n_times_14_int16;
      }
      else {
        outC->v4_times_14_int16 = outC->v3_times_14_int16;
      }
      outC->c_times_14_int16 = kcg_true;
      /* @4/_/v3= */
      if (outC->v4_times_14_int16 < kcg_lit_int16(0)) {
        outC->v3_times_14_int16 = outC->v4_times_14_int16;
      }
      else /* @4/_/v3= */
      if (outC->c_times_14_int16) {
        outC->v3_times_14_int16 = outC->v4_times_14_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_14_int16 = outC->v4_times_14_int16;
      }
      outC->o_times_14_int16 = outC->c_times_14_int16 &
        (outC->v3_times_14_int16 == kcg_lit_int16(0));
      tr_1_guard_gear_outgoing_SM1 = outC->o_times_14_int16;
      if (tr_1_guard_gear_outgoing_SM1) {
        _49_SM1_state_act_partial = SSM_st_down_SM1;
      }
      else {
        _49_SM1_state_act_partial = SSM_st_gear_outgoing_SM1;
      }
      outC->SM1_state_act = _49_SM1_state_act_partial;
      if (tr_1_guard_gear_outgoing_SM1) {
        _51_SM1_fired_strong_partial = SSM_TR_gear_outgoing_down_1_gear_outgoing_SM1;
      }
      else {
        _51_SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _51_SM1_fired_strong_partial;
      break;
    case SSM_st_start_outgoing_SM1 :
      outC->n_times_12_int16 = duration_unlock_up;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_12_int16 = outC->n_times_12_int16;
      }
      else {
        outC->v4_times_12_int16 = outC->v3_times_12_int16;
      }
      outC->c_times_12_int16 = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_12_int16 < kcg_lit_int16(0)) {
        outC->v3_times_12_int16 = outC->v4_times_12_int16;
      }
      else /* @3/_/v3= */
      if (outC->c_times_12_int16) {
        outC->v3_times_12_int16 = outC->v4_times_12_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_12_int16 = outC->v4_times_12_int16;
      }
      outC->o_times_12_int16 = outC->c_times_12_int16 &
        (outC->v3_times_12_int16 == kcg_lit_int16(0));
      tr_1_guard_start_outgoing_SM1 = outC->o_times_12_int16;
      if (tr_1_guard_start_outgoing_SM1) {
        _46_SM1_state_act_partial = SSM_st_gear_outgoing_SM1;
      }
      else {
        _46_SM1_state_act_partial = SSM_st_start_outgoing_SM1;
      }
      outC->SM1_state_act = _46_SM1_state_act_partial;
      if (tr_1_guard_start_outgoing_SM1) {
        _48_SM1_fired_strong_partial =
          SSM_TR_start_outgoing_gear_outgoing_1_start_outgoing_SM1;
      }
      else {
        _48_SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _48_SM1_fired_strong_partial;
      break;
    case SSM_st_start_retract_SM1 :
      outC->n_times_9_int16 = duration_unlock_down;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_9_int16 = outC->n_times_9_int16;
      }
      else {
        outC->v4_times_9_int16 = outC->v3_times_9_int16;
      }
      outC->c_times_9_int16 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_9_int16 < kcg_lit_int16(0)) {
        outC->v3_times_9_int16 = outC->v4_times_9_int16;
      }
      else /* @2/_/v3= */
      if (outC->c_times_9_int16) {
        outC->v3_times_9_int16 = outC->v4_times_9_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_9_int16 = outC->v4_times_9_int16;
      }
      outC->o_times_9_int16 = outC->c_times_9_int16 & (outC->v3_times_9_int16 ==
          kcg_lit_int16(0));
      tr_1_guard_start_retract_SM1 = outC->o_times_9_int16;
      if (tr_1_guard_start_retract_SM1) {
        _43_SM1_state_act_partial = SSM_st_gear_retraction_SM1;
      }
      else {
        _43_SM1_state_act_partial = SSM_st_start_retract_SM1;
      }
      outC->SM1_state_act = _43_SM1_state_act_partial;
      if (tr_1_guard_start_retract_SM1) {
        _45_SM1_fired_strong_partial =
          SSM_TR_start_retract_gear_retraction_1_start_retract_SM1;
      }
      else {
        _45_SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _45_SM1_fired_strong_partial;
      break;
    case SSM_st_up_SM1 :
      tr_1_guard_up_SM1 = gear_extend;
      if (tr_1_guard_up_SM1) {
        _40_SM1_state_act_partial = SSM_st_start_outgoing_SM1;
      }
      else {
        _40_SM1_state_act_partial = SSM_st_up_SM1;
      }
      outC->SM1_state_act = _40_SM1_state_act_partial;
      if (tr_1_guard_up_SM1) {
        _42_SM1_fired_strong_partial = SSM_TR_up_start_outgoing_1_up_SM1;
      }
      else {
        _42_SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _42_SM1_fired_strong_partial;
      break;
    case SSM_st_gear_retraction_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_2_int16 = outC->n_times_2_int16;
      }
      else {
        outC->v4_times_2_int16 = outC->v3_times_2_int16;
      }
      outC->c_times_2_int16 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_2_int16 < kcg_lit_int16(0)) {
        outC->v3_times_2_int16 = outC->v4_times_2_int16;
      }
      else /* @1/_/v3= */
      if (outC->c_times_2_int16) {
        outC->v3_times_2_int16 = outC->v4_times_2_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_2_int16 = outC->v4_times_2_int16;
      }
      outC->o_times_2_int16 = outC->c_times_2_int16 & (outC->v3_times_2_int16 ==
          kcg_lit_int16(0));
      tr_1_guard_gear_retraction_SM1 = outC->o_times_2_int16;
      if (tr_1_guard_gear_retraction_SM1) {
        _37_SM1_state_act_partial = SSM_st_up_SM1;
      }
      else {
        _37_SM1_state_act_partial = SSM_st_gear_retraction_SM1;
      }
      outC->SM1_state_act = _37_SM1_state_act_partial;
      if (tr_1_guard_gear_retraction_SM1) {
        _39_SM1_fired_strong_partial = SSM_TR_gear_retraction_up_1_gear_retraction_SM1;
      }
      else {
        _39_SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _39_SM1_fired_strong_partial;
      break;
    case SSM_st_down_SM1 :
      tr_2_guard_down_SM1 = up2down;
      tr_1_guard_down_SM1 = gear_retract == kcg_true;
      if (tr_1_guard_down_SM1) {
        SM1_state_act_partial = SSM_st_start_retract_SM1;
      }
      else if (tr_2_guard_down_SM1) {
        SM1_state_act_partial = SSM_st_up_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_down_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_down_SM1) {
        SM1_fired_strong_partial = SSM_TR_down_start_retract_1_down_SM1;
      }
      else if (tr_2_guard_down_SM1) {
        SM1_fired_strong_partial = SSM_TR_down_up_2_down_SM1;
      }
      else {
        SM1_fired_strong_partial = _22_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_gear_outgoing_SM1 :
      _36_SM1_fired_partial = outC->SM1_fired_strong;
      _35_SM1_reset_nxt_partial = kcg_false;
      _34_SM1_state_nxt_partial = SSM_st_gear_outgoing_SM1;
      /* SM1:gear_outgoing:_L2/ */
      for (idx = 0; idx < 3; idx++) {
        outC->_L2_gear_outgoing_SM1[idx] = kcg_false;
      }
      kcg_copy_array_bool_3(
        &_33_gear_retracted_partial,
        &outC->_L2_gear_outgoing_SM1);
      /* SM1:gear_outgoing:_L1/ */
      for (idx1 = 0; idx1 < 3; idx1++) {
        outC->_L1_gear_outgoing_SM1[idx1] = kcg_false;
      }
      kcg_copy_array_bool_3(&_32_gear_extended_partial, &outC->_L1_gear_outgoing_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &_32_gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &_33_gear_retracted_partial);
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      break;
    case SSM_st_start_outgoing_SM1 :
      _31_SM1_fired_partial = outC->SM1_fired_strong;
      _30_SM1_reset_nxt_partial = kcg_false;
      _29_SM1_state_nxt_partial = SSM_st_start_outgoing_SM1;
      /* SM1:start_outgoing:_L2/ */
      for (idx2 = 0; idx2 < 3; idx2++) {
        outC->_L2_start_outgoing_SM1[idx2] = kcg_true;
      }
      /* SM1:start_outgoing:_L1/ */
      for (idx3 = 0; idx3 < 3; idx3++) {
        outC->_L1_start_outgoing_SM1[idx3] = kcg_false;
      }
      kcg_copy_array_bool_3(
        &_28_gear_retracted_partial,
        &outC->_L2_start_outgoing_SM1);
      kcg_copy_array_bool_3(
        &_27_gear_extended_partial,
        &outC->_L1_start_outgoing_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &_27_gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &_28_gear_retracted_partial);
      outC->SM1_state_nxt = _29_SM1_state_nxt_partial;
      break;
    case SSM_st_start_retract_SM1 :
      _26_SM1_fired_partial = outC->SM1_fired_strong;
      _25_SM1_reset_nxt_partial = kcg_false;
      _24_SM1_state_nxt_partial = SSM_st_start_retract_SM1;
      /* SM1:start_retract:_L2/ */
      for (idx4 = 0; idx4 < 3; idx4++) {
        outC->_L2_start_retract_SM1[idx4] = kcg_false;
      }
      /* SM1:start_retract:_L1/ */
      for (idx5 = 0; idx5 < 3; idx5++) {
        outC->_L1_start_retract_SM1[idx5] = kcg_true;
      }
      kcg_copy_array_bool_3(
        &_23_gear_retracted_partial,
        &outC->_L2_start_retract_SM1);
      kcg_copy_array_bool_3(&_22_gear_extended_partial, &outC->_L1_start_retract_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &_22_gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &_23_gear_retracted_partial);
      outC->SM1_state_nxt = _24_SM1_state_nxt_partial;
      break;
    case SSM_st_up_SM1 :
      _21_SM1_fired_partial = outC->SM1_fired_strong;
      _20_SM1_reset_nxt_partial = kcg_false;
      _19_SM1_state_nxt_partial = SSM_st_up_SM1;
      /* SM1:up:_L2/ */
      for (idx6 = 0; idx6 < 3; idx6++) {
        outC->_L2_up_SM1[idx6] = kcg_true;
      }
      kcg_copy_array_bool_3(&_18_gear_retracted_partial, &outC->_L2_up_SM1);
      /* SM1:up:_L1/ */
      for (idx7 = 0; idx7 < 3; idx7++) {
        outC->_L1_up_SM1[idx7] = kcg_false;
      }
      kcg_copy_array_bool_3(&_17_gear_extended_partial, &outC->_L1_up_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &_17_gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &_18_gear_retracted_partial);
      outC->SM1_state_nxt = _19_SM1_state_nxt_partial;
      break;
    case SSM_st_gear_retraction_SM1 :
      _16_SM1_fired_partial = outC->SM1_fired_strong;
      _15_SM1_reset_nxt_partial = kcg_false;
      _14_SM1_state_nxt_partial = SSM_st_gear_retraction_SM1;
      /* SM1:gear_retraction:_L2/ */
      for (idx8 = 0; idx8 < 3; idx8++) {
        outC->_L2_gear_retraction_SM1[idx8] = kcg_false;
      }
      kcg_copy_array_bool_3(
        &_13_gear_retracted_partial,
        &outC->_L2_gear_retraction_SM1);
      /* SM1:gear_retraction:_L1/ */
      for (idx9 = 0; idx9 < 3; idx9++) {
        outC->_L1_gear_retraction_SM1[idx9] = kcg_false;
      }
      kcg_copy_array_bool_3(
        &_12_gear_extended_partial,
        &outC->_L1_gear_retraction_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &_12_gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &_13_gear_retracted_partial);
      outC->SM1_state_nxt = _14_SM1_state_nxt_partial;
      break;
    case SSM_st_down_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_down_SM1;
      /* SM1:down:_L3/ */
      for (idx10 = 0; idx10 < 3; idx10++) {
        outC->_L3_down_SM1[idx10] = kcg_false;
      }
      kcg_copy_array_bool_3(&gear_retracted_partial, &outC->_L3_down_SM1);
      /* SM1:down:_L1/ */
      for (idx11 = 0; idx11 < 3; idx11++) {
        outC->_L1_down_SM1[idx11] = kcg_true;
      }
      kcg_copy_array_bool_3(&gear_extended_partial, &outC->_L1_down_SM1);
      kcg_copy_array_bool_3(&outC->gear_extended, &gear_extended_partial);
      kcg_copy_array_bool_3(&outC->gear_retracted, &gear_retracted_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_gear_outgoing_SM1 :
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      break;
    case SSM_st_start_outgoing_SM1 :
      outC->SM1_reset_nxt = _30_SM1_reset_nxt_partial;
      outC->SM1_fired = _31_SM1_fired_partial;
      break;
    case SSM_st_start_retract_SM1 :
      outC->SM1_reset_nxt = _25_SM1_reset_nxt_partial;
      outC->SM1_fired = _26_SM1_fired_partial;
      break;
    case SSM_st_up_SM1 :
      outC->SM1_reset_nxt = _20_SM1_reset_nxt_partial;
      outC->SM1_fired = _21_SM1_fired_partial;
      break;
    case SSM_st_gear_retraction_SM1 :
      outC->SM1_reset_nxt = _15_SM1_reset_nxt_partial;
      outC->SM1_fired = _16_SM1_fired_partial;
      break;
    case SSM_st_down_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_gear_outgoing_SM1 :
      _50_SM1_reset_act_partial = tr_1_guard_gear_outgoing_SM1;
      outC->SM1_reset_act = _50_SM1_reset_act_partial;
      outC->init3 = kcg_false;
      break;
    case SSM_st_start_outgoing_SM1 :
      _47_SM1_reset_act_partial = tr_1_guard_start_outgoing_SM1;
      outC->SM1_reset_act = _47_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_start_retract_SM1 :
      _44_SM1_reset_act_partial = tr_1_guard_start_retract_SM1;
      outC->SM1_reset_act = _44_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_up_SM1 :
      _41_SM1_reset_act_partial = tr_1_guard_up_SM1;
      outC->SM1_reset_act = _41_SM1_reset_act_partial;
      break;
    case SSM_st_gear_retraction_SM1 :
      _38_SM1_reset_act_partial = tr_1_guard_gear_retraction_SM1;
      outC->SM1_reset_act = _38_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_down_SM1 :
      if (tr_1_guard_down_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_down_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void GearControl_init(outC_GearControl *outC)
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
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;

  outC->SM1_fired = _22_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _22_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_down_SM1;
  outC->SM1_state_sel = SSM_st_down_SM1;
  for (idx = 0; idx < 3; idx++) {
    outC->_L1_gear_outgoing_SM1[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L2_gear_outgoing_SM1[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L1_start_outgoing_SM1[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L2_start_outgoing_SM1[idx3] = kcg_true;
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L1_start_retract_SM1[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L2_start_retract_SM1[idx5] = kcg_true;
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L1_up_SM1[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L2_up_SM1[idx7] = kcg_true;
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L1_gear_retraction_SM1[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L2_gear_retraction_SM1[idx9] = kcg_true;
  }
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->_L1_down_SM1[idx10] = kcg_true;
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L3_down_SM1[idx11] = kcg_true;
  }
  outC->v4_times_14_int16 = kcg_lit_int16(0);
  outC->n_times_14_int16 = kcg_lit_int16(0);
  outC->c_times_14_int16 = kcg_true;
  outC->o_times_14_int16 = kcg_true;
  outC->v4_times_12_int16 = kcg_lit_int16(0);
  outC->n_times_12_int16 = kcg_lit_int16(0);
  outC->c_times_12_int16 = kcg_true;
  outC->o_times_12_int16 = kcg_true;
  outC->v4_times_9_int16 = kcg_lit_int16(0);
  outC->n_times_9_int16 = kcg_lit_int16(0);
  outC->c_times_9_int16 = kcg_true;
  outC->o_times_9_int16 = kcg_true;
  outC->v4_times_2_int16 = kcg_lit_int16(0);
  outC->n_times_2_int16 = kcg_lit_int16(0);
  outC->c_times_2_int16 = kcg_true;
  outC->o_times_2_int16 = kcg_true;
  outC->v3_times_14_int16 = kcg_lit_int16(0);
  outC->v3_times_12_int16 = kcg_lit_int16(0);
  outC->v3_times_9_int16 = kcg_lit_int16(0);
  outC->v3_times_2_int16 = kcg_lit_int16(0);
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->gear_retracted[idx12] = kcg_true;
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->gear_extended[idx13] = kcg_true;
  }
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_down_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GearControl_reset(outC_GearControl *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_down_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: GearControl/
  @4: (times#14)
  @3: (times#12)
  @2: (times#9)
  @1: (times#2)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** GearControl.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

