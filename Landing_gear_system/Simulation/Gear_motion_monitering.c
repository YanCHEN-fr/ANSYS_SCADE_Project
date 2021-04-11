/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gear_motion_monitering.h"

/* Gear_motion_monitering/ */
void Gear_motion_monitering(
  /* gear_retracted/ */
  array_bool_3 *gear_retracted,
  /* retract_EV/ */
  kcg_bool retract_EV,
  /* duration1/ */
  kcg_int16 duration1,
  /* duration2/ */
  kcg_int16 duration2,
  /* gear_extended/ */
  array_bool_3 *gear_extended,
  /* extend_EV/ */
  kcg_bool extend_EV,
  outC_Gear_motion_monitering *outC)
{
  kcg_bool op_call;
  kcg_bool _1_op_call;
  kcg_bool _2_op_call;
  kcg_bool _3_op_call;
  /* abnormal/ */
  kcg_bool abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* abnormal/ */
  kcg_bool _4_abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _7_SM1_fired_partial;
  /* abnormal/ */
  kcg_bool _8_abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _10_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _11_SM1_fired_partial;
  /* abnormal/ */
  kcg_bool _12_abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* abnormal/ */
  kcg_bool _16_abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 _17_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _18_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _19_SM1_fired_partial;
  /* abnormal/ */
  kcg_bool _20_abnormal_partial;
  /* SM1: */
  SSM_ST_SM1 _21_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _22_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _23_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:nomal:<4> */
  kcg_bool tr_4_guard_nomal_SM1;
  /* SM1:nomal:<3> */
  kcg_bool tr_3_guard_nomal_SM1;
  /* SM1:nomal:<2> */
  kcg_bool tr_2_guard_nomal_SM1;
  /* SM1:nomal:<1> */
  kcg_bool tr_1_guard_nomal_SM1;
  /* SM1: */
  SSM_ST_SM1 _24_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _26_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _27_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _28_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _29_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  kcg_bool tr_1_guard_State3_SM1;
  /* SM1: */
  SSM_ST_SM1 _30_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _31_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _32_SM1_fired_strong_partial;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* SM1: */
  SSM_ST_SM1 _33_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _34_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _35_SM1_fired_strong_partial;
  /* SM1:State5:<1> */
  kcg_bool tr_1_guard_State5_SM1;
  /* SM1: */
  SSM_ST_SM1 _36_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _37_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _38_SM1_fired_strong_partial;
  /* SM1:State6:<1> */
  kcg_bool tr_1_guard_State6_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_State6_SM1 :
      outC->n_times_19_int16 = duration2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State6_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_19_int16 = outC->n_times_19_int16;
      }
      else {
        outC->v4_times_19_int16 = outC->v3_times_19_int16;
      }
      outC->c_times_19_int16 = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_19_int16 < kcg_lit_int16(0)) {
        outC->v3_times_19_int16 = outC->v4_times_19_int16;
      }
      else /* @1/_/v3= */
      if (outC->c_times_19_int16) {
        outC->v3_times_19_int16 = outC->v4_times_19_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_19_int16 = outC->v4_times_19_int16;
      }
      outC->o_times_19_int16 = outC->c_times_19_int16 &
        (outC->v3_times_19_int16 == kcg_lit_int16(0));
      _3_op_call = outC->o_times_19_int16;
      tr_1_guard_State6_SM1 = (((*gear_extended)[0] == kcg_false) |
          ((*gear_extended)[1] == kcg_false) | ((*gear_extended)[2] ==
            kcg_false)) & _3_op_call;
      if (tr_1_guard_State6_SM1) {
        _36_SM1_state_act_partial = SSM_st_abnormal_SM1;
      }
      else {
        _36_SM1_state_act_partial = SSM_st_State6_SM1;
      }
      outC->SM1_state_act = _36_SM1_state_act_partial;
      if (tr_1_guard_State6_SM1) {
        _38_SM1_fired_strong_partial = SSM_TR_State6_abnormal_1_State6_SM1;
      }
      else {
        _38_SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _38_SM1_fired_strong_partial;
      break;
    case _29_SSM_st_State5_SM1 :
      outC->n_times_21_int16 = duration1;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_21_int16 = outC->n_times_21_int16;
      }
      else {
        outC->v4_times_21_int16 = outC->v3_times_21_int16;
      }
      outC->c_times_21_int16 = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_21_int16 < kcg_lit_int16(0)) {
        outC->v3_times_21_int16 = outC->v4_times_21_int16;
      }
      else /* @2/_/v3= */
      if (outC->c_times_21_int16) {
        outC->v3_times_21_int16 = outC->v4_times_21_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_21_int16 = outC->v4_times_21_int16;
      }
      outC->o_times_21_int16 = outC->c_times_21_int16 &
        (outC->v3_times_21_int16 == kcg_lit_int16(0));
      _2_op_call = outC->o_times_21_int16;
      tr_1_guard_State5_SM1 = (((*gear_extended)[0] == kcg_true) |
          ((*gear_extended)[1] == kcg_true) | ((*gear_extended)[2] ==
            kcg_true)) & _2_op_call;
      if (tr_1_guard_State5_SM1) {
        _33_SM1_state_act_partial = SSM_st_abnormal_SM1;
      }
      else {
        _33_SM1_state_act_partial = _29_SSM_st_State5_SM1;
      }
      outC->SM1_state_act = _33_SM1_state_act_partial;
      if (tr_1_guard_State5_SM1) {
        _35_SM1_fired_strong_partial = SSM_TR_State5_abnormal_1_State5_SM1;
      }
      else {
        _35_SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _35_SM1_fired_strong_partial;
      break;
    case _30_SSM_st_State4_SM1 :
      outC->n_times_10_int16 = duration2;
      if (SM1_reset_prv) {
        outC->init2 = kcg_true;
      }
      /* @3/_/v4= */
      if (outC->init2) {
        outC->v4_times_10_int16 = outC->n_times_10_int16;
      }
      else {
        outC->v4_times_10_int16 = outC->v3_times_10_int16;
      }
      outC->c_times_10_int16 = kcg_true;
      /* @3/_/v3= */
      if (outC->v4_times_10_int16 < kcg_lit_int16(0)) {
        outC->v3_times_10_int16 = outC->v4_times_10_int16;
      }
      else /* @3/_/v3= */
      if (outC->c_times_10_int16) {
        outC->v3_times_10_int16 = outC->v4_times_10_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_10_int16 = outC->v4_times_10_int16;
      }
      outC->o_times_10_int16 = outC->c_times_10_int16 &
        (outC->v3_times_10_int16 == kcg_lit_int16(0));
      _1_op_call = outC->o_times_10_int16;
      tr_1_guard_State4_SM1 = _1_op_call & (((*gear_retracted)[0] ==
            kcg_false) | ((*gear_retracted)[1] == kcg_false) |
          ((*gear_retracted)[2] == kcg_false));
      if (tr_1_guard_State4_SM1) {
        _30_SM1_state_act_partial = SSM_st_abnormal_SM1;
      }
      else {
        _30_SM1_state_act_partial = _30_SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _30_SM1_state_act_partial;
      if (tr_1_guard_State4_SM1) {
        _32_SM1_fired_strong_partial = SSM_TR_State4_abnormal_1_State4_SM1;
      }
      else {
        _32_SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _32_SM1_fired_strong_partial;
      break;
    case _31_SSM_st_State3_SM1 :
      outC->n_times_20_int16 = duration1;
      if (SM1_reset_prv) {
        outC->init3 = kcg_true;
      }
      /* @4/_/v4= */
      if (outC->init3) {
        outC->v4_times_20_int16 = outC->n_times_20_int16;
      }
      else {
        outC->v4_times_20_int16 = outC->v3_times_20_int16;
      }
      outC->c_times_20_int16 = kcg_true;
      /* @4/_/v3= */
      if (outC->v4_times_20_int16 < kcg_lit_int16(0)) {
        outC->v3_times_20_int16 = outC->v4_times_20_int16;
      }
      else /* @4/_/v3= */
      if (outC->c_times_20_int16) {
        outC->v3_times_20_int16 = outC->v4_times_20_int16 - kcg_lit_int16(1);
      }
      else {
        outC->v3_times_20_int16 = outC->v4_times_20_int16;
      }
      outC->o_times_20_int16 = outC->c_times_20_int16 &
        (outC->v3_times_20_int16 == kcg_lit_int16(0));
      op_call = outC->o_times_20_int16;
      tr_1_guard_State3_SM1 = op_call & (((*gear_retracted)[0] == kcg_true) |
          ((*gear_retracted)[1] == kcg_true) | ((*gear_retracted)[2] ==
            kcg_true));
      if (tr_1_guard_State3_SM1) {
        _27_SM1_state_act_partial = SSM_st_abnormal_SM1;
      }
      else {
        _27_SM1_state_act_partial = _31_SSM_st_State3_SM1;
      }
      outC->SM1_state_act = _27_SM1_state_act_partial;
      if (tr_1_guard_State3_SM1) {
        _29_SM1_fired_strong_partial = SSM_TR_State3_abnormal_1_State3_SM1;
      }
      else {
        _29_SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _29_SM1_fired_strong_partial;
      break;
    case SSM_st_abnormal_SM1 :
      _24_SM1_state_act_partial = SSM_st_abnormal_SM1;
      outC->SM1_state_act = _24_SM1_state_act_partial;
      _26_SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _26_SM1_fired_strong_partial;
      break;
    case SSM_st_nomal_SM1 :
      tr_4_guard_nomal_SM1 = extend_EV == kcg_true;
      tr_3_guard_nomal_SM1 = extend_EV == kcg_true;
      tr_2_guard_nomal_SM1 = retract_EV == kcg_true;
      tr_1_guard_nomal_SM1 = retract_EV == kcg_true;
      if (tr_1_guard_nomal_SM1) {
        SM1_state_act_partial = _31_SSM_st_State3_SM1;
      }
      else if (tr_2_guard_nomal_SM1) {
        SM1_state_act_partial = _30_SSM_st_State4_SM1;
      }
      else if (tr_3_guard_nomal_SM1) {
        SM1_state_act_partial = _29_SSM_st_State5_SM1;
      }
      else if (tr_4_guard_nomal_SM1) {
        SM1_state_act_partial = SSM_st_State6_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_nomal_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_nomal_SM1) {
        SM1_fired_strong_partial = SSM_TR_nomal_State3_1_nomal_SM1;
      }
      else if (tr_2_guard_nomal_SM1) {
        SM1_fired_strong_partial = SSM_TR_nomal_State4_2_nomal_SM1;
      }
      else if (tr_3_guard_nomal_SM1) {
        SM1_fired_strong_partial = SSM_TR_nomal_State5_3_nomal_SM1;
      }
      else if (tr_4_guard_nomal_SM1) {
        SM1_fired_strong_partial = SSM_TR_nomal_State6_4_nomal_SM1;
      }
      else {
        SM1_fired_strong_partial = _28_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State6_SM1 :
      _23_SM1_fired_partial = outC->SM1_fired_strong;
      _22_SM1_reset_nxt_partial = kcg_false;
      _21_SM1_state_nxt_partial = SSM_st_State6_SM1;
      outC->_L2_State6_SM1 = kcg_false;
      _20_abnormal_partial = outC->_L2_State6_SM1;
      outC->abnormal = _20_abnormal_partial;
      outC->SM1_state_nxt = _21_SM1_state_nxt_partial;
      break;
    case _29_SSM_st_State5_SM1 :
      _19_SM1_fired_partial = outC->SM1_fired_strong;
      _18_SM1_reset_nxt_partial = kcg_false;
      _17_SM1_state_nxt_partial = _29_SSM_st_State5_SM1;
      outC->_L2_State5_SM1 = kcg_false;
      _16_abnormal_partial = outC->_L2_State5_SM1;
      outC->abnormal = _16_abnormal_partial;
      outC->SM1_state_nxt = _17_SM1_state_nxt_partial;
      break;
    case _30_SSM_st_State4_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = _30_SSM_st_State4_SM1;
      outC->_L2_State4_SM1 = kcg_false;
      _12_abnormal_partial = outC->_L2_State4_SM1;
      outC->abnormal = _12_abnormal_partial;
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case _31_SSM_st_State3_SM1 :
      _11_SM1_fired_partial = outC->SM1_fired_strong;
      _10_SM1_reset_nxt_partial = kcg_false;
      _9_SM1_state_nxt_partial = _31_SSM_st_State3_SM1;
      outC->_L2_State3_SM1 = kcg_false;
      _8_abnormal_partial = outC->_L2_State3_SM1;
      outC->abnormal = _8_abnormal_partial;
      outC->SM1_state_nxt = _9_SM1_state_nxt_partial;
      break;
    case SSM_st_abnormal_SM1 :
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_abnormal_SM1;
      outC->_L2_abnormal_SM1 = kcg_true;
      _4_abnormal_partial = outC->_L2_abnormal_SM1;
      outC->abnormal = _4_abnormal_partial;
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case SSM_st_nomal_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_nomal_SM1;
      outC->_L2_nomal_SM1 = kcg_false;
      abnormal_partial = outC->_L2_nomal_SM1;
      outC->abnormal = abnormal_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State6_SM1 :
      outC->SM1_reset_nxt = _22_SM1_reset_nxt_partial;
      outC->SM1_fired = _23_SM1_fired_partial;
      break;
    case _29_SSM_st_State5_SM1 :
      outC->SM1_reset_nxt = _18_SM1_reset_nxt_partial;
      outC->SM1_fired = _19_SM1_fired_partial;
      break;
    case _30_SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case _31_SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _10_SM1_reset_nxt_partial;
      outC->SM1_fired = _11_SM1_fired_partial;
      break;
    case SSM_st_abnormal_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case SSM_st_nomal_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State6_SM1 :
      _37_SM1_reset_act_partial = tr_1_guard_State6_SM1;
      outC->SM1_reset_act = _37_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case _29_SSM_st_State5_SM1 :
      _34_SM1_reset_act_partial = tr_1_guard_State5_SM1;
      outC->SM1_reset_act = _34_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case _30_SSM_st_State4_SM1 :
      _31_SM1_reset_act_partial = tr_1_guard_State4_SM1;
      outC->SM1_reset_act = _31_SM1_reset_act_partial;
      outC->init2 = kcg_false;
      break;
    case _31_SSM_st_State3_SM1 :
      _28_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      outC->SM1_reset_act = _28_SM1_reset_act_partial;
      outC->init3 = kcg_false;
      break;
    case SSM_st_abnormal_SM1 :
      _25_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _25_SM1_reset_act_partial;
      break;
    case SSM_st_nomal_SM1 :
      if (tr_1_guard_nomal_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_nomal_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_nomal_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_4_guard_nomal_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Gear_motion_monitering_init(outC_Gear_motion_monitering *outC)
{
  outC->SM1_fired = _28_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _28_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_nomal_SM1;
  outC->SM1_state_sel = SSM_st_nomal_SM1;
  outC->_L2_State6_SM1 = kcg_true;
  outC->_L2_State5_SM1 = kcg_true;
  outC->_L2_State4_SM1 = kcg_true;
  outC->_L2_State3_SM1 = kcg_true;
  outC->_L2_abnormal_SM1 = kcg_true;
  outC->_L2_nomal_SM1 = kcg_true;
  outC->v4_times_20_int16 = kcg_lit_int16(0);
  outC->n_times_20_int16 = kcg_lit_int16(0);
  outC->c_times_20_int16 = kcg_true;
  outC->o_times_20_int16 = kcg_true;
  outC->v4_times_10_int16 = kcg_lit_int16(0);
  outC->n_times_10_int16 = kcg_lit_int16(0);
  outC->c_times_10_int16 = kcg_true;
  outC->o_times_10_int16 = kcg_true;
  outC->v4_times_21_int16 = kcg_lit_int16(0);
  outC->n_times_21_int16 = kcg_lit_int16(0);
  outC->c_times_21_int16 = kcg_true;
  outC->o_times_21_int16 = kcg_true;
  outC->v4_times_19_int16 = kcg_lit_int16(0);
  outC->n_times_19_int16 = kcg_lit_int16(0);
  outC->c_times_19_int16 = kcg_true;
  outC->o_times_19_int16 = kcg_true;
  outC->v3_times_20_int16 = kcg_lit_int16(0);
  outC->v3_times_10_int16 = kcg_lit_int16(0);
  outC->v3_times_21_int16 = kcg_lit_int16(0);
  outC->v3_times_19_int16 = kcg_lit_int16(0);
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->abnormal = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_nomal_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gear_motion_monitering_reset(outC_Gear_motion_monitering *outC)
{
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_nomal_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Gear_motion_monitering/
  @1: (times#19)
  @2: (times#21)
  @3: (times#10)
  @4: (times#20)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Gear_motion_monitering.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

