/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/PressionDetector/Simulation/config.txt
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "main.h"

/* main/ */
void main(inC_main *inC, outC_main *outC)
{
  outC->_L5 = kcg_lit_int8(5);
  outC->_L4 = kcg_lit_int8(10);
  outC->_L1 = inC->pressure;
  /* _L2=(ThresholdDetector#1)/ */
  ThresholdDetector(outC->_L1, outC->_L4, &outC->Context_ThresholdDetector_1);
  outC->_L2 = outC->Context_ThresholdDetector_1.over;
  /* _L3=(timedDevice#1)/ */
  timedDevice(outC->_L2, outC->_L5, &outC->Context_timedDevice_1);
  outC->_L3 = outC->Context_timedDevice_1.alarm;
  outC->alarm = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void main_init(outC_main *outC)
{
  outC->_L5 = kcg_lit_int8(0);
  outC->_L4 = kcg_lit_int8(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_int8(0);
  outC->alarm = kcg_true;
  /* _L3=(timedDevice#1)/ */ timedDevice_init(&outC->Context_timedDevice_1);
  /* _L2=(ThresholdDetector#1)/ */
  ThresholdDetector_init(&outC->Context_ThresholdDetector_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void main_reset(outC_main *outC)
{
  /* _L3=(timedDevice#1)/ */ timedDevice_reset(&outC->Context_timedDevice_1);
  /* _L2=(ThresholdDetector#1)/ */
  ThresholdDetector_reset(&outC->Context_ThresholdDetector_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** main.c
** Generation date: 2021-03-01T11:39:25
*************************************************************$ */

