/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _handle_node_H_
#define _handle_node_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* down2up/ */ down2up;
  kcg_bool /* up2down/ */ up2down;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
} outC_handle_node;

/* ===========  node initialization and cycle functions  =========== */
/* handle_node/ */
extern void handle_node(/* handle/ */ kcg_bool handle, outC_handle_node *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handle_node_reset(outC_handle_node *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handle_node_init(outC_handle_node *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _handle_node_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** handle_node.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

