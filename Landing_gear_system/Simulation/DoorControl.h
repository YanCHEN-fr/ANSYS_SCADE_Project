/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _DoorControl_H_
#define _DoorControl_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_3 /* door_closed/ */ door_closed;
  array_bool_3 /* door_open/ */ door_open;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_int16 /* @1/_/v3/ */ v3_times_4_int16;
  kcg_int16 /* @2/_/v3/ */ v3_times_17_int16;
  kcg_int16 /* @3/_/v3/ */ v3_times_19_int16;
  _8_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _8_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _8_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_4_int16;
  kcg_bool /* @1/_/c/ */ c_times_4_int16;
  kcg_int16 /* @1/_/n/ */ n_times_4_int16;
  kcg_int16 /* @1/_/v4/ */ v4_times_4_int16;
  kcg_bool /* @2/_/o/ */ o_times_17_int16;
  kcg_bool /* @2/_/c/ */ c_times_17_int16;
  kcg_int16 /* @2/_/n/ */ n_times_17_int16;
  kcg_int16 /* @2/_/v4/ */ v4_times_17_int16;
  kcg_bool /* @3/_/o/ */ o_times_19_int16;
  kcg_bool /* @3/_/c/ */ c_times_19_int16;
  kcg_int16 /* @3/_/n/ */ n_times_19_int16;
  kcg_int16 /* @3/_/v4/ */ v4_times_19_int16;
  array_bool_3 /* SM1:open_door:_L3/ */ _L3_open_door_SM1;
  array_bool_3 /* SM1:open_door:_L1/ */ _L1_open_door_SM1;
  array_bool_3 /* SM1:close_door:_L2/ */ _L2_close_door_SM1;
  array_bool_3 /* SM1:close_door:_L1/ */ _L1_close_door_SM1;
  array_bool_3 /* SM1:Intermediate1:_L1/ */ _L1_Intermediate1_SM1;
  array_bool_3 /* SM1:State5:_L3/ */ _L3_State5_SM1;
  array_bool_3 /* SM1:State5:_L2/ */ _L2_State5_SM1;
  array_bool_3 /* SM1:inter_close_door:_L3/ */ _L3_inter_close_door_SM1;
  array_bool_3 /* SM1:inter_close_door:_L1/ */ _L1_inter_close_door_SM1;
  _9_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _9_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_DoorControl;

/* ===========  node initialization and cycle functions  =========== */
/* DoorControl/ */
extern void DoorControl(
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
  outC_DoorControl *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DoorControl_reset(outC_DoorControl *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DoorControl_init(outC_DoorControl *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: DoorControl/
  @1: (times#4)
  @2: (times#17)
  @3: (times#19)
*/

#endif /* _DoorControl_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DoorControl.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

