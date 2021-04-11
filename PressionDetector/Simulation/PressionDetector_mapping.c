/* PressionDetector_mapping.c */

#include "PressionDetector_type.h"
#include "PressionDetector_interface.h"
#include "PressionDetector_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 2);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 2);
DECL_SCOPE(scope_4, 9);
DECL_SCOPE(scope_3, 2);
DECL_SCOPE(scope_2, 4);
DECL_SCOPE(scope_1, 9);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_off_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_off_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_on_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_on_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_off_on_1_off_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_off_on_1_off_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_on_off_1_on_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_on_off_1_on_SM1; }

/* mapping definition */


const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_SM1_SSM_TR_on_off_1_on_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "timedDevice/ timedDeviceSM1:on:<1",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_SM1_SSM_TR_on_off_1_on_SM1, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_timedDevice, _L1_on_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 1 }
};
const MappingScope scope_7 = {
    "timedDevice/ timedDeviceSM1:on:",
    scope_7_entries, 2
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_SM1_SSM_TR_off_on_1_off_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "timedDevice/ timedDeviceSM1:off:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_4_entries[5], isActive_SSM_TR_SM1_SSM_TR_off_on_1_off_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_timedDevice, _L1_off_SM1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_off_SM1, NULL, 1, 1 }
};
const MappingScope scope_5 = {
    "timedDevice/ timedDeviceSM1:off:",
    scope_5_entries, 2
};

const MappingEntry scope_4_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_timedDevice, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_timedDevice, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_timedDevice, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_timedDevice, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_timedDevice, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_timedDevice, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_timedDevice, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "off:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_off_SM1, &scope_5, 1, 7 },
    /* 8 */ { MAP_STATE, "on:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_7, 1, 8 }
};
const MappingScope scope_4 = {
    "timedDevice/ timedDeviceSM1:",
    scope_4_entries, 9
};

const MappingEntry scope_3_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "alarm", NULL, sizeof(kcg_bool), offsetof(outC_timedDevice, alarm), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 1 }
};
const MappingScope scope_3 = {
    "timedDevice/ timedDevice",
    scope_3_entries, 2
};

const MappingEntry scope_2_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "over", NULL, sizeof(kcg_bool), offsetof(outC_ThresholdDetector, over), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int8), offsetof(outC_ThresholdDetector, _L1), &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), offsetof(outC_ThresholdDetector, _L2), &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ThresholdDetector, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_2 = {
    "ThresholdDetector/ ThresholdDetector",
    scope_2_entries, 4
};

const MappingEntry scope_1_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "alarm", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.alarm, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "pressure", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.pressure, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L1, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L4, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L5, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "ThresholdDetector 1", NULL, sizeof(outC_ThresholdDetector), (size_t)&outputs_ctx.Context_ThresholdDetector_1, NULL, NULL, NULL, &scope_2, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "timedDevice 1", NULL, sizeof(outC_timedDevice), (size_t)&outputs_ctx.Context_timedDevice_1, NULL, NULL, NULL, &scope_3, 1, 8 }
};
const MappingScope scope_1 = {
    "main/ main",
    scope_1_entries, 9
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "main", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
