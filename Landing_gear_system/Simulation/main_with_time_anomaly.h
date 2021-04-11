/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */
#ifndef _main_with_time_anomaly_H_
#define _main_with_time_anomaly_H_

#include "kcg_types.h"
#include "Gear_motion_monitering.h"
#include "DoorsMotionMonitoring.h"
#include "AnalogicalSwitchMonitoring.h"
#include "GearControl.h"
#include "DoorControl.h"
#include "electro_valve_door_gear.h"
#include "GenericMonitoring.h"
#include "Analogical_switch.h"
#include "ComputingModule.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_bool /* handle/ */ handle; } inC_main_with_time_anomaly;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* global_anomaly/ */ global_anomaly;
  kcg_bool /* global_maneuvering/ */ global_maneuvering;
  kcg_bool /* global_locked_down/ */ global_locked_down;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L123/ */ _L123;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AnalogicalSwitchMonitoring /* _L128=(AnalogicalSwitchMonitoring#1)/ */ Context_AnalogicalSwitchMonitoring_1;
  outC_DoorsMotionMonitoring /* _L132=(DoorsMotionMonitoring#1)/ */ Context_DoorsMotionMonitoring_1;
  outC_Gear_motion_monitering /* _L136=(Gear_motion_monitering#1)/ */ Context_Gear_motion_monitering_1;
  outC_GenericMonitoring /* _L57=(GenericMonitoring#3)/ */ Context_GenericMonitoring_3;
  outC_GenericMonitoring /* _L93=(GenericMonitoring#7)/ */ Context_GenericMonitoring_7;
  outC_GenericMonitoring /* _L95=(GenericMonitoring#8)/ */ Context_GenericMonitoring_8;
  outC_GenericMonitoring /* _L49=(GenericMonitoring#2)/ */ Context_GenericMonitoring_2;
  outC_DoorControl /* _L27=(DoorControl#1)/ */ Context_DoorControl_1;
  outC_GenericMonitoring /* _L99=(GenericMonitoring#9)/ */ Context_GenericMonitoring_9;
  outC_DoorControl /* _L83=(DoorControl#2)/ */ Context_DoorControl_2;
  outC_GenericMonitoring /* _L91=(GenericMonitoring#6)/ */ Context_GenericMonitoring_6;
  outC_DoorControl /* _L89=(DoorControl#3)/ */ Context_DoorControl_3;
  outC_electro_valve_door_gear /* _L75=(electro_valve_door_gear#3)/ */ Context_electro_valve_door_gear_3;
  outC_electro_valve_door_gear /* _L25=(electro_valve_door_gear#1)/ */ _1_Context_electro_valve_door_gear_1;
  outC_GenericMonitoring /* _L115=(GenericMonitoring#13)/ */ Context_GenericMonitoring_13;
  outC_GenericMonitoring /* _L109=(GenericMonitoring#10)/ */ Context_GenericMonitoring_10;
  outC_GenericMonitoring /* _L65=(GenericMonitoring#5)/ */ Context_GenericMonitoring_5;
  outC_GenericMonitoring /* _L113=(GenericMonitoring#12)/ */ Context_GenericMonitoring_12;
  outC_GearControl /* _L105=(GearControl#3)/ */ Context_GearControl_3;
  outC_GenericMonitoring /* _L111=(GenericMonitoring#11)/ */ Context_GenericMonitoring_11;
  outC_GearControl /* _L103=(GearControl#2)/ */ Context_GearControl_2;
  outC_GenericMonitoring /* _L63=(GenericMonitoring#4)/ */ Context_GenericMonitoring_4;
  outC_GearControl /* _L76=(GearControl#1)/ */ Context_GearControl_1;
  outC_electro_valve_door_gear /* _L47=(electro_valve_door_gear#2)/ */ _2_Context_electro_valve_door_gear_2;
  outC_electro_valve_door_gear /* _L81=(electro_valve_door_gear#4)/ */ _3_Context_electro_valve_door_gear_4;
  outC_GenericMonitoring /* _L12=(GenericMonitoring#1)/ */ Context_GenericMonitoring_1;
  outC_Analogical_switch /* _L11=(Analogical_switch#1)/ */ Context_Analogical_switch_1;
  outC_ComputingModule /* _L1=(ComputingModule#1)/ */ Context_ComputingModule_1;
  outC_ComputingModule /* _L14=(ComputingModule#2)/ */ Context_ComputingModule_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  array_bool_3 /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  array_bool_3 /* _L28/ */ _L28;
  array_bool_3 /* _L27/ */ _L27;
  kcg_bool /* _L33/ */ _L33;
  kcg_int16 /* _L39/ */ _L39;
  kcg_int16 /* _L40/ */ _L40;
  kcg_int16 /* _L41/ */ _L41;
  kcg_int16 /* _L42/ */ _L42;
  kcg_int16 /* _L43/ */ _L43;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L49/ */ _L49;
  kcg_bool /* _L51/ */ _L51;
  kcg_int16 /* _L52/ */ _L52;
  kcg_int16 /* _L53/ */ _L53;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L75/ */ _L75;
  array_bool_3 /* _L77/ */ _L77;
  array_bool_3 /* _L76/ */ _L76;
  kcg_int16 /* _L78/ */ _L78;
  kcg_int16 /* _L79/ */ _L79;
  kcg_int16 /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  array_bool_3 /* _L83/ */ _L83;
  array_bool_3 /* _L84/ */ _L84;
  kcg_int16 /* _L86/ */ _L86;
  kcg_int16 /* _L87/ */ _L87;
  array_bool_3 /* _L89/ */ _L89;
  array_bool_3 /* _L90/ */ _L90;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  array_bool_3 /* _L103/ */ _L103;
  array_bool_3 /* _L104/ */ _L104;
  array_bool_3 /* _L105/ */ _L105;
  array_bool_3 /* _L106/ */ _L106;
  kcg_int16 /* _L107/ */ _L107;
  kcg_int16 /* _L108/ */ _L108;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L115/ */ _L115;
  kcg_bool /* _L116/ */ _L116;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L128/ */ _L128;
  kcg_int16 /* _L129/ */ _L129;
  kcg_int16 /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  kcg_bool /* _L132/ */ _L132;
  kcg_int16 /* _L133/ */ _L133;
  kcg_bool /* _L134/ */ _L134;
  kcg_bool /* _L136/ */ _L136;
  kcg_int16 /* _L137/ */ _L137;
  kcg_int16 /* _L138/ */ _L138;
  kcg_bool /* _L139/ */ _L139;
  array_bool_3 /* _L140/ */ _L140;
  array_bool_3 /* _L142/ */ _L142;
  array_bool_3 /* _L143/ */ _L143;
  array_bool_3 /* _L144/ */ _L144;
  kcg_bool /* _L145/ */ _L145;
} outC_main_with_time_anomaly;

/* ===========  node initialization and cycle functions  =========== */
/* main_with_time_anomaly/ */
extern void main_with_time_anomaly(
  inC_main_with_time_anomaly *inC,
  outC_main_with_time_anomaly *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void main_with_time_anomaly_reset(outC_main_with_time_anomaly *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void main_with_time_anomaly_init(outC_main_with_time_anomaly *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _main_with_time_anomaly_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** main_with_time_anomaly.h
** Generation date: 2021-03-28T21:59:49
*************************************************************$ */

