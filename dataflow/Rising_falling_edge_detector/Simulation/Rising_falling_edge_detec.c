/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/Rising_falling_edge_detector/Simulation/config.txt
** Generation date: 2021-02-08T22:09:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Rising_falling_edge_detec.h"

/* Rising_falling_edge_detection2/ */
void Rising_falling_edge_detec(
  inC_Rising_falling_edge_detec *inC,
  outC_Rising_falling_edge_detec *outC)
{
  /* _L2= */
  if (outC->init) {
    outC->_L2 = kcg_false;
  }
  else {
    outC->_L2 = outC->_L1;
  }
  outC->_L1 = inC->Input1;
  outC->_L4 = outC->_L2 ^ outC->_L1;
  outC->Output1 = outC->_L4;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Rising_falling_edge_detec_init(outC_Rising_falling_edge_detec *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->Output1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Rising_falling_edge_detec_reset(outC_Rising_falling_edge_detec *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Rising_falling_edge_detec.c
** Generation date: 2021-02-08T22:09:32
*************************************************************$ */

