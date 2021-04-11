/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handle_node.h"

/* handle_node/ */
void handle_node(/* handle/ */ kcg_bool handle, outC_handle_node *outC)
{
  /* _L2= */
  if (outC->init) {
    outC->_L2 = kcg_false;
  }
  else {
    outC->_L2 = outC->_L1;
  }
  outC->_L1 = handle;
  outC->_L3 = outC->_L1 ^ outC->_L2;
  outC->_L5 = outC->_L3 & outC->_L2;
  outC->up2down = outC->_L5;
  outC->_L4 = outC->_L1 & outC->_L3;
  outC->down2up = outC->_L4;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void handle_node_init(outC_handle_node *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->up2down = kcg_true;
  outC->down2up = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handle_node_reset(outC_handle_node *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** handle_node.c
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

