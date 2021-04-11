/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/Rising_falling_edge_detector/Simulation/config.txt
** Generation date: 2021-02-08T22:09:32
*************************************************************$ */
#ifndef _Rising_falling_edge_detec_H_
#define _Rising_falling_edge_detec_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_bool /* Input1/ */ Input1; } inC_Rising_falling_edge_detec;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
} outC_Rising_falling_edge_detec;

/* ===========  node initialization and cycle functions  =========== */
/* Rising_falling_edge_detection2/ */
extern void Rising_falling_edge_detec(
  inC_Rising_falling_edge_detec *inC,
  outC_Rising_falling_edge_detec *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Rising_falling_edge_detec_reset(
  outC_Rising_falling_edge_detec *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Rising_falling_edge_detec_init(
  outC_Rising_falling_edge_detec *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Rising_falling_edge_detec_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Rising_falling_edge_detec.h
** Generation date: 2021-02-08T22:09:32
*************************************************************$ */

