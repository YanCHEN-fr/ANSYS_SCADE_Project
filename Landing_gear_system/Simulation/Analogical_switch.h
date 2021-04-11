/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _Analogical_switch_H_
#define _Analogical_switch_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_bool_3 /* analogical_switch/ */ analogical_switch;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_size /* @1/_/v3/ */ v3_times_12_size;
  kcg_size /* @2/_/v3/ */ v3_times_13_size;
  kcg_size /* @3/_/v3/ */ v3_times_11_size;
  _14_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  _14_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _14_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_12_size;
  kcg_bool /* @1/_/c/ */ c_times_12_size;
  kcg_size /* @1/_/n/ */ n_times_12_size;
  kcg_size /* @1/_/v4/ */ v4_times_12_size;
  kcg_bool /* @2/_/o/ */ o_times_13_size;
  kcg_bool /* @2/_/c/ */ c_times_13_size;
  kcg_size /* @2/_/n/ */ n_times_13_size;
  kcg_size /* @2/_/v4/ */ v4_times_13_size;
  kcg_bool /* @3/_/o/ */ o_times_11_size;
  kcg_bool /* @3/_/c/ */ c_times_11_size;
  kcg_size /* @3/_/n/ */ n_times_11_size;
  kcg_size /* @3/_/v4/ */ v4_times_11_size;
  array_bool_3 /* SM1:switch_open:_L4/ */ _L4_switch_open_SM1;
  array_bool_3 /* SM1:switch_close:_L1/ */ _L1_switch_close_SM1;
  array_bool_3 /* SM1:State3:_L1/ */ _L1_State3_SM1;
  array_bool_3 /* SM1:State4:_L1/ */ _L1_State4_SM1;
  _15_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _15_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Analogical_switch;

/* ===========  node initialization and cycle functions  =========== */
/* Analogical_switch/ */
extern void Analogical_switch(
  /* general_EV/ */
  kcg_bool general_EV,
  outC_Analogical_switch *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Analogical_switch_reset(outC_Analogical_switch *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Analogical_switch_init(outC_Analogical_switch *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Analogical_switch/
  @1: (times#12)
  @2: (times#13)
  @3: (times#11)
*/

#endif /* _Analogical_switch_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Analogical_switch.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

