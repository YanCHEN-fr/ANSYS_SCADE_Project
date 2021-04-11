/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/comptor/Simulation/config.txt
** Generation date: 2021-02-08T22:52:56
*************************************************************$ */
#ifndef _compter_H_
#define _compter_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* Input1/ */ Input1;
  kcg_int8 /* Input2/ */ Input2;
  kcg_int8 /* Input3/ */ Input3;
} inC_compter;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* Input2/ */ mem_Input2;
  kcg_int8 /* Input3/ */ mem_Input3;
  kcg_bool init;
  kcg_int8 /* _L7/ */ _L7;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_int8 /* _L2/ */ _L2;
  kcg_int8 /* _L3/ */ _L3;
  kcg_int8 /* _L4/ */ _L4;
  kcg_int8 /* _L5/ */ _L5;
  kcg_int8 /* _L6/ */ _L6;
  kcg_int8 /* _L8/ */ _L8;
} outC_compter;

/* ===========  node initialization and cycle functions  =========== */
/* compter/ */
extern void compter(inC_compter *inC, outC_compter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void compter_reset(outC_compter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void compter_init(outC_compter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _compter_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** compter.h
** Generation date: 2021-02-08T22:52:56
*************************************************************$ */

