/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/statemachine/Simulation/config.txt
** Generation date: 2021-02-15T23:13:17
*************************************************************$ */
#ifndef _voteur2_H_
#define _voteur2_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { array_bool_3 /* X/ */ X; } inC_voteur2;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* error/ */ error;
  kcg_bool /* Y/ */ Y;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:Initial:_L2/ */ _L2_Initial_SM1;
  kcg_bool /* SM1:Initial:_L1/ */ _L1_Initial_SM1;
  kcg_bool /* SM1:X1:_L2/ */ _L2_X1_SM1;
  kcg_bool /* SM1:X1:_L1/ */ _L1_X1_SM1;
  kcg_bool /* SM1:X3:_L2/ */ _L2_X3_SM1;
  kcg_bool /* SM1:X3:_L1/ */ _L1_X3_SM1;
  kcg_bool /* SM1:X2:_L2/ */ _L2_X2_SM1;
  kcg_bool /* SM1:X2:_L1/ */ _L1_X2_SM1;
  kcg_bool /* SM1:X1_2:_L2/ */ _L2_X1_2_SM1;
  kcg_bool /* SM1:X1_2:_L1/ */ _L1_X1_2_SM1;
  kcg_bool /* SM1:error:_L1/ */ _L1_error_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_voteur2;

/* ===========  node initialization and cycle functions  =========== */
/* voteur2/ */
extern void voteur2(inC_voteur2 *inC, outC_voteur2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void voteur2_reset(outC_voteur2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void voteur2_init(outC_voteur2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _voteur2_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** voteur2.h
** Generation date: 2021-02-15T23:13:17
*************************************************************$ */

