/* statemachine_mapping.c */

#include "statemachine_type.h"
#include "statemachine_interface.h"
#include "statemachine_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_3);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 2);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 3);
DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 3);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 3);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 6);
DECL_SCOPE(scope_3, 13);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 4);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Initial_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Initial_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_X1_2_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_X1_2_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_X1_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_X1_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_X2_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_X2_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_X3_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_X3_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_error_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_error_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_X1_1_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_X1_1_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_X1_2_2_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_X1_2_2_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_X2_3_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_X2_3_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_X3_4_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_X3_4_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_X1_error_1_X1_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_X1_error_1_X1_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_X2_error_1_X2_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_X2_error_1_X2_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_X3_error_1_X3_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_X3_error_1_X3_SM1; }

/* mapping definition */

const MappingIterator iter_array_3 = { "array", 3, 3, NULL };

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_error_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_error_SM1, NULL, 1, 0 }
};
const MappingScope scope_16 = {
    "voteur2/ voteur2SM1:error:",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_X1_2_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_2_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_X1_2_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_2_SM1, NULL, 1, 1 }
};
const MappingScope scope_15 = {
    "voteur2/ voteur2SM1:X1_2:",
    scope_15_entries, 2
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X2_error_1_X2_SM1, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "voteur2/ voteur2SM1:X2:<1",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X2_error_1_X2_SM1, &scope_14, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_X2_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X2_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_X2_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X2_SM1, NULL, 1, 2 }
};
const MappingScope scope_13 = {
    "voteur2/ voteur2SM1:X2:",
    scope_13_entries, 3
};

const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X3_error_1_X3_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "voteur2/ voteur2SM1:X3:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X3_error_1_X3_SM1, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_X3_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X3_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_X3_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X3_SM1, NULL, 1, 2 }
};
const MappingScope scope_11 = {
    "voteur2/ voteur2SM1:X3:",
    scope_11_entries, 3
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X1_error_1_X1_SM1, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "voteur2/ voteur2SM1:X1:<1",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_X1_error_1_X1_SM1, &scope_10, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_X1_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_X1_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_SM1, NULL, 1, 2 }
};
const MappingScope scope_9 = {
    "voteur2/ voteur2SM1:X1:",
    scope_9_entries, 3
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X3_4_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "voteur2/ voteur2SM1:Initial:<4",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X2_3_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "voteur2/ voteur2SM1:Initial:<3",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X1_2_2_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "voteur2/ voteur2SM1:Initial:<2",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X1_1_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "voteur2/ voteur2SM1:Initial:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X1_1_Initial_SM1, &scope_5, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X1_2_2_Initial_SM1, &scope_6, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X2_3_Initial_SM1, &scope_7, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_X3_4_Initial_SM1, &scope_8, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Initial_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Initial_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Initial_SM1, &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Initial_SM1, NULL, 1, 5 }
};
const MappingScope scope_4 = {
    "voteur2/ voteur2SM1:Initial:",
    scope_4_entries, 6
};

const MappingEntry scope_3_entries[13] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Initial:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_Initial_SM1, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "X1:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_SM1, &scope_9, 1, 8 },
    /* 9 */ { MAP_STATE, "X3:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X3_SM1, &scope_11, 1, 9 },
    /* 10 */ { MAP_STATE, "X2:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X2_SM1, &scope_13, 1, 10 },
    /* 11 */ { MAP_STATE, "X1_2:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_X1_2_SM1, &scope_15, 1, 11 },
    /* 12 */ { MAP_STATE, "error:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_error_SM1, &scope_16, 1, 12 }
};
const MappingScope scope_3 = {
    "voteur2/ voteur2SM1:",
    scope_3_entries, 13
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "array_bool_3",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "error", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.error, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Y", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Y, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "X", NULL, sizeof(array_bool_3), (size_t)&inputs_ctx.X, &_Type_array_bool_3_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 3 }
};
const MappingScope scope_1 = {
    "voteur2/ voteur2",
    scope_1_entries, 4
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "voteur2", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
