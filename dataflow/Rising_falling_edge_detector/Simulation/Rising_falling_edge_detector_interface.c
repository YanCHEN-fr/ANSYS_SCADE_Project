#include "Rising_falling_edge_detector_interface.h"
#include "Rising_falling_edge_detector_type.h"
#include "Rising_falling_edge_detector_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_Rising_falling_edge_detec inputs_ctx;
static inC_Rising_falling_edge_detec inputs_ctx_execute;
outC_Rising_falling_edge_detec outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.Input1);
    init_kcg_bool(&inputs_ctx_execute.Input1);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.Input1 = inputs_ctx.Input1;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "90e699227c786f8fa29a6b88a7066ff3";
const char* _SCSIM_SmuTypesCheckSum = "612a6f2dec6abe526bcaa0632c507adf";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    Rising_falling_edge_detec_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Rising_falling_edge_detec_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_Rising_falling_edge_detecCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_Rising_falling_edge_detecCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_Rising_falling_edge_detecCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_Rising_falling_edge_detecCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_Rising_falling_edge_detecCIVTable != NULL && 
        pSimoutC_Rising_falling_edge_detecCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_Rising_falling_edge_detecCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    Rising_falling_edge_detec(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_Rising_falling_edge_detec);
    nSize += sizeof(outC_Rising_falling_edge_detec);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_Rising_falling_edge_detec));
    pCurrent += sizeof(inC_Rising_falling_edge_detec);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_Rising_falling_edge_detec));
    pCurrent += sizeof(outC_Rising_falling_edge_detec);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_Rising_falling_edge_detec));
    pCurrent += sizeof(inC_Rising_falling_edge_detec);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_Rising_falling_edge_detec));
    pCurrent += sizeof(outC_Rising_falling_edge_detec);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

