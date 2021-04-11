/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThresholdDetector.h"

/* ThresholdDetector/ */
void ThresholdDetector(
  /* measure/ */
  kcg_int8 measure,
  /* Threshold/ */
  kcg_int8 Threshold,
  outC_ThresholdDetector *outC)
{
  outC->_L2 = Threshold;
  outC->_L1 = measure;
  outC->_L3 = outC->_L1 > outC->_L2;
  outC->over = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ThresholdDetector_init(outC_ThresholdDetector *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int8(0);
  outC->_L1 = kcg_lit_int8(0);
  outC->over = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ThresholdDetector_reset(outC_ThresholdDetector *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** ThresholdDetector.c
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

