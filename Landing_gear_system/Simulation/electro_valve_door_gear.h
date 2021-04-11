/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _electro_valve_door_gear_H_
#define _electro_valve_door_gear_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* status/ */ status;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_size /* @1/_/v3/ */ v3_times_15_size;
  kcg_size /* @2/_/v3/ */ v3_times_14_size;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_15_size;
  kcg_bool /* @1/_/c/ */ c_times_15_size;
  kcg_size /* @1/_/n/ */ n_times_15_size;
  kcg_size /* @1/_/v4/ */ v4_times_15_size;
  kcg_bool /* @2/_/o/ */ o_times_14_size;
  kcg_bool /* @2/_/c/ */ c_times_14_size;
  kcg_size /* @2/_/n/ */ n_times_14_size;
  kcg_size /* @2/_/v4/ */ v4_times_14_size;
  kcg_bool /* SM1:DooNotopen:_L1/ */ _L1_DooNotopen_SM1;
  kcg_bool /* SM1:DoorOpen:_L1/ */ _L1_DoorOpen_SM1;
  kcg_bool /* SM1:InteOpen2Not:_L2/ */ _L2_InteOpen2Not_SM1;
  kcg_bool /* SM1:InterNot2Open:_L1/ */ _L1_InterNot2Open_SM1;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_electro_valve_door_gear;

/* ===========  node initialization and cycle functions  =========== */
/* electro_valve_door_gear/ */
extern void electro_valve_door_gear(
  /* analogical_switch/ */
  kcg_bool analogical_switch,
  /* E/ */
  kcg_bool E,
  outC_electro_valve_door_gear *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void electro_valve_door_gear_reset(outC_electro_valve_door_gear *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void electro_valve_door_gear_init(outC_electro_valve_door_gear *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: electro_valve_door_gear/
  @1: (times#15)
  @2: (times#14)
*/

#endif /* _electro_valve_door_gear_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** electro_valve_door_gear.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

