// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HouseDefenseModeSet.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - HouseDefenseModeSetHouseDefenseModeSetRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface HouseDefenseModeSetHouseDefenseModeSetRoot : GPBRootObject
@end

#pragma mark - HouseDefenseModeSetRpcRequest

typedef GPB_ENUM(HouseDefenseModeSetRpcRequest_FieldNumber) {
  HouseDefenseModeSetRpcRequest_FieldNumber_AccessToken = 1,
  HouseDefenseModeSetRpcRequest_FieldNumber_HouseGuid = 5,
  HouseDefenseModeSetRpcRequest_FieldNumber_DefenseType = 6,
};

/**
 * 请求方填写
 **/
@interface HouseDefenseModeSetRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

/** 布防类型: 1 .外出布防；2.在家布防；3.撤防 */
@property(nonatomic, readwrite) uint32_t defenseType;

@end

#pragma mark - HouseDefenseModeSetRpcResponse

/**
 * 返回方填写
 **/
@interface HouseDefenseModeSetRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
