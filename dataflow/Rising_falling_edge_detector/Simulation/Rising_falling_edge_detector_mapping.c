/* Rising_falling_edge_detector_mapping.c */

#include "Rising_falling_edge_detector_type.h"
#include "Rising_falling_edge_detector_interface.h"
#include "Rising_falling_edge_detector_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 5);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "Input1", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.Input1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_1 = {
    "Rising_falling_edge_detection2/ Rising_falling_edge_detec",
    scope_1_entries, 5
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Rising_falling_edge_detection2", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
