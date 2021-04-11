/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */
#ifndef _ThresholdDetector_H_
#define _ThresholdDetector_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* over/ */ over;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int8 /* _L1/ */ _L1;
  kcg_int8 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_ThresholdDetector;

/* ===========  node initialization and cycle functions  =========== */
/* ThresholdDetector/ */
extern void ThresholdDetector(
  /* measure/ */
  kcg_int8 measure,
  /* Threshold/ */
  kcg_int8 Threshold,
  outC_ThresholdDetector *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ThresholdDetector_reset(outC_ThresholdDetector *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ThresholdDetector_init(outC_ThresholdDetector *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ThresholdDetector_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** ThresholdDetector.h
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

