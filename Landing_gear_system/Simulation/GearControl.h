/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _GearControl_H_
#define _GearControl_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_3 /* gear_extended/ */ gear_extended;
  array_bool_3 /* gear_retracted/ */ gear_retracted;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_int16 /* @1/_/v3/ */ v3_times_2_int16;
  kcg_int16 /* @2/_/v3/ */ v3_times_9_int16;
  kcg_int16 /* @3/_/v3/ */ v3_times_12_int16;
  kcg_int16 /* @4/_/v3/ */ v3_times_14_int16;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_2_int16;
  kcg_bool /* @1/_/c/ */ c_times_2_int16;
  kcg_int16 /* @1/_/n/ */ n_times_2_int16;
  kcg_int16 /* @1/_/v4/ */ v4_times_2_int16;
  kcg_bool /* @2/_/o/ */ o_times_9_int16;
  kcg_bool /* @2/_/c/ */ c_times_9_int16;
  kcg_int16 /* @2/_/n/ */ n_times_9_int16;
  kcg_int16 /* @2/_/v4/ */ v4_times_9_int16;
  kcg_bool /* @3/_/o/ */ o_times_12_int16;
  kcg_bool /* @3/_/c/ */ c_times_12_int16;
  kcg_int16 /* @3/_/n/ */ n_times_12_int16;
  kcg_int16 /* @3/_/v4/ */ v4_times_12_int16;
  kcg_bool /* @4/_/o/ */ o_times_14_int16;
  kcg_bool /* @4/_/c/ */ c_times_14_int16;
  kcg_int16 /* @4/_/n/ */ n_times_14_int16;
  kcg_int16 /* @4/_/v4/ */ v4_times_14_int16;
  array_bool_3 /* SM1:down:_L3/ */ _L3_down_SM1;
  array_bool_3 /* SM1:down:_L1/ */ _L1_down_SM1;
  array_bool_3 /* SM1:gear_retraction:_L2/ */ _L2_gear_retraction_SM1;
  array_bool_3 /* SM1:gear_retraction:_L1/ */ _L1_gear_retraction_SM1;
  array_bool_3 /* SM1:up:_L2/ */ _L2_up_SM1;
  array_bool_3 /* SM1:up:_L1/ */ _L1_up_SM1;
  array_bool_3 /* SM1:start_retract:_L2/ */ _L2_start_retract_SM1;
  array_bool_3 /* SM1:start_retract:_L1/ */ _L1_start_retract_SM1;
  array_bool_3 /* SM1:start_outgoing:_L2/ */ _L2_start_outgoing_SM1;
  array_bool_3 /* SM1:start_outgoing:_L1/ */ _L1_start_outgoing_SM1;
  array_bool_3 /* SM1:gear_outgoing:_L2/ */ _L2_gear_outgoing_SM1;
  array_bool_3 /* SM1:gear_outgoing:_L1/ */ _L1_gear_outgoing_SM1;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_GearControl;

/* ===========  node initialization and cycle functions  =========== */
/* GearControl/ */
extern void GearControl(
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
  outC_GearControl *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GearControl_reset(outC_GearControl *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GearControl_init(outC_GearControl *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: GearControl/
  @1: (times#2)
  @2: (times#9)
  @3: (times#12)
  @4: (times#14)
*/

#endif /* _GearControl_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** GearControl.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

