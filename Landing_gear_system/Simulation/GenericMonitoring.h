/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _GenericMonitoring_H_
#define _GenericMonitoring_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* anomal/ */ anomal;
  kcg_bool /* sensor_output/ */ sensor_output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _12_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _12_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:All:_L3/ */ _L3_All_SM1;
  kcg_bool /* SM1:All:_L2/ */ _L2_All_SM1;
  kcg_bool /* SM1:invalid0:_L5/ */ _L5_invalid0_SM1;
  kcg_bool /* SM1:invalid0:_L2/ */ _L2_invalid0_SM1;
  kcg_bool /* SM1:invalid1:_L5/ */ _L5_invalid1_SM1;
  kcg_bool /* SM1:invalid1:_L2/ */ _L2_invalid1_SM1;
  kcg_bool /* SM1:invalid2:_L7/ */ _L7_invalid2_SM1;
  kcg_bool /* SM1:invalid2:_L2/ */ _L2_invalid2_SM1;
  kcg_bool /* SM1:invalidAll:_L3/ */ _L3_invalidAll_SM1;
  kcg_bool /* SM1:invalidAll:_L2/ */ _L2_invalidAll_SM1;
  _12_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _13_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _13_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_GenericMonitoring;

/* ===========  node initialization and cycle functions  =========== */
/* GenericMonitoring/ */
extern void GenericMonitoring(
  /* sensor_input/ */
  array_bool_3 *sensor_input,
  outC_GenericMonitoring *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GenericMonitoring_reset(outC_GenericMonitoring *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GenericMonitoring_init(outC_GenericMonitoring *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GenericMonitoring_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** GenericMonitoring.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

