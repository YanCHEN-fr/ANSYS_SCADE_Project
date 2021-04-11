/* comptor_mapping.c */

#include "comptor_type.h"
#include "comptor_interface.h"
#include "comptor_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 12);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx.Output1, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Input1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "Input2", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.Input2, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "Input3", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.Input3, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L2, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L3, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L4, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L5, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L6, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L7, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L8, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 11 }
};
const MappingScope scope_1 = {
    "compter/ compter",
    scope_1_entries, 12
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "compter", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
