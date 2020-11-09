#ifndef SimCodeFunctionUtil__H
#define SimCodeFunctionUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description Absyn_Exp_STRING__desc;
extern struct record_description Absyn_Path_IDENT__desc;
extern struct record_description DAE_ComponentPrefix_NOCOMPPRE__desc;
extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;
extern struct record_description DAE_Const_C__VAR__desc;
extern struct record_description DAE_ElementSource_SOURCE__desc;
extern struct record_description DAE_Exp_CONS__desc;
extern struct record_description DAE_Exp_LIST__desc;
extern struct record_description DAE_Exp_RCONST__desc;
extern struct record_description DAE_Exp_RELATION__desc;
extern struct record_description DAE_Exp_SCONST__desc;
extern struct record_description DAE_Exp_SHARED__LITERAL__desc;
extern struct record_description DAE_FuncArg_FUNCARG__desc;
extern struct record_description DAE_Operator_GREATEREQ__desc;
extern struct record_description DAE_Statement_STMT__ASSIGN__desc;
extern struct record_description DAE_Statement_STMT__ASSIGN__ARR__desc;
extern struct record_description DAE_Type_T__ANYTYPE__desc;
extern struct record_description DAE_Type_T__REAL__desc;
extern struct record_description DAE_VarKind_VARIABLE__desc;
extern struct record_description DAE_VarParallelism_NON__PARALLEL__desc;
extern struct record_description DAE_VarParallelism_PARGLOBAL__desc;
extern struct record_description DAE_VarParallelism_PARLOCAL__desc;
extern struct record_description ErrorTypes_Message_MESSAGE__desc;
extern struct record_description ErrorTypes_MessageType_SYMBOLIC__desc;
extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;
extern struct record_description ErrorTypes_Severity_ERROR__desc;
extern struct record_description ErrorTypes_Severity_NOTIFICATION__desc;
extern struct record_description ErrorTypes_Severity_WARNING__desc;
extern struct record_description Flags_ConfigFlag_CONFIG__FLAG__desc;
extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;
extern struct record_description Flags_FlagData_BOOL__FLAG__desc;
extern struct record_description Flags_FlagData_STRING__FLAG__desc;
extern struct record_description Flags_FlagVisibility_EXTERNAL__desc;
extern struct record_description Flags_ValidOptions_STRING__OPTION__desc;
extern struct record_description Gettext_TranslatableContent_gettext__desc;
extern struct record_description Gettext_TranslatableContent_notrans__desc;
extern struct record_description SCode_Visibility_PUBLIC__desc;
extern struct record_description SimCodeFunction_Context_FUNCTION__CONTEXT__desc;
extern struct record_description SimCodeFunction_Function_EXTERNAL__FUNCTION__desc;
extern struct record_description SimCodeFunction_Function_FUNCTION__desc;
extern struct record_description SimCodeFunction_Function_KERNEL__FUNCTION__desc;
extern struct record_description SimCodeFunction_Function_PARALLEL__FUNCTION__desc;
extern struct record_description SimCodeFunction_Function_RECORD__CONSTRUCTOR__desc;
extern struct record_description SimCodeFunction_MakefileParams_MAKEFILE__PARAMS__desc;
extern struct record_description SimCodeFunction_RecordDeclaration_RECORD__DECL__ADD__CONSTRCTOR__desc;
extern struct record_description SimCodeFunction_RecordDeclaration_RECORD__DECL__DEF__desc;
extern struct record_description SimCodeFunction_RecordDeclaration_RECORD__DECL__FULL__desc;
extern struct record_description SimCodeFunction_SimExtArg_SIMEXTARG__desc;
extern struct record_description SimCodeFunction_SimExtArg_SIMEXTARGEXP__desc;
extern struct record_description SimCodeFunction_SimExtArg_SIMEXTARGSIZE__desc;
extern struct record_description SimCodeFunction_SimExtArg_SIMNOEXTARG__desc;
extern struct record_description SimCodeFunction_Variable_FUNCTION__PTR__desc;
extern struct record_description SimCodeFunction_Variable_VARIABLE__desc;
extern struct record_description SourceInfo_SOURCEINFO__desc;
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_appendCurrentCrefPrefix(threadData_t *threadData, modelica_metatype _context, modelica_string _in_cref_pref);
#define boxptr_SimCodeFunctionUtil_appendCurrentCrefPrefix omc_SimCodeFunctionUtil_appendCurrentCrefPrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_appendCurrentCrefPrefix,2,0) {(void*) boxptr_SimCodeFunctionUtil_appendCurrentCrefPrefix,0}};
#define boxvar_SimCodeFunctionUtil_appendCurrentCrefPrefix MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_appendCurrentCrefPrefix)
DLLExport
modelica_string omc_SimCodeFunctionUtil_getCurrentCrefPrefix(threadData_t *threadData, modelica_metatype _context);
#define boxptr_SimCodeFunctionUtil_getCurrentCrefPrefix omc_SimCodeFunctionUtil_getCurrentCrefPrefix
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getCurrentCrefPrefix,2,0) {(void*) boxptr_SimCodeFunctionUtil_getCurrentCrefPrefix,0}};
#define boxvar_SimCodeFunctionUtil_getCurrentCrefPrefix MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getCurrentCrefPrefix)
DLLExport
modelica_string omc_SimCodeFunctionUtil_generateSubPalceholders(threadData_t *threadData, modelica_metatype _cr);
#define boxptr_SimCodeFunctionUtil_generateSubPalceholders omc_SimCodeFunctionUtil_generateSubPalceholders
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_generateSubPalceholders,2,0) {(void*) boxptr_SimCodeFunctionUtil_generateSubPalceholders,0}};
#define boxvar_SimCodeFunctionUtil_generateSubPalceholders MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_generateSubPalceholders)
DLLExport
modelica_string omc_SimCodeFunctionUtil_twodigit(threadData_t *threadData, modelica_integer _i);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_twodigit(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_twodigit,2,0) {(void*) boxptr_SimCodeFunctionUtil_twodigit,0}};
#define boxvar_SimCodeFunctionUtil_twodigit MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_twodigit)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_isParallelFunctionContext(threadData_t *threadData, modelica_metatype _context);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_isParallelFunctionContext(threadData_t *threadData, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_isParallelFunctionContext,2,0) {(void*) boxptr_SimCodeFunctionUtil_isParallelFunctionContext,0}};
#define boxvar_SimCodeFunctionUtil_isParallelFunctionContext MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_isParallelFunctionContext)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_varName(threadData_t *threadData, modelica_metatype _var);
#define boxptr_SimCodeFunctionUtil_varName omc_SimCodeFunctionUtil_varName
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_varName,2,0) {(void*) boxptr_SimCodeFunctionUtil_varName,0}};
#define boxvar_SimCodeFunctionUtil_varName MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_varName)
DLLExport
modelica_integer omc_SimCodeFunctionUtil_varIndex(threadData_t *threadData, modelica_metatype _var);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_varIndex(threadData_t *threadData, modelica_metatype _var);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_varIndex,2,0) {(void*) boxptr_SimCodeFunctionUtil_varIndex,0}};
#define boxvar_SimCodeFunctionUtil_varIndex MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_varIndex)
DLLExport
modelica_integer omc_SimCodeFunctionUtil_codegenPeekTryThrowIndex(threadData_t *threadData);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_codegenPeekTryThrowIndex(threadData_t *threadData);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPeekTryThrowIndex,2,0) {(void*) boxptr_SimCodeFunctionUtil_codegenPeekTryThrowIndex,0}};
#define boxvar_SimCodeFunctionUtil_codegenPeekTryThrowIndex MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPeekTryThrowIndex)
DLLExport
void omc_SimCodeFunctionUtil_codegenPopTryThrowIndex(threadData_t *threadData);
#define boxptr_SimCodeFunctionUtil_codegenPopTryThrowIndex omc_SimCodeFunctionUtil_codegenPopTryThrowIndex
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPopTryThrowIndex,2,0) {(void*) boxptr_SimCodeFunctionUtil_codegenPopTryThrowIndex,0}};
#define boxvar_SimCodeFunctionUtil_codegenPopTryThrowIndex MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPopTryThrowIndex)
DLLExport
void omc_SimCodeFunctionUtil_codegenPushTryThrowIndex(threadData_t *threadData, modelica_integer _i);
DLLExport
void boxptr_SimCodeFunctionUtil_codegenPushTryThrowIndex(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPushTryThrowIndex,2,0) {(void*) boxptr_SimCodeFunctionUtil_codegenPushTryThrowIndex,0}};
#define boxvar_SimCodeFunctionUtil_codegenPushTryThrowIndex MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenPushTryThrowIndex)
DLLExport
void omc_SimCodeFunctionUtil_codegenResetTryThrowIndex(threadData_t *threadData);
#define boxptr_SimCodeFunctionUtil_codegenResetTryThrowIndex omc_SimCodeFunctionUtil_codegenResetTryThrowIndex
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenResetTryThrowIndex,2,0) {(void*) boxptr_SimCodeFunctionUtil_codegenResetTryThrowIndex,0}};
#define boxvar_SimCodeFunctionUtil_codegenResetTryThrowIndex MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_codegenResetTryThrowIndex)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_createMakefileParams(threadData_t *threadData, modelica_metatype _includes, modelica_metatype _libs, modelica_metatype _libPaths, modelica_boolean _isFunction, modelica_boolean _isFMU);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_createMakefileParams(threadData_t *threadData, modelica_metatype _includes, modelica_metatype _libs, modelica_metatype _libPaths, modelica_metatype _isFunction, modelica_metatype _isFMU);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createMakefileParams,2,0) {(void*) boxptr_SimCodeFunctionUtil_createMakefileParams,0}};
#define boxvar_SimCodeFunctionUtil_createMakefileParams MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createMakefileParams)
#define boxptr_SimCodeFunctionUtil_variableString omc_SimCodeFunctionUtil_variableString
#define boxptr_SimCodeFunctionUtil_aliasRecordDeclarations2 omc_SimCodeFunctionUtil_aliasRecordDeclarations2
#define boxptr_SimCodeFunctionUtil_aliasRecordDeclarations omc_SimCodeFunctionUtil_aliasRecordDeclarations
#define boxptr_SimCodeFunctionUtil_matchNonBuiltinCallsAndFnRefPaths omc_SimCodeFunctionUtil_matchNonBuiltinCallsAndFnRefPaths
#define boxptr_SimCodeFunctionUtil_addDestructor2 omc_SimCodeFunctionUtil_addDestructor2
#define boxptr_SimCodeFunctionUtil_addDestructor omc_SimCodeFunctionUtil_addDestructor
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_getCalledFunctionsInFunction2(threadData_t *threadData, modelica_metatype _inPath, modelica_string _pathstr, modelica_metatype _inHt, modelica_metatype _funcs);
#define boxptr_SimCodeFunctionUtil_getCalledFunctionsInFunction2 omc_SimCodeFunctionUtil_getCalledFunctionsInFunction2
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getCalledFunctionsInFunction2,2,0) {(void*) boxptr_SimCodeFunctionUtil_getCalledFunctionsInFunction2,0}};
#define boxvar_SimCodeFunctionUtil_getCalledFunctionsInFunction2 MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getCalledFunctionsInFunction2)
#define boxptr_SimCodeFunctionUtil_getCalledFunctionsInFunctions omc_SimCodeFunctionUtil_getCalledFunctionsInFunctions
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_getImplicitRecordConstructors(threadData_t *threadData, modelica_metatype _inExpLst);
#define boxptr_SimCodeFunctionUtil_getImplicitRecordConstructors omc_SimCodeFunctionUtil_getImplicitRecordConstructors
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getImplicitRecordConstructors,2,0) {(void*) boxptr_SimCodeFunctionUtil_getImplicitRecordConstructors,0}};
#define boxvar_SimCodeFunctionUtil_getImplicitRecordConstructors MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_getImplicitRecordConstructors)
#define boxptr_SimCodeFunctionUtil_generateExtFunctionIncludesIncludestr omc_SimCodeFunctionUtil_generateExtFunctionIncludesIncludestr
#define boxptr_SimCodeFunctionUtil_generateExtFunctionIncludesLibstr omc_SimCodeFunctionUtil_generateExtFunctionIncludesLibstr
#define boxptr_SimCodeFunctionUtil_getLibraryStringInGccFormat omc_SimCodeFunctionUtil_getLibraryStringInGccFormat
#define boxptr_SimCodeFunctionUtil_getLibraryStringInMSVCFormat omc_SimCodeFunctionUtil_getLibraryStringInMSVCFormat
#define boxptr_SimCodeFunctionUtil_generateExtFunctionLibraryDirectoryPaths omc_SimCodeFunctionUtil_generateExtFunctionLibraryDirectoryPaths
#define boxptr_SimCodeFunctionUtil_userCompiledBinariesDirectory omc_SimCodeFunctionUtil_userCompiledBinariesDirectory
#define boxptr_SimCodeFunctionUtil_getGerneralTarget omc_SimCodeFunctionUtil_getGerneralTarget
#define boxptr_SimCodeFunctionUtil_generateExtFunctionLibraryDirectoryFlags omc_SimCodeFunctionUtil_generateExtFunctionLibraryDirectoryFlags
#define boxptr_SimCodeFunctionUtil_getLinkerLibraryPaths omc_SimCodeFunctionUtil_getLinkerLibraryPaths
#define boxptr_SimCodeFunctionUtil_generateExtFunctionIncludeDirectoryFlags omc_SimCodeFunctionUtil_generateExtFunctionIncludeDirectoryFlags
#define boxptr_SimCodeFunctionUtil_lookForExtFunctionLibrary omc_SimCodeFunctionUtil_lookForExtFunctionLibrary
#define boxptr_SimCodeFunctionUtil_elaborateRecordDeclarationsForMetarecords omc_SimCodeFunctionUtil_elaborateRecordDeclarationsForMetarecords
#define boxptr_SimCodeFunctionUtil_elaborateNestedRecordDeclarations omc_SimCodeFunctionUtil_elaborateNestedRecordDeclarations
#define boxptr_SimCodeFunctionUtil_generateVarName omc_SimCodeFunctionUtil_generateVarName
#define boxptr_SimCodeFunctionUtil_variableName omc_SimCodeFunctionUtil_variableName
#define boxptr_SimCodeFunctionUtil_scodeParallelismToDAEParallelism omc_SimCodeFunctionUtil_scodeParallelismToDAEParallelism
#define boxptr_SimCodeFunctionUtil_checkSourceAndGetBindingExp omc_SimCodeFunctionUtil_checkSourceAndGetBindingExp
#define boxptr_SimCodeFunctionUtil_typesVar omc_SimCodeFunctionUtil_typesVar
#define boxptr_SimCodeFunctionUtil_typesVarNoBinding omc_SimCodeFunctionUtil_typesVarNoBinding
#define boxptr_SimCodeFunctionUtil_elaborateRecordDeclarationsForRecord omc_SimCodeFunctionUtil_elaborateRecordDeclarationsForRecord
#define boxptr_SimCodeFunctionUtil_getCrefFromExp omc_SimCodeFunctionUtil_getCrefFromExp
#define boxptr_SimCodeFunctionUtil_matchMetarecordCalls omc_SimCodeFunctionUtil_matchMetarecordCalls
#define boxptr_SimCodeFunctionUtil_elaborateRecordDeclarations omc_SimCodeFunctionUtil_elaborateRecordDeclarations
#define boxptr_SimCodeFunctionUtil_elaborateRecordDeclarationsFromTypes omc_SimCodeFunctionUtil_elaborateRecordDeclarationsFromTypes
#define boxptr_SimCodeFunctionUtil_isLiteralExp omc_SimCodeFunctionUtil_isLiteralExp
#define boxptr_SimCodeFunctionUtil_isLiteralArrayExp omc_SimCodeFunctionUtil_isLiteralArrayExp
#define boxptr_SimCodeFunctionUtil_isTrivialLiteralExp omc_SimCodeFunctionUtil_isTrivialLiteralExp
#define boxptr_SimCodeFunctionUtil_listToCons2 omc_SimCodeFunctionUtil_listToCons2
#define boxptr_SimCodeFunctionUtil_listToCons omc_SimCodeFunctionUtil_listToCons
#define boxptr_SimCodeFunctionUtil_replaceLiteralExp2 omc_SimCodeFunctionUtil_replaceLiteralExp2
#define boxptr_SimCodeFunctionUtil_replaceLiteralExp omc_SimCodeFunctionUtil_replaceLiteralExp
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_findLiteralsHelper(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _inTpl, modelica_metatype *out_tpl);
#define boxptr_SimCodeFunctionUtil_findLiteralsHelper omc_SimCodeFunctionUtil_findLiteralsHelper
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_findLiteralsHelper,2,0) {(void*) boxptr_SimCodeFunctionUtil_findLiteralsHelper,0}};
#define boxvar_SimCodeFunctionUtil_findLiteralsHelper MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_findLiteralsHelper)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_findLiterals(threadData_t *threadData, modelica_metatype _fns, modelica_metatype *out_literals);
#define boxptr_SimCodeFunctionUtil_findLiterals omc_SimCodeFunctionUtil_findLiterals
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_findLiterals,2,0) {(void*) boxptr_SimCodeFunctionUtil_findLiterals,0}};
#define boxvar_SimCodeFunctionUtil_findLiterals MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_findLiterals)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_funcHasParallelInOutArrays(threadData_t *threadData, modelica_metatype _fn);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_funcHasParallelInOutArrays(threadData_t *threadData, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_funcHasParallelInOutArrays,2,0) {(void*) boxptr_SimCodeFunctionUtil_funcHasParallelInOutArrays,0}};
#define boxvar_SimCodeFunctionUtil_funcHasParallelInOutArrays MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_funcHasParallelInOutArrays)
#define boxptr_SimCodeFunctionUtil_isBoxedArg omc_SimCodeFunctionUtil_isBoxedArg
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_isBoxedFunction(threadData_t *threadData, modelica_metatype _fn);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_isBoxedFunction(threadData_t *threadData, modelica_metatype _fn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_isBoxedFunction,2,0) {(void*) boxptr_SimCodeFunctionUtil_isBoxedFunction,0}};
#define boxvar_SimCodeFunctionUtil_isBoxedFunction MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_isBoxedFunction)
DLLExport
void omc_SimCodeFunctionUtil_checkValidMainFunction(threadData_t *threadData, modelica_string _name, modelica_metatype _fn);
#define boxptr_SimCodeFunctionUtil_checkValidMainFunction omc_SimCodeFunctionUtil_checkValidMainFunction
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_checkValidMainFunction,2,0) {(void*) boxptr_SimCodeFunctionUtil_checkValidMainFunction,0}};
#define boxvar_SimCodeFunctionUtil_checkValidMainFunction MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_checkValidMainFunction)
#define boxptr_SimCodeFunctionUtil_elaborateStatement omc_SimCodeFunctionUtil_elaborateStatement
#define boxptr_SimCodeFunctionUtil_assignOutputIndex omc_SimCodeFunctionUtil_assignOutputIndex
#define boxptr_SimCodeFunctionUtil_fixOutputIndex omc_SimCodeFunctionUtil_fixOutputIndex
#define boxptr_SimCodeFunctionUtil_extArgsToSimExtArgs omc_SimCodeFunctionUtil_extArgsToSimExtArgs
#define boxptr_SimCodeFunctionUtil_daeInOutSimVar omc_SimCodeFunctionUtil_daeInOutSimVar
#define boxptr_SimCodeFunctionUtil_typesSimFunctionArg omc_SimCodeFunctionUtil_typesSimFunctionArg
#define boxptr_SimCodeFunctionUtil_elaborateFunction omc_SimCodeFunctionUtil_elaborateFunction
#define boxptr_SimCodeFunctionUtil_elaborateFunctions2 omc_SimCodeFunctionUtil_elaborateFunctions2
#define boxptr_SimCodeFunctionUtil_getRecordDependenciesFromType omc_SimCodeFunctionUtil_getRecordDependenciesFromType
#define boxptr_SimCodeFunctionUtil_getVarType omc_SimCodeFunctionUtil_getVarType
#define boxptr_SimCodeFunctionUtil_getRecordDependencies omc_SimCodeFunctionUtil_getRecordDependencies
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_elaborateFunctions(threadData_t *threadData, modelica_metatype _program, modelica_metatype _daeElements, modelica_metatype _metarecordTypes, modelica_metatype _literals, modelica_metatype _includes, modelica_metatype *out_extraRecordDecls, modelica_metatype *out_outIncludes, modelica_metatype *out_includeDirs, modelica_metatype *out_libs, modelica_metatype *out_libpaths);
#define boxptr_SimCodeFunctionUtil_elaborateFunctions omc_SimCodeFunctionUtil_elaborateFunctions
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_elaborateFunctions,2,0) {(void*) boxptr_SimCodeFunctionUtil_elaborateFunctions,0}};
#define boxvar_SimCodeFunctionUtil_elaborateFunctions MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_elaborateFunctions)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_createDAEString(threadData_t *threadData, modelica_string _inString);
#define boxptr_SimCodeFunctionUtil_createDAEString omc_SimCodeFunctionUtil_createDAEString
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createDAEString,2,0) {(void*) boxptr_SimCodeFunctionUtil_createDAEString,0}};
#define boxvar_SimCodeFunctionUtil_createDAEString MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createDAEString)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_createAssertforSqrt(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_SimCodeFunctionUtil_createAssertforSqrt omc_SimCodeFunctionUtil_createAssertforSqrt
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createAssertforSqrt,2,0) {(void*) boxptr_SimCodeFunctionUtil_createAssertforSqrt,0}};
#define boxvar_SimCodeFunctionUtil_createAssertforSqrt MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_createAssertforSqrt)
DLLExport
modelica_string omc_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib(threadData_t *threadData, modelica_metatype _libs);
#define boxptr_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib omc_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib,2,0) {(void*) boxptr_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib,0}};
#define boxvar_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackGetFirstExternalFunctionLib)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_hackMatrixReverseToCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _context);
#define boxptr_SimCodeFunctionUtil_hackMatrixReverseToCref omc_SimCodeFunctionUtil_hackMatrixReverseToCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackMatrixReverseToCref,2,0) {(void*) boxptr_SimCodeFunctionUtil_hackMatrixReverseToCref,0}};
#define boxvar_SimCodeFunctionUtil_hackMatrixReverseToCref MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackMatrixReverseToCref)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_hackArrayReverseToCref(threadData_t *threadData, modelica_metatype _inExp, modelica_metatype _context);
#define boxptr_SimCodeFunctionUtil_hackArrayReverseToCref omc_SimCodeFunctionUtil_hackArrayReverseToCref
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackArrayReverseToCref,2,0) {(void*) boxptr_SimCodeFunctionUtil_hackArrayReverseToCref,0}};
#define boxvar_SimCodeFunctionUtil_hackArrayReverseToCref MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_hackArrayReverseToCref)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_derComponentRef(threadData_t *threadData, modelica_metatype _inCref);
#define boxptr_SimCodeFunctionUtil_derComponentRef omc_SimCodeFunctionUtil_derComponentRef
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_derComponentRef,2,0) {(void*) boxptr_SimCodeFunctionUtil_derComponentRef,0}};
#define boxvar_SimCodeFunctionUtil_derComponentRef MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_derComponentRef)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments(threadData_t *threadData, modelica_metatype _lhs_cref, modelica_metatype _lhs_type, modelica_string _rhs_cref_str);
#define boxptr_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments omc_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments,2,0) {(void*) boxptr_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments,0}};
#define boxvar_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_splitRecordAssignmentToMemberAssignments)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_makeCrefRecordExp(threadData_t *threadData, modelica_metatype _inCRefRecord, modelica_metatype _inVar);
#define boxptr_SimCodeFunctionUtil_makeCrefRecordExp omc_SimCodeFunctionUtil_makeCrefRecordExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_makeCrefRecordExp,2,0) {(void*) boxptr_SimCodeFunctionUtil_makeCrefRecordExp,0}};
#define boxvar_SimCodeFunctionUtil_makeCrefRecordExp MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_makeCrefRecordExp)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_protectedVars(threadData_t *threadData, modelica_metatype _InSimVars);
#define boxptr_SimCodeFunctionUtil_protectedVars omc_SimCodeFunctionUtil_protectedVars
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_protectedVars,2,0) {(void*) boxptr_SimCodeFunctionUtil_protectedVars,0}};
#define boxvar_SimCodeFunctionUtil_protectedVars MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_protectedVars)
DLLExport
modelica_integer omc_SimCodeFunctionUtil_decrementInt(threadData_t *threadData, modelica_integer _inInt, modelica_integer _decrement);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_decrementInt(threadData_t *threadData, modelica_metatype _inInt, modelica_metatype _decrement);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_decrementInt,2,0) {(void*) boxptr_SimCodeFunctionUtil_decrementInt,0}};
#define boxvar_SimCodeFunctionUtil_decrementInt MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_decrementInt)
DLLExport
modelica_integer omc_SimCodeFunctionUtil_incrementInt(threadData_t *threadData, modelica_integer _inInt, modelica_integer _increment);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_incrementInt(threadData_t *threadData, modelica_metatype _inInt, modelica_metatype _increment);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_incrementInt,2,0) {(void*) boxptr_SimCodeFunctionUtil_incrementInt,0}};
#define boxvar_SimCodeFunctionUtil_incrementInt MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_incrementInt)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_buildCrefExpFromAsub(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _subs);
#define boxptr_SimCodeFunctionUtil_buildCrefExpFromAsub omc_SimCodeFunctionUtil_buildCrefExpFromAsub
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_buildCrefExpFromAsub,2,0) {(void*) boxptr_SimCodeFunctionUtil_buildCrefExpFromAsub,0}};
#define boxvar_SimCodeFunctionUtil_buildCrefExpFromAsub MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_buildCrefExpFromAsub)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_crefIsScalar(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _context);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_crefIsScalar(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _context);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefIsScalar,2,0) {(void*) boxptr_SimCodeFunctionUtil_crefIsScalar,0}};
#define boxvar_SimCodeFunctionUtil_crefIsScalar MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefIsScalar)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_inFunctionContext(threadData_t *threadData, modelica_metatype _inContext);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_inFunctionContext(threadData_t *threadData, modelica_metatype _inContext);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_inFunctionContext,2,0) {(void*) boxptr_SimCodeFunctionUtil_inFunctionContext,0}};
#define boxvar_SimCodeFunctionUtil_inFunctionContext MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_inFunctionContext)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_crefNoSub(threadData_t *threadData, modelica_metatype _cref);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_crefNoSub(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefNoSub,2,0) {(void*) boxptr_SimCodeFunctionUtil_crefNoSub,0}};
#define boxvar_SimCodeFunctionUtil_crefNoSub MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefNoSub)
DLLExport
modelica_boolean omc_SimCodeFunctionUtil_crefSubIsScalar(threadData_t *threadData, modelica_metatype _cref);
DLLExport
modelica_metatype boxptr_SimCodeFunctionUtil_crefSubIsScalar(threadData_t *threadData, modelica_metatype _cref);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefSubIsScalar,2,0) {(void*) boxptr_SimCodeFunctionUtil_crefSubIsScalar,0}};
#define boxvar_SimCodeFunctionUtil_crefSubIsScalar MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_crefSubIsScalar)
DLLExport
modelica_metatype omc_SimCodeFunctionUtil_elementVars(threadData_t *threadData, modelica_metatype _ild);
#define boxptr_SimCodeFunctionUtil_elementVars omc_SimCodeFunctionUtil_elementVars
static const MMC_DEFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_elementVars,2,0) {(void*) boxptr_SimCodeFunctionUtil_elementVars,0}};
#define boxvar_SimCodeFunctionUtil_elementVars MMC_REFSTRUCTLIT(boxvar_lit_SimCodeFunctionUtil_elementVars)
#ifdef __cplusplus
}
#endif
#endif