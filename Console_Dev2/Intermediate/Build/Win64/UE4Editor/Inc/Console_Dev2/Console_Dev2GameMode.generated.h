// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSOLE_DEV2_Console_Dev2GameMode_generated_h
#error "Console_Dev2GameMode.generated.h already included, missing '#pragma once' in Console_Dev2GameMode.h"
#endif
#define CONSOLE_DEV2_Console_Dev2GameMode_generated_h

#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_RPC_WRAPPERS
#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAConsole_Dev2GameMode(); \
	friend CONSOLE_DEV2_API class UClass* Z_Construct_UClass_AConsole_Dev2GameMode(); \
	public: \
	DECLARE_CLASS(AConsole_Dev2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Console_Dev2, NO_API) \
	DECLARE_SERIALIZER(AConsole_Dev2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AConsole_Dev2GameMode*>(this); }


#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAConsole_Dev2GameMode(); \
	friend CONSOLE_DEV2_API class UClass* Z_Construct_UClass_AConsole_Dev2GameMode(); \
	public: \
	DECLARE_CLASS(AConsole_Dev2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Console_Dev2, NO_API) \
	DECLARE_SERIALIZER(AConsole_Dev2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AConsole_Dev2GameMode*>(this); }


#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConsole_Dev2GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConsole_Dev2GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConsole_Dev2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConsole_Dev2GameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AConsole_Dev2GameMode(const AConsole_Dev2GameMode& InCopy); \
public:


#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConsole_Dev2GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AConsole_Dev2GameMode(const AConsole_Dev2GameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConsole_Dev2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConsole_Dev2GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConsole_Dev2GameMode)


#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_11_PROLOG
#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_RPC_WRAPPERS \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_INCLASS \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_INCLASS_NO_PURE_DECLS \
	Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Console_Dev2_Source_Console_Dev2_Console_Dev2GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
