/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/Moving_average/Simulation/config.txt
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */
#ifndef _moving_average_H_
#define _moving_average_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float64 /* Input1/ */ Input1;
  kcg_int8 /* Input2/ */ Input2;
} inC_moving_average;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_236 /* _L4= */ fby_3;
  struct_226 /* _L3= */ fby_2;
  kcg_int8 /* Input2/ */ mem_Input2;
  kcg_bool init;
  kcg_float64 /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_int8 /* _L8/ */ _L8;
} outC_moving_average;

/* ===========  node initialization and cycle functions  =========== */
/* moving_average/ */
extern void moving_average(inC_moving_average *inC, outC_moving_average *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void moving_average_reset(outC_moving_average *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void moving_average_init(outC_moving_average *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _moving_average_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** moving_average.h
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */

