/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config C:/Users/Administrator/Desktop/ROB301/TP1/comptor/Simulation/config.txt
** Generation date: 2021-02-08T22:52:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compter.h"

/* compter/ */
void compter(inC_compter *inC, outC_compter *outC)
{
  /* Input3/ */
  kcg_int8 last_Input3;
  /* Input2/ */
  kcg_int8 last_Input2;

  last_Input2 = outC->mem_Input2;
  outC->mem_Input2 = inC->Input2;
  last_Input3 = outC->mem_Input3;
  outC->mem_Input3 = inC->Input3;
  /* _L8= */
  if (outC->init) {
    outC->_L8 = kcg_lit_int8(0);
  }
  else {
    outC->_L8 = outC->_L7;
  }
  outC->_L6 = inC->Input3;
  outC->_L4 = outC->_L6;
  outC->_L5 = inC->Input2;
  outC->_L3 = outC->_L5;
  outC->_L1 = inC->Input1;
  /* _L2= */
  if (outC->_L1) {
    outC->_L2 = outC->_L3;
  }
  else {
    outC->_L2 = outC->_L4;
  }
  outC->_L7 = outC->_L2 + outC->_L8;
  outC->Output1 = outC->_L7;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void compter_init(outC_compter *outC)
{
  outC->_L8 = kcg_lit_int8(0);
  outC->_L6 = kcg_lit_int8(0);
  outC->_L5 = kcg_lit_int8(0);
  outC->_L4 = kcg_lit_int8(0);
  outC->_L3 = kcg_lit_int8(0);
  outC->_L2 = kcg_lit_int8(0);
  outC->_L1 = kcg_true;
  outC->_L7 = kcg_lit_int8(0);
  outC->init = kcg_true;
  outC->Output1 = kcg_lit_int8(0);
  outC->mem_Input3 = kcg_lit_int8(0);
  outC->mem_Input2 = kcg_lit_int8(1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void compter_reset(outC_compter *outC)
{
  outC->init = kcg_true;
  outC->mem_Input3 = kcg_lit_int8(0);
  outC->mem_Input2 = kcg_lit_int8(1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** compter.c
** Generation date: 2021-02-08T22:52:56
*************************************************************$ */

