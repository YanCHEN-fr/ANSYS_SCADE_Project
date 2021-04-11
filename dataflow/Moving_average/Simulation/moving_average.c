/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/Moving_average/Simulation/config.txt
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "moving_average.h"

/* moving_average/ */
void moving_average(inC_moving_average *inC, outC_moving_average *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_float64 tmp;
  /* Input2/ */
  kcg_int8 last_Input2;

  last_Input2 = outC->mem_Input2;
  outC->mem_Input2 = inC->Input2;
  outC->_L8 = inC->Input2;
  outC->_L7 = /* _L7= */(kcg_float64) outC->_L8;
  /* _L2= */
  if (outC->init) {
    outC->_L2 = kcg_lit_float64(0.);
  }
  else {
    outC->_L2 = outC->_L1;
  }
  outC->_L1 = inC->Input1;
  tmp = kcg_lit_float64(0.);
  /* _L4= */
  if (outC->init) {
    /* _L4= */
    for (idx = 0; idx < 3; idx++) {
      outC->fby_3.items[idx] = tmp;
    }
    outC->fby_3.idx = 0;
  }
  outC->_L4 = outC->fby_3.items[outC->fby_3.idx];
  outC->fby_3.items[outC->fby_3.idx] = outC->_L1;
  outC->fby_3.idx = (outC->fby_3.idx + 1) % 3;
  /* _L3= */
  if (outC->init) {
    /* _L3= */
    for (idx1 = 0; idx1 < 2; idx1++) {
      outC->fby_2.items[idx1] = tmp;
    }
    outC->fby_2.idx = 0;
  }
  outC->_L3 = outC->fby_2.items[outC->fby_2.idx];
  outC->fby_2.items[outC->fby_2.idx] = outC->_L1;
  outC->fby_2.idx = (outC->fby_2.idx + 1) % 2;
  outC->_L5 = outC->_L2 + outC->_L3 + outC->_L4 + outC->_L1;
  outC->_L6 = outC->_L5 / outC->_L7;
  outC->Output1 = outC->_L6;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void moving_average_init(outC_moving_average *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L8 = kcg_lit_int8(0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->fby_2.idx = 0;
  for (idx = 0; idx < 2; idx++) {
    outC->fby_2.items[idx] = kcg_lit_float64(0.0);
  }
  outC->fby_3.idx = 0;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->fby_3.items[idx1] = kcg_lit_float64(0.0);
  }
  outC->Output1 = kcg_lit_float64(0.0);
  outC->mem_Input2 = kcg_lit_int8(4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void moving_average_reset(outC_moving_average *outC)
{
  outC->init = kcg_true;
  outC->mem_Input2 = kcg_lit_int8(4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** moving_average.c
** Generation date: 2021-02-08T22:35:50
*************************************************************$ */

