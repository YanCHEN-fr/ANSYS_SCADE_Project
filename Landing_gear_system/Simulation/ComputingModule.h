/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _ComputingModule_H_
#define _ComputingModule_H_

#include "kcg_types.h"
#include "handle_node.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* general_EV/ */ general_EV;
  kcg_bool /* close_EV/ */ close_EV;
  kcg_bool /* open_EV/ */ open_EV;
  kcg_bool /* retract_EV/ */ retract_EV;
  kcg_bool /* extend_EV/ */ extend_EV;
  kcg_bool /* anomaly/ */ anomaly;
  kcg_bool /* gears_maneuvering/ */ gears_maneuvering;
  kcg_bool /* gears_locked_down/ */ gears_locked_down;
  kcg_bool /* up2down/ */ up2down;
  kcg_bool /* down2up/ */ down2up;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_size /* @1/_/v3/ */ v3_times_1_size;
  _16_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_handle_node /* _L4=(handle_node#2)/ */ Context_handle_node_2;
  /* ------------------ clocks of observable data -------------------- */
  _16_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _16_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_size;
  kcg_bool /* @1/_/c/ */ c_times_1_size;
  kcg_size /* @1/_/n/ */ n_times_1_size;
  kcg_size /* @1/_/v4/ */ v4_times_1_size;
  kcg_bool /* SM1:Init:_L2/ */ _L2_Init_SM1;
  kcg_bool /* SM1:Init:_L1/ */ _L1_Init_SM1;
  kcg_bool /* SM1:Extend:_L3/ */ _L3_Extend_SM1;
  kcg_bool /* SM1:Extend:_L2/ */ _L2_Extend_SM1;
  kcg_bool /* SM1:Extend:_L1/ */ _L1_Extend_SM1;
  kcg_bool /* SM1:Retract:_L3/ */ _L3_Retract_SM1;
  kcg_bool /* SM1:Retract:_L2/ */ _L2_Retract_SM1;
  kcg_bool /* SM1:Retract:_L1/ */ _L1_Retract_SM1;
  kcg_bool /* SM1:GearRetractDone:_L3/ */ _L3_GearRetractDone_SM1;
  kcg_bool /* SM1:GearRetractDone:_L2/ */ _L2_GearRetractDone_SM1;
  kcg_bool /* SM1:GearRetractDone:_L1/ */ _L1_GearRetractDone_SM1;
  kcg_bool /* SM1:CloseDoor1:_L3/ */ _L3_CloseDoor1_SM1;
  kcg_bool /* SM1:CloseDoor1:_L2/ */ _L2_CloseDoor1_SM1;
  kcg_bool /* SM1:CloseDoor1:_L1/ */ _L1_CloseDoor1_SM1;
  kcg_bool /* SM1:OpenSwitchDoorValve:_L3/ */ _L3_OpenSwitchDoorValve_SM1;
  kcg_bool /* SM1:OpenSwitchDoorValve:_L2/ */ _L2_OpenSwitchDoorValve_SM1;
  kcg_bool /* SM1:OpenSwitchDoorValve:_L1/ */ _L1_OpenSwitchDoorValve_SM1;
  kcg_bool /* SM1:GearsLockedDown:_L3/ */ _L3_GearsLockedDown_SM1;
  kcg_bool /* SM1:GearsLockedDown:_L2/ */ _L2_GearsLockedDown_SM1;
  kcg_bool /* SM1:GearsLockedDown:_L1/ */ _L1_GearsLockedDown_SM1;
  _17_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _17_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
} outC_ComputingModule;

/* ===========  node initialization and cycle functions  =========== */
/* ComputingModule/ */
extern void ComputingModule(
  /* door_open/ */
  kcg_bool door_open,
  /* door_closed/ */
  kcg_bool door_closed,
  /* gear_extended/ */
  kcg_bool gear_extended,
  /* gear_retracted/ */
  kcg_bool gear_retracted,
  /* handle/ */
  kcg_bool handle,
  /* anomal/ */
  kcg_bool anomal,
  outC_ComputingModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ComputingModule_reset(outC_ComputingModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ComputingModule_init(outC_ComputingModule *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ComputingModule/
  @1: (times#1)
*/

#endif /* _ComputingModule_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ComputingModule.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

