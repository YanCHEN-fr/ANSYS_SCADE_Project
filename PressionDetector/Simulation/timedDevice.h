/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */
#ifndef _timedDevice_H_
#define _timedDevice_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* alarm/ */ alarm;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int8 /* @1/_/v3/ */ v3_times_1_int8;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_1_int8;
  kcg_bool /* @1/_/c/ */ c_times_1_int8;
  kcg_int8 /* @1/_/n/ */ n_times_1_int8;
  kcg_int8 /* @1/_/v4/ */ v4_times_1_int8;
  kcg_bool /* SM1:off:_L1/ */ _L1_off_SM1;
  kcg_bool /* SM1:on:_L1/ */ _L1_on_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_timedDevice;

/* ===========  node initialization and cycle functions  =========== */
/* timedDevice/ */
extern void timedDevice(
  /* order/ */
  kcg_bool order,
  /* duration/ */
  kcg_int8 duration,
  outC_timedDevice *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void timedDevice_reset(outC_timedDevice *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void timedDevice_init(outC_timedDevice *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: timedDevice/
  @1: (times#1)
*/

#endif /* _timedDevice_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** timedDevice.h
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

