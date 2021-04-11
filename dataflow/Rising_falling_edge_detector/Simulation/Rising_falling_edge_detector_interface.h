#ifndef RISING_FALLING_EDGE_DETECTOR_INTERFACE_H_
#define RISING_FALLING_EDGE_DETECTOR_INTERFACE_H_

#include "kcg_sensors.h"
#include "SmuProxy.h"
#include "Rising_falling_edge_detec.h"

/* context */

extern inC_Rising_falling_edge_detec inputs_ctx;
extern outC_Rising_falling_edge_detec outputs_ctx;

#ifdef __cplusplus
extern "C" {
#endif

extern SimSimulator * pSimulator;

/* simulation */

#ifdef EXTENDED_SIM
    void BeforeSimInit();
    void AfterSimInit();
    void BeforeSimStep();
    void AfterSimStep();
    void ExtendedSimStop();
    void ExtendedGatherDumpData(char * pData);
    void ExtendedRestoreDumpData(const char * pData);
    int ExtendedGetDumpSize();
    void UpdateValues();
    extern void UpdateSimulatorValues();
    extern int GraphicalInputsConnected;
#endif

/* logging */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* RISING_FALLING_EDGE_DETECTOR_INTERFACE_H_ */
