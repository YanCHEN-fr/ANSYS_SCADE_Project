/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "electro_valve_door_gear.h"

/* electro_valve_door_gear/ */
void electro_valve_door_gear(
  /* analogical_switch/ */
  kcg_bool analogical_switch,
  /* E/ */
  kcg_bool E,
  outC_electro_valve_door_gear *outC)
{
  /* status/ */
  kcg_bool status_partial;
  /* SM1: */
  _10_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 SM1_fired_partial;
  /* status/ */
  kcg_bool _1_status_partial;
  /* SM1: */
  _10_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _4_SM1_fired_partial;
  /* status/ */
  kcg_bool _5_status_partial;
  /* SM1: */
  _10_SSM_ST_SM1 _6_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _8_SM1_fired_partial;
  /* status/ */
  kcg_bool _9_status_partial;
  /* SM1: */
  _10_SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _12_SM1_fired_partial;
  /* SM1: */
  _10_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:DooNotopen:<1> */
  kcg_bool tr_1_guard_DooNotopen_SM1;
  /* SM1: */
  _10_SSM_ST_SM1 _13_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _15_SM1_fired_strong_partial;
  /* SM1:DoorOpen:<1> */
  kcg_bool tr_1_guard_DoorOpen_SM1;
  /* SM1: */
  _10_SSM_ST_SM1 _16_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _18_SM1_fired_strong_partial;
  /* SM1:InteOpen2Not:<1> */
  kcg_bool tr_1_guard_InteOpen2Not_SM1;
  /* SM1: */
  _10_SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:InterNot2Open:<1> */
  kcg_bool tr_1_guard_InterNot2Open_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_InteOpen2Not_SM1 :
      outC->n_times_15_size = 36;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_InterNot2Open_SM1 :
      outC->n_times_14_size = 10;
      if (SM1_reset_prv) {
        outC->init1 = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init1) {
        outC->v4_times_14_size = outC->n_times_14_size;
      }
      else {
        outC->v4_times_14_size = outC->v3_times_14_size;
      }
      outC->c_times_14_size = kcg_true;
      /* @2/_/v3= */
      if (outC->v4_times_14_size < 0) {
        outC->v3_times_14_size = outC->v4_times_14_size;
      }
      else /* @2/_/v3= */
      if (outC->c_times_14_size) {
        outC->v3_times_14_size = outC->v4_times_14_size - 1;
      }
      else {
        outC->v3_times_14_size = outC->v4_times_14_size;
      }
      outC->o_times_14_size = outC->c_times_14_size & (outC->v3_times_14_size == 0);
      tr_1_guard_InterNot2Open_SM1 = outC->o_times_14_size;
      if (tr_1_guard_InterNot2Open_SM1) {
        _19_SM1_state_act_partial = SSM_st_DoorOpen_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_InterNot2Open_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_InterNot2Open_SM1) {
        _21_SM1_fired_strong_partial =
          SSM_TR_InterNot2Open_DoorOpen_1_InterNot2Open_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = _20_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case SSM_st_InteOpen2Not_SM1 :
      if (SM1_reset_prv) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        outC->v4_times_15_size = outC->n_times_15_size;
      }
      else {
        outC->v4_times_15_size = outC->v3_times_15_size;
      }
      outC->c_times_15_size = kcg_true;
      /* @1/_/v3= */
      if (outC->v4_times_15_size < 0) {
        outC->v3_times_15_size = outC->v4_times_15_size;
      }
      else /* @1/_/v3= */
      if (outC->c_times_15_size) {
        outC->v3_times_15_size = outC->v4_times_15_size - 1;
      }
      else {
        outC->v3_times_15_size = outC->v4_times_15_size;
      }
      outC->o_times_15_size = outC->c_times_15_size & (outC->v3_times_15_size == 0);
      tr_1_guard_InteOpen2Not_SM1 = outC->o_times_15_size;
      if (tr_1_guard_InteOpen2Not_SM1) {
        _16_SM1_state_act_partial = SSM_st_DooNotopen_SM1;
      }
      else {
        _16_SM1_state_act_partial = SSM_st_InteOpen2Not_SM1;
      }
      outC->SM1_state_act = _16_SM1_state_act_partial;
      if (tr_1_guard_InteOpen2Not_SM1) {
        _18_SM1_fired_strong_partial =
          SSM_TR_InteOpen2Not_DooNotopen_1_InteOpen2Not_SM1;
      }
      else {
        _18_SM1_fired_strong_partial = _20_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _18_SM1_fired_strong_partial;
      break;
    case SSM_st_DoorOpen_SM1 :
      tr_1_guard_DoorOpen_SM1 = (!E) | (!analogical_switch);
      if (tr_1_guard_DoorOpen_SM1) {
        _13_SM1_state_act_partial = SSM_st_InteOpen2Not_SM1;
      }
      else {
        _13_SM1_state_act_partial = SSM_st_DoorOpen_SM1;
      }
      outC->SM1_state_act = _13_SM1_state_act_partial;
      if (tr_1_guard_DoorOpen_SM1) {
        _15_SM1_fired_strong_partial = SSM_TR_DoorOpen_InteOpen2Not_1_DoorOpen_SM1;
      }
      else {
        _15_SM1_fired_strong_partial = _20_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _15_SM1_fired_strong_partial;
      break;
    case SSM_st_DooNotopen_SM1 :
      tr_1_guard_DooNotopen_SM1 = E & analogical_switch;
      if (tr_1_guard_DooNotopen_SM1) {
        SM1_state_act_partial = SSM_st_InterNot2Open_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_DooNotopen_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_DooNotopen_SM1) {
        SM1_fired_strong_partial = SSM_TR_DooNotopen_InterNot2Open_1_DooNotopen_SM1;
      }
      else {
        SM1_fired_strong_partial = _20_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_InterNot2Open_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_InterNot2Open_SM1;
      outC->_L1_InterNot2Open_SM1 = kcg_false;
      _9_status_partial = outC->_L1_InterNot2Open_SM1;
      outC->status = _9_status_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_InteOpen2Not_SM1 :
      _8_SM1_fired_partial = outC->SM1_fired_strong;
      _7_SM1_reset_nxt_partial = kcg_false;
      _6_SM1_state_nxt_partial = SSM_st_InteOpen2Not_SM1;
      outC->_L2_InteOpen2Not_SM1 = kcg_true;
      _5_status_partial = outC->_L2_InteOpen2Not_SM1;
      outC->status = _5_status_partial;
      outC->SM1_state_nxt = _6_SM1_state_nxt_partial;
      break;
    case SSM_st_DoorOpen_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_DoorOpen_SM1;
      outC->_L1_DoorOpen_SM1 = kcg_true;
      _1_status_partial = outC->_L1_DoorOpen_SM1;
      outC->status = _1_status_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_DooNotopen_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_DooNotopen_SM1;
      outC->_L1_DooNotopen_SM1 = kcg_false;
      status_partial = outC->_L1_DooNotopen_SM1;
      outC->status = status_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_InterNot2Open_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_InteOpen2Not_SM1 :
      outC->SM1_reset_nxt = _7_SM1_reset_nxt_partial;
      outC->SM1_fired = _8_SM1_fired_partial;
      break;
    case SSM_st_DoorOpen_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_DooNotopen_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_InterNot2Open_SM1 :
      _20_SM1_reset_act_partial = tr_1_guard_InterNot2Open_SM1;
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_InteOpen2Not_SM1 :
      _17_SM1_reset_act_partial = tr_1_guard_InteOpen2Not_SM1;
      outC->SM1_reset_act = _17_SM1_reset_act_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_DoorOpen_SM1 :
      _14_SM1_reset_act_partial = tr_1_guard_DoorOpen_SM1;
      outC->SM1_reset_act = _14_SM1_reset_act_partial;
      break;
    case SSM_st_DooNotopen_SM1 :
      SM1_reset_act_partial = tr_1_guard_DooNotopen_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void electro_valve_door_gear_init(outC_electro_valve_door_gear *outC)
{
  outC->SM1_fired = _20_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _20_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_DooNotopen_SM1;
  outC->SM1_state_sel = SSM_st_DooNotopen_SM1;
  outC->_L1_InterNot2Open_SM1 = kcg_true;
  outC->_L2_InteOpen2Not_SM1 = kcg_true;
  outC->_L1_DoorOpen_SM1 = kcg_true;
  outC->_L1_DooNotopen_SM1 = kcg_true;
  outC->v4_times_14_size = 0;
  outC->n_times_14_size = 0;
  outC->c_times_14_size = kcg_true;
  outC->o_times_14_size = kcg_true;
  outC->v4_times_15_size = 0;
  outC->n_times_15_size = 0;
  outC->c_times_15_size = kcg_true;
  outC->o_times_15_size = kcg_true;
  outC->v3_times_14_size = 0;
  outC->v3_times_15_size = 0;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->status = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_DooNotopen_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void electro_valve_door_gear_reset(outC_electro_valve_door_gear *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_DooNotopen_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: electro_valve_door_gear/
  @2: (times#14)
  @1: (times#15)
*/

/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** electro_valve_door_gear.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

