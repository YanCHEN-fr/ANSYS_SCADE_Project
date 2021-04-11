/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _AnalogicalSwitchMonitoring_H_
#define _AnalogicalSwitchMonitoring_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* switch_anomal/ */ switch_anomal;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int16 /* @1/_/v3/ */ v3_times_10_int16;
  kcg_int16 /* @2/_/v3/ */ v3_times_11_int16;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_10_int16;
  kcg_bool /* @1/_/c/ */ c_times_10_int16;
  kcg_int16 /* @1/_/n/ */ n_times_10_int16;
  kcg_int16 /* @1/_/v4/ */ v4_times_10_int16;
  kcg_bool /* @2/_/o/ */ o_times_11_int16;
  kcg_bool /* @2/_/c/ */ c_times_11_int16;
  kcg_int16 /* @2/_/n/ */ n_times_11_int16;
  kcg_int16 /* @2/_/v4/ */ v4_times_11_int16;
  kcg_bool /* SM1:normal:_L1/ */ _L1_normal_SM1;
  kcg_bool /* SM1:invalid:_L1/ */ _L1_invalid_SM1;
  kcg_bool /* SM1:State3:_L1/ */ _L1_State3_SM1;
  kcg_bool /* SM1:State4:_L1/ */ _L1_State4_SM1;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_AnalogicalSwitchMonitoring;

/* ===========  node initialization and cycle functions  =========== */
/* AnalogicalSwitchMonitoring/ */
extern void AnalogicalSwitchMonitoring(
  /* trigger/ */
  kcg_bool trigger,
  /* analogical_switch/ */
  kcg_bool analogical_switch,
  /* open_time/ */
  kcg_int16 open_time,
  /* close_time/ */
  kcg_int16 close_time,
  outC_AnalogicalSwitchMonitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AnalogicalSwitchMonitoring_reset(
  outC_AnalogicalSwitchMonitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AnalogicalSwitchMonitoring_init(
  outC_AnalogicalSwitchMonitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AnalogicalSwitchMonitoring/
  @1: (times#10)
  @2: (times#11)
*/

#endif /* _AnalogicalSwitchMonitoring_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** AnalogicalSwitchMonitoring.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

