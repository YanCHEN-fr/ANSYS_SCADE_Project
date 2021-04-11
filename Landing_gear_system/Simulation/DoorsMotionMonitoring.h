/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _DoorsMotionMonitoring_H_
#define _DoorsMotionMonitoring_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* doors_anomaly/ */ doors_anomaly;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_int16 /* @1/_/v3/ */ v3_times_39_int16;
  kcg_int16 /* @2/_/v3/ */ v3_times_40_int16;
  kcg_int16 /* @3/_/v3/ */ v3_times_37_int16;
  kcg_int16 /* @4/_/v3/ */ v3_times_36_int16;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_39_int16;
  kcg_bool /* @1/_/c/ */ c_times_39_int16;
  kcg_int16 /* @1/_/n/ */ n_times_39_int16;
  kcg_int16 /* @1/_/v4/ */ v4_times_39_int16;
  kcg_bool /* @2/_/o/ */ o_times_40_int16;
  kcg_bool /* @2/_/c/ */ c_times_40_int16;
  kcg_int16 /* @2/_/n/ */ n_times_40_int16;
  kcg_int16 /* @2/_/v4/ */ v4_times_40_int16;
  kcg_bool /* @3/_/o/ */ o_times_37_int16;
  kcg_bool /* @3/_/c/ */ c_times_37_int16;
  kcg_int16 /* @3/_/n/ */ n_times_37_int16;
  kcg_int16 /* @3/_/v4/ */ v4_times_37_int16;
  kcg_bool /* @4/_/o/ */ o_times_36_int16;
  kcg_bool /* @4/_/c/ */ c_times_36_int16;
  kcg_int16 /* @4/_/n/ */ n_times_36_int16;
  kcg_int16 /* @4/_/v4/ */ v4_times_36_int16;
  kcg_bool /* SM1:normal:_L1/ */ _L1_normal_SM1;
  kcg_bool /* SM1:openEV:_L1/ */ _L1_openEV_SM1;
  kcg_bool /* SM1:closeEV:_L1/ */ _L1_closeEV_SM1;
  kcg_bool /* SM1:error:_L1/ */ _L1_error_SM1;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_DoorsMotionMonitoring;

/* ===========  node initialization and cycle functions  =========== */
/* DoorsMotionMonitoring/ */
extern void DoorsMotionMonitoring(
  /* door_closed/ */
  array_bool_3 *door_closed,
  /* door_open/ */
  array_bool_3 *door_open,
  /* anomaly_time/ */
  kcg_int16 anomaly_time,
  /* close_EV/ */
  kcg_bool close_EV,
  /* open_EV/ */
  kcg_bool open_EV,
  outC_DoorsMotionMonitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DoorsMotionMonitoring_reset(outC_DoorsMotionMonitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DoorsMotionMonitoring_init(outC_DoorsMotionMonitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: DoorsMotionMonitoring/
  @1: (times#39)
  @2: (times#40)
  @3: (times#37)
  @4: (times#36)
*/

#endif /* _DoorsMotionMonitoring_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DoorsMotionMonitoring.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

