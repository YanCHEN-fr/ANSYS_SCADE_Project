/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config G:/CROB301/PROJECT/PROJETV2/PROJET/Simulation/config.txt
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "main_with_time_anomaly.h"

/* main_with_time_anomaly/ */
void main_with_time_anomaly(
  inC_main_with_time_anomaly *inC,
  outC_main_with_time_anomaly *outC)
{
  /* _L59= */
  if (outC->init) {
    outC->_L59 = kcg_false;
  }
  else {
    outC->_L59 = outC->_L102;
  }
  /* _L51= */
  if (outC->init) {
    outC->_L51 = kcg_false;
  }
  else {
    outC->_L51 = outC->_L101;
  }
  /* _L60= */
  if (outC->init) {
    outC->_L60 = kcg_false;
  }
  else {
    outC->_L60 = outC->_L117;
  }
  /* _L61= */
  if (outC->init) {
    outC->_L61 = kcg_false;
  }
  else {
    outC->_L61 = outC->_L118;
  }
  outC->_L62 = inC->handle;
  /* _L127= */
  if (outC->init) {
    outC->_L127 = kcg_false;
  }
  else {
    outC->_L127 = outC->_L123;
  }
  /* _L14=(ComputingModule#2)/ */
  ComputingModule(
    outC->_L59,
    outC->_L51,
    outC->_L60,
    outC->_L61,
    outC->_L62,
    outC->_L127,
    &outC->Context_ComputingModule_2);
  outC->_L14 = outC->Context_ComputingModule_2.general_EV;
  outC->_L15 = outC->Context_ComputingModule_2.close_EV;
  outC->_L16 = outC->Context_ComputingModule_2.open_EV;
  outC->_L17 = outC->Context_ComputingModule_2.retract_EV;
  outC->_L18 = outC->Context_ComputingModule_2.extend_EV;
  outC->_L19 = outC->Context_ComputingModule_2.anomaly;
  outC->_L20 = outC->Context_ComputingModule_2.gears_maneuvering;
  outC->_L21 = outC->Context_ComputingModule_2.gears_locked_down;
  outC->_L69 = outC->Context_ComputingModule_2.up2down;
  outC->_L71 = outC->Context_ComputingModule_2.down2up;
  /* _L1=(ComputingModule#1)/ */
  ComputingModule(
    outC->_L59,
    outC->_L51,
    outC->_L60,
    outC->_L61,
    outC->_L62,
    outC->_L127,
    &outC->Context_ComputingModule_1);
  outC->_L1 = outC->Context_ComputingModule_1.general_EV;
  outC->_L2 = outC->Context_ComputingModule_1.close_EV;
  outC->_L3 = outC->Context_ComputingModule_1.open_EV;
  outC->_L4 = outC->Context_ComputingModule_1.retract_EV;
  outC->_L5 = outC->Context_ComputingModule_1.extend_EV;
  outC->_L6 = outC->Context_ComputingModule_1.anomaly;
  outC->_L7 = outC->Context_ComputingModule_1.gears_maneuvering;
  outC->_L8 = outC->Context_ComputingModule_1.gears_locked_down;
  outC->_L70 = outC->Context_ComputingModule_1.up2down;
  outC->_L72 = outC->Context_ComputingModule_1.down2up;
  outC->_L145 = outC->_L72 & outC->_L71;
  outC->_L78 = kcg_lit_int16(8);
  outC->_L79 = kcg_lit_int16(4);
  outC->_L80 = kcg_lit_int16(16);
  outC->_L22 = outC->_L1 | outC->_L14;
  /* _L11=(Analogical_switch#1)/ */
  Analogical_switch(outC->_L22, &outC->Context_Analogical_switch_1);
  kcg_copy_array_bool_3(
    &outC->_L11,
    &outC->Context_Analogical_switch_1.analogical_switch);
  /* _L12=(GenericMonitoring#1)/ */
  GenericMonitoring(&outC->_L11, &outC->Context_GenericMonitoring_1);
  outC->_L12 = outC->Context_GenericMonitoring_1.anomal;
  outC->_L13 = outC->Context_GenericMonitoring_1.sensor_output;
  outC->_L33 = outC->_L4 | outC->_L17;
  /* _L81=(electro_valve_door_gear#4)/ */
  electro_valve_door_gear(
    outC->_L13,
    outC->_L33,
    &outC->_3_Context_electro_valve_door_gear_4);
  outC->_L81 = outC->_3_Context_electro_valve_door_gear_4.status;
  outC->_L41 = kcg_lit_int16(4);
  outC->_L43 = kcg_lit_int16(12);
  outC->_L42 = kcg_lit_int16(8);
  outC->_L48 = outC->_L5 | outC->_L18;
  /* _L47=(electro_valve_door_gear#2)/ */
  electro_valve_door_gear(
    outC->_L13,
    outC->_L48,
    &outC->_2_Context_electro_valve_door_gear_2);
  outC->_L47 = outC->_2_Context_electro_valve_door_gear_2.status;
  outC->_L82 = outC->_L70 | outC->_L69;
  /* _L76=(GearControl#1)/ */
  GearControl(
    outC->_L78,
    outC->_L79,
    outC->_L80,
    outC->_L81,
    outC->_L41,
    outC->_L43,
    outC->_L42,
    outC->_L47,
    outC->_L82,
    &outC->Context_GearControl_1);
  kcg_copy_array_bool_3(&outC->_L76, &outC->Context_GearControl_1.gear_extended);
  kcg_copy_array_bool_3(&outC->_L77, &outC->Context_GearControl_1.gear_retracted);
  /* _L63=(GenericMonitoring#4)/ */
  GenericMonitoring(&outC->_L76, &outC->Context_GenericMonitoring_4);
  outC->_L63 = outC->Context_GenericMonitoring_4.anomal;
  outC->_L64 = outC->Context_GenericMonitoring_4.sensor_output;
  outC->_L107 = kcg_lit_int16(20);
  outC->_L108 = kcg_lit_int16(16);
  /* _L103=(GearControl#2)/ */
  GearControl(
    outC->_L78,
    outC->_L79,
    outC->_L107,
    outC->_L81,
    outC->_L41,
    outC->_L108,
    outC->_L42,
    outC->_L47,
    outC->_L82,
    &outC->Context_GearControl_2);
  kcg_copy_array_bool_3(&outC->_L103, &outC->Context_GearControl_2.gear_extended);
  kcg_copy_array_bool_3(
    &outC->_L104,
    &outC->Context_GearControl_2.gear_retracted);
  /* _L111=(GenericMonitoring#11)/ */
  GenericMonitoring(&outC->_L103, &outC->Context_GenericMonitoring_11);
  outC->_L111 = outC->Context_GenericMonitoring_11.anomal;
  outC->_L112 = outC->Context_GenericMonitoring_11.sensor_output;
  /* _L105=(GearControl#3)/ */
  GearControl(
    outC->_L78,
    outC->_L79,
    outC->_L107,
    outC->_L81,
    outC->_L41,
    outC->_L108,
    outC->_L42,
    outC->_L47,
    outC->_L82,
    &outC->Context_GearControl_3);
  kcg_copy_array_bool_3(&outC->_L105, &outC->Context_GearControl_3.gear_extended);
  kcg_copy_array_bool_3(
    &outC->_L106,
    &outC->Context_GearControl_3.gear_retracted);
  /* _L113=(GenericMonitoring#12)/ */
  GenericMonitoring(&outC->_L105, &outC->Context_GenericMonitoring_12);
  outC->_L113 = outC->Context_GenericMonitoring_12.anomal;
  outC->_L114 = outC->Context_GenericMonitoring_12.sensor_output;
  outC->_L144[0] = outC->_L64;
  outC->_L144[1] = outC->_L112;
  outC->_L144[2] = outC->_L114;
  /* _L65=(GenericMonitoring#5)/ */
  GenericMonitoring(&outC->_L77, &outC->Context_GenericMonitoring_5);
  outC->_L65 = outC->Context_GenericMonitoring_5.anomal;
  outC->_L66 = outC->Context_GenericMonitoring_5.sensor_output;
  /* _L109=(GenericMonitoring#10)/ */
  GenericMonitoring(&outC->_L104, &outC->Context_GenericMonitoring_10);
  outC->_L109 = outC->Context_GenericMonitoring_10.anomal;
  outC->_L110 = outC->Context_GenericMonitoring_10.sensor_output;
  /* _L115=(GenericMonitoring#13)/ */
  GenericMonitoring(&outC->_L106, &outC->Context_GenericMonitoring_13);
  outC->_L115 = outC->Context_GenericMonitoring_13.anomal;
  outC->_L116 = outC->Context_GenericMonitoring_13.sensor_output;
  outC->_L143[0] = outC->_L66;
  outC->_L143[1] = outC->_L110;
  outC->_L143[2] = outC->_L116;
  outC->_L39 = kcg_lit_int16(4);
  outC->_L87 = kcg_lit_int16(15);
  outC->_L26 = outC->_L3 | outC->_L16;
  /* _L25=(electro_valve_door_gear#1)/ */
  electro_valve_door_gear(
    outC->_L13,
    outC->_L26,
    &outC->_1_Context_electro_valve_door_gear_1);
  outC->_L25 = outC->_1_Context_electro_valve_door_gear_1.status;
  outC->_L86 = kcg_lit_int16(16);
  outC->_L53 = kcg_lit_int16(3);
  outC->_L23 = outC->_L2 | outC->_L15;
  /* _L75=(electro_valve_door_gear#3)/ */
  electro_valve_door_gear(
    outC->_L13,
    outC->_L23,
    &outC->Context_electro_valve_door_gear_3);
  outC->_L75 = outC->Context_electro_valve_door_gear_3.status;
  /* _L89=(DoorControl#3)/ */
  DoorControl(
    outC->_L39,
    outC->_L87,
    outC->_L25,
    outC->_L86,
    outC->_L53,
    outC->_L75,
    &outC->Context_DoorControl_3);
  kcg_copy_array_bool_3(&outC->_L89, &outC->Context_DoorControl_3.door_closed);
  kcg_copy_array_bool_3(&outC->_L90, &outC->Context_DoorControl_3.door_open);
  /* _L91=(GenericMonitoring#6)/ */
  GenericMonitoring(&outC->_L90, &outC->Context_GenericMonitoring_6);
  outC->_L91 = outC->Context_GenericMonitoring_6.anomal;
  outC->_L92 = outC->Context_GenericMonitoring_6.sensor_output;
  /* _L83=(DoorControl#2)/ */
  DoorControl(
    outC->_L39,
    outC->_L87,
    outC->_L25,
    outC->_L86,
    outC->_L53,
    outC->_L75,
    &outC->Context_DoorControl_2);
  kcg_copy_array_bool_3(&outC->_L83, &outC->Context_DoorControl_2.door_closed);
  kcg_copy_array_bool_3(&outC->_L84, &outC->Context_DoorControl_2.door_open);
  /* _L99=(GenericMonitoring#9)/ */
  GenericMonitoring(&outC->_L84, &outC->Context_GenericMonitoring_9);
  outC->_L99 = outC->Context_GenericMonitoring_9.anomal;
  outC->_L100 = outC->Context_GenericMonitoring_9.sensor_output;
  outC->_L40 = kcg_lit_int16(12);
  outC->_L52 = kcg_lit_int16(12);
  /* _L27=(DoorControl#1)/ */
  DoorControl(
    outC->_L39,
    outC->_L40,
    outC->_L25,
    outC->_L52,
    outC->_L53,
    outC->_L75,
    &outC->Context_DoorControl_1);
  kcg_copy_array_bool_3(&outC->_L27, &outC->Context_DoorControl_1.door_closed);
  kcg_copy_array_bool_3(&outC->_L28, &outC->Context_DoorControl_1.door_open);
  /* _L49=(GenericMonitoring#2)/ */
  GenericMonitoring(&outC->_L28, &outC->Context_GenericMonitoring_2);
  outC->_L49 = outC->Context_GenericMonitoring_2.anomal;
  outC->_L50 = outC->Context_GenericMonitoring_2.sensor_output;
  outC->_L142[0] = outC->_L92;
  outC->_L142[1] = outC->_L100;
  outC->_L142[2] = outC->_L50;
  /* _L95=(GenericMonitoring#8)/ */
  GenericMonitoring(&outC->_L89, &outC->Context_GenericMonitoring_8);
  outC->_L95 = outC->Context_GenericMonitoring_8.anomal;
  outC->_L96 = outC->Context_GenericMonitoring_8.sensor_output;
  /* _L93=(GenericMonitoring#7)/ */
  GenericMonitoring(&outC->_L83, &outC->Context_GenericMonitoring_7);
  outC->_L93 = outC->Context_GenericMonitoring_7.anomal;
  outC->_L94 = outC->Context_GenericMonitoring_7.sensor_output;
  /* _L57=(GenericMonitoring#3)/ */
  GenericMonitoring(&outC->_L27, &outC->Context_GenericMonitoring_3);
  outC->_L57 = outC->Context_GenericMonitoring_3.anomal;
  outC->_L58 = outC->Context_GenericMonitoring_3.sensor_output;
  outC->_L140[0] = outC->_L96;
  outC->_L140[1] = outC->_L94;
  outC->_L140[2] = outC->_L58;
  outC->_L137 = kcg_lit_int16(70);
  outC->_L138 = kcg_lit_int16(100);
  /* _L136=(Gear_motion_monitering#1)/ */
  Gear_motion_monitering(
    &outC->_L143,
    outC->_L145,
    outC->_L137,
    outC->_L138,
    &outC->_L144,
    outC->_L82,
    &outC->Context_Gear_motion_monitering_1);
  outC->_L136 = outC->Context_Gear_motion_monitering_1.abnormal;
  outC->_L122 = outC->_L63 | outC->_L65 | outC->_L111 | outC->_L109 |
    outC->_L113 | outC->_L115;
  outC->_L139 = outC->_L122 | outC->_L136;
  outC->_L133 = kcg_lit_int16(70);
  /* _L132=(DoorsMotionMonitoring#1)/ */
  DoorsMotionMonitoring(
    &outC->_L140,
    &outC->_L142,
    outC->_L133,
    outC->_L75,
    outC->_L25,
    &outC->Context_DoorsMotionMonitoring_1);
  outC->_L132 = outC->Context_DoorsMotionMonitoring_1.doors_anomaly;
  outC->_L121 = outC->_L95 | outC->_L91 | outC->_L93 | outC->_L99 | outC->_L57 |
    outC->_L49;
  outC->_L134 = outC->_L121 | outC->_L132;
  outC->_L129 = kcg_lit_int16(10);
  outC->_L130 = kcg_lit_int16(15);
  /* _L128=(AnalogicalSwitchMonitoring#1)/ */
  AnalogicalSwitchMonitoring(
    outC->_L22,
    outC->_L13,
    outC->_L129,
    outC->_L130,
    &outC->Context_AnalogicalSwitchMonitoring_1);
  outC->_L128 = outC->Context_AnalogicalSwitchMonitoring_1.switch_anomal;
  outC->_L131 = outC->_L128 | outC->_L12;
  outC->_L124 = outC->_L8 | outC->_L21;
  outC->global_locked_down = outC->_L124;
  outC->_L125 = outC->_L7 | outC->_L20;
  outC->global_maneuvering = outC->_L125;
  outC->_L126 = outC->_L6 | outC->_L19;
  outC->global_anomaly = outC->_L126;
  outC->_L123 = outC->_L134 | outC->_L139 | outC->_L131;
  outC->_L118 = outC->_L66 & outC->_L110 & outC->_L116;
  outC->_L117 = outC->_L64 & outC->_L112 & outC->_L114;
  outC->_L102 = outC->_L92 & outC->_L100 & outC->_L50;
  outC->_L101 = outC->_L96 & outC->_L94 & outC->_L58;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void main_with_time_anomaly_init(outC_main_with_time_anomaly *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;

  outC->_L145 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L144[idx] = kcg_true;
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L143[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L142[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L140[idx3] = kcg_true;
  }
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_lit_int16(0);
  outC->_L137 = kcg_lit_int16(0);
  outC->_L136 = kcg_true;
  outC->_L134 = kcg_true;
  outC->_L133 = kcg_lit_int16(0);
  outC->_L132 = kcg_true;
  outC->_L131 = kcg_true;
  outC->_L130 = kcg_lit_int16(0);
  outC->_L129 = kcg_lit_int16(0);
  outC->_L128 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L115 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L108 = kcg_lit_int16(0);
  outC->_L107 = kcg_lit_int16(0);
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L106[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L105[idx5] = kcg_true;
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L104[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L103[idx7] = kcg_true;
  }
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L92 = kcg_true;
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L90[idx8] = kcg_true;
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L89[idx9] = kcg_true;
  }
  outC->_L87 = kcg_lit_int16(0);
  outC->_L86 = kcg_lit_int16(0);
  for (idx10 = 0; idx10 < 3; idx10++) {
    outC->_L84[idx10] = kcg_true;
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L83[idx11] = kcg_true;
  }
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_lit_int16(0);
  outC->_L79 = kcg_lit_int16(0);
  outC->_L78 = kcg_lit_int16(0);
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->_L76[idx12] = kcg_true;
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L77[idx13] = kcg_true;
  }
  outC->_L75 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L53 = kcg_lit_int16(0);
  outC->_L52 = kcg_lit_int16(0);
  outC->_L51 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L43 = kcg_lit_int16(0);
  outC->_L42 = kcg_lit_int16(0);
  outC->_L41 = kcg_lit_int16(0);
  outC->_L40 = kcg_lit_int16(0);
  outC->_L39 = kcg_lit_int16(0);
  outC->_L33 = kcg_true;
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L27[idx14] = kcg_true;
  }
  for (idx15 = 0; idx15 < 3; idx15++) {
    outC->_L28[idx15] = kcg_true;
  }
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  for (idx16 = 0; idx16 < 3; idx16++) {
    outC->_L11[idx16] = kcg_true;
  }
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L101 = kcg_true;
  outC->init = kcg_true;
  outC->global_locked_down = kcg_true;
  outC->global_maneuvering = kcg_true;
  outC->global_anomaly = kcg_true;
  /* _L128=(AnalogicalSwitchMonitoring#1)/ */
  AnalogicalSwitchMonitoring_init(&outC->Context_AnalogicalSwitchMonitoring_1);
  /* _L132=(DoorsMotionMonitoring#1)/ */
  DoorsMotionMonitoring_init(&outC->Context_DoorsMotionMonitoring_1);
  /* _L136=(Gear_motion_monitering#1)/ */
  Gear_motion_monitering_init(&outC->Context_Gear_motion_monitering_1);
  /* _L57=(GenericMonitoring#3)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_3);
  /* _L93=(GenericMonitoring#7)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_7);
  /* _L95=(GenericMonitoring#8)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_8);
  /* _L49=(GenericMonitoring#2)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_2);
  /* _L27=(DoorControl#1)/ */ DoorControl_init(&outC->Context_DoorControl_1);
  /* _L99=(GenericMonitoring#9)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_9);
  /* _L83=(DoorControl#2)/ */ DoorControl_init(&outC->Context_DoorControl_2);
  /* _L91=(GenericMonitoring#6)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_6);
  /* _L89=(DoorControl#3)/ */ DoorControl_init(&outC->Context_DoorControl_3);
  /* _L75=(electro_valve_door_gear#3)/ */
  electro_valve_door_gear_init(&outC->Context_electro_valve_door_gear_3);
  /* _L25=(electro_valve_door_gear#1)/ */
  electro_valve_door_gear_init(&outC->_1_Context_electro_valve_door_gear_1);
  /* _L115=(GenericMonitoring#13)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_13);
  /* _L109=(GenericMonitoring#10)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_10);
  /* _L65=(GenericMonitoring#5)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_5);
  /* _L113=(GenericMonitoring#12)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_12);
  /* _L105=(GearControl#3)/ */ GearControl_init(&outC->Context_GearControl_3);
  /* _L111=(GenericMonitoring#11)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_11);
  /* _L103=(GearControl#2)/ */ GearControl_init(&outC->Context_GearControl_2);
  /* _L63=(GenericMonitoring#4)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_4);
  /* _L76=(GearControl#1)/ */ GearControl_init(&outC->Context_GearControl_1);
  /* _L47=(electro_valve_door_gear#2)/ */
  electro_valve_door_gear_init(&outC->_2_Context_electro_valve_door_gear_2);
  /* _L81=(electro_valve_door_gear#4)/ */
  electro_valve_door_gear_init(&outC->_3_Context_electro_valve_door_gear_4);
  /* _L12=(GenericMonitoring#1)/ */
  GenericMonitoring_init(&outC->Context_GenericMonitoring_1);
  /* _L11=(Analogical_switch#1)/ */
  Analogical_switch_init(&outC->Context_Analogical_switch_1);
  /* _L1=(ComputingModule#1)/ */
  ComputingModule_init(&outC->Context_ComputingModule_1);
  /* _L14=(ComputingModule#2)/ */
  ComputingModule_init(&outC->Context_ComputingModule_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void main_with_time_anomaly_reset(outC_main_with_time_anomaly *outC)
{
  outC->init = kcg_true;
  /* _L128=(AnalogicalSwitchMonitoring#1)/ */
  AnalogicalSwitchMonitoring_reset(&outC->Context_AnalogicalSwitchMonitoring_1);
  /* _L132=(DoorsMotionMonitoring#1)/ */
  DoorsMotionMonitoring_reset(&outC->Context_DoorsMotionMonitoring_1);
  /* _L136=(Gear_motion_monitering#1)/ */
  Gear_motion_monitering_reset(&outC->Context_Gear_motion_monitering_1);
  /* _L57=(GenericMonitoring#3)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_3);
  /* _L93=(GenericMonitoring#7)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_7);
  /* _L95=(GenericMonitoring#8)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_8);
  /* _L49=(GenericMonitoring#2)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_2);
  /* _L27=(DoorControl#1)/ */ DoorControl_reset(&outC->Context_DoorControl_1);
  /* _L99=(GenericMonitoring#9)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_9);
  /* _L83=(DoorControl#2)/ */ DoorControl_reset(&outC->Context_DoorControl_2);
  /* _L91=(GenericMonitoring#6)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_6);
  /* _L89=(DoorControl#3)/ */ DoorControl_reset(&outC->Context_DoorControl_3);
  /* _L75=(electro_valve_door_gear#3)/ */
  electro_valve_door_gear_reset(&outC->Context_electro_valve_door_gear_3);
  /* _L25=(electro_valve_door_gear#1)/ */
  electro_valve_door_gear_reset(&outC->_1_Context_electro_valve_door_gear_1);
  /* _L115=(GenericMonitoring#13)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_13);
  /* _L109=(GenericMonitoring#10)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_10);
  /* _L65=(GenericMonitoring#5)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_5);
  /* _L113=(GenericMonitoring#12)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_12);
  /* _L105=(GearControl#3)/ */ GearControl_reset(&outC->Context_GearControl_3);
  /* _L111=(GenericMonitoring#11)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_11);
  /* _L103=(GearControl#2)/ */ GearControl_reset(&outC->Context_GearControl_2);
  /* _L63=(GenericMonitoring#4)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_4);
  /* _L76=(GearControl#1)/ */ GearControl_reset(&outC->Context_GearControl_1);
  /* _L47=(electro_valve_door_gear#2)/ */
  electro_valve_door_gear_reset(&outC->_2_Context_electro_valve_door_gear_2);
  /* _L81=(electro_valve_door_gear#4)/ */
  electro_valve_door_gear_reset(&outC->_3_Context_electro_valve_door_gear_4);
  /* _L12=(GenericMonitoring#1)/ */
  GenericMonitoring_reset(&outC->Context_GenericMonitoring_1);
  /* _L11=(Analogical_switch#1)/ */
  Analogical_switch_reset(&outC->Context_Analogical_switch_1);
  /* _L1=(ComputingModule#1)/ */
  ComputingModule_reset(&outC->Context_ComputingModule_1);
  /* _L14=(ComputingModule#2)/ */
  ComputingModule_reset(&outC->Context_ComputingModule_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** main_with_time_anomaly.c
** Generation date: 2021-03-28T21:59:50
*************************************************************$ */

