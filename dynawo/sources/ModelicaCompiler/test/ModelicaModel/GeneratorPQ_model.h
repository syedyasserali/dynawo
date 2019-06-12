/* Simulation code for GeneratorPQ generated by the OpenModelica Compiler OMCompiler v1.13.2. */
#if !defined(GeneratorPQ__MODEL_H)
#define GeneratorPQ__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "GeneratorPQ_functions.h"

#define Complex_index 0
#define Complex__omcQuot_2B_index 1
#define Complex__omcQuot_2A_multiply_index 2
#define Complex__omcQuot_2A_scalarProduct_index 3
#define Complex__omcQuot_2D_negate_index 4
#define Complex__omcQuot_636F6E7374727563746F72_fromReal_index 5
#define Dynawo_NonElectrical_Logs_Timeline_logEvent1_index 6
#define Dynawo_Types_AC_ApparentPower_index 7
#define Dynawo_Types_AC_ApparentPower$generator$SGenPu_index 8
#define Dynawo_Types_AC_Current_index 9
#define Dynawo_Types_AC_Current$generator$terminal$i_index 10
#define Dynawo_Types_AC_Voltage_index 11
#define Dynawo_Types_AC_Voltage$generator$terminal$V_index 12
#define Modelica_ComplexMath__omcQuot_616273_index 13
#define Modelica_ComplexMath_conj_index 14

extern void GeneratorPQ_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
extern void GeneratorPQ_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void GeneratorPQ_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int GeneratorPQ_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_checkForAsserts(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int GeneratorPQ_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* GeneratorPQ_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* GeneratorPQ_relationDescription(int i);
extern void GeneratorPQ_function_initSample(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int GeneratorPQ_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int GeneratorPQ_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int GeneratorPQ_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int GeneratorPQ_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int GeneratorPQ_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int GeneratorPQ_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int GeneratorPQ_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int GeneratorPQ_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int GeneratorPQ_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* GeneratorPQ_linear_model_frame(void);
extern const char* GeneratorPQ_linear_model_datarecovery_frame(void);
extern int GeneratorPQ_mayer(DATA* data, modelica_real** res, short *);
extern int GeneratorPQ_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int GeneratorPQ_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int GeneratorPQ_setInputData(DATA *data, const modelica_boolean file);
extern int GeneratorPQ_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void GeneratorPQ_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void GeneratorPQ_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int GeneratorPQ_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void GeneratorPQ_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void GeneratorPQ_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int GeneratorPQ_inputNames(DATA* data, char ** names);
extern int GeneratorPQ_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int GeneratorPQ_functionLocalKnownVars(DATA*, threadData_t*);
extern int GeneratorPQ_symbolicInlineSystem(DATA*, threadData_t*);

#include "GeneratorPQ_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(GeneratorPQ__MODEL_H) */

