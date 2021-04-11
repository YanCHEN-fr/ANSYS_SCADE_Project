/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */
#ifndef _main_H_
#define _main_H_

#include "kcg_types.h"
#include "timedDevice.h"
#include "ThresholdDetector.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_int8 /* pressure/ */ pressure; } inC_main;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* alarm/ */ alarm;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_timedDevice /* _L3=(timedDevice#1)/ */ Context_timedDevice_1;
  outC_ThresholdDetector /* _L2=(ThresholdDetector#1)/ */ Context_ThresholdDetector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int8 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int8 /* _L4/ */ _L4;
  kcg_int8 /* _L5/ */ _L5;
} outC_main;

/* ===========  node initialization and cycle functions  =========== */
/* main/ */
extern void main(inC_main *inC, outC_main *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void main_reset(outC_main *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void main_init(outC_main *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _main_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** main.h
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

