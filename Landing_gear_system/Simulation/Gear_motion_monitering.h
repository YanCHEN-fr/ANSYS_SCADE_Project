/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _Gear_motion_monitering_H_
#define _Gear_motion_monitering_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* abnormal/ */ abnormal;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_int16 /* @1/_/v3/ */ v3_times_19_int16;
  kcg_int16 /* @2/_/v3/ */ v3_times_21_int16;
  kcg_int16 /* @3/_/v3/ */ v3_times_10_int16;
  kcg_int16 /* @4/_/v3/ */ v3_times_20_int16;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/_/o/ */ o_times_19_int16;
  kcg_bool /* @1/_/c/ */ c_times_19_int16;
  kcg_int16 /* @1/_/n/ */ n_times_19_int16;
  kcg_int16 /* @1/_/v4/ */ v4_times_19_int16;
  kcg_bool /* @2/_/o/ */ o_times_21_int16;
  kcg_bool /* @2/_/c/ */ c_times_21_int16;
  kcg_int16 /* @2/_/n/ */ n_times_21_int16;
  kcg_int16 /* @2/_/v4/ */ v4_times_21_int16;
  kcg_bool /* @3/_/o/ */ o_times_10_int16;
  kcg_bool /* @3/_/c/ */ c_times_10_int16;
  kcg_int16 /* @3/_/n/ */ n_times_10_int16;
  kcg_int16 /* @3/_/v4/ */ v4_times_10_int16;
  kcg_bool /* @4/_/o/ */ o_times_20_int16;
  kcg_bool /* @4/_/c/ */ c_times_20_int16;
  kcg_int16 /* @4/_/n/ */ n_times_20_int16;
  kcg_int16 /* @4/_/v4/ */ v4_times_20_int16;
  kcg_bool /* SM1:nomal:_L2/ */ _L2_nomal_SM1;
  kcg_bool /* SM1:abnormal:_L2/ */ _L2_abnormal_SM1;
  kcg_bool /* SM1:State3:_L2/ */ _L2_State3_SM1;
  kcg_bool /* SM1:State4:_L2/ */ _L2_State4_SM1;
  kcg_bool /* SM1:State5:_L2/ */ _L2_State5_SM1;
  kcg_bool /* SM1:State6:_L2/ */ _L2_State6_SM1;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_Gear_motion_monitering;

/* ===========  node initialization and cycle functions  =========== */
/* Gear_motion_monitering/ */
extern void Gear_motion_monitering(
  /* gear_retracted/ */
  array_bool_3 *gear_retracted,
  /* retract_EV/ */
  kcg_bool retract_EV,
  /* duration1/ */
  kcg_int16 duration1,
  /* duration2/ */
  kcg_int16 duration2,
  /* gear_extended/ */
  array_bool_3 *gear_extended,
  /* extend_EV/ */
  kcg_bool extend_EV,
  outC_Gear_motion_monitering *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Gear_motion_monitering_reset(outC_Gear_motion_monitering *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Gear_motion_monitering_init(outC_Gear_motion_monitering *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Gear_motion_monitering/
  @1: (times#19)
  @2: (times#21)
  @3: (times#10)
  @4: (times#20)
*/

#endif /* _Gear_motion_monitering_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Gear_motion_monitering.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

