// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EventRuleAdd.proto

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

@class iot_commExprInfo;
@class iot_commRhsInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - EventRuleAddEventRuleAddRoot

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
@interface EventRuleAddEventRuleAddRoot : GPBRootObject
@end

#pragma mark - EventRuleAddRpcRequest

typedef GPB_ENUM(EventRuleAddRpcRequest_FieldNumber) {
  EventRuleAddRpcRequest_FieldNumber_AccessToken = 1,
  EventRuleAddRpcRequest_FieldNumber_HouseGuid = 9,
  EventRuleAddRpcRequest_FieldNumber_DeviceId = 10,
  EventRuleAddRpcRequest_FieldNumber_EtName = 11,
  EventRuleAddRpcRequest_FieldNumber_Prio = 12,
  EventRuleAddRpcRequest_FieldNumber_Enable = 13,
  EventRuleAddRpcRequest_FieldNumber_OnlyTime = 14,
  EventRuleAddRpcRequest_FieldNumber_Lhs = 15,
  EventRuleAddRpcRequest_FieldNumber_ExprsArray = 16,
  EventRuleAddRpcRequest_FieldNumber_RhsArray = 17,
  EventRuleAddRpcRequest_FieldNumber_IsEnd = 18,
};

/**
 * 请求方填写
 **/
@interface EventRuleAddRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *etName;

@property(nonatomic, readwrite) int32_t prio;

@property(nonatomic, readwrite) int32_t enable;

@property(nonatomic, readwrite) int32_t onlyTime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *lhs;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<iot_commExprInfo*> *exprsArray;
/** The number of items in @c exprsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger exprsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<iot_commRhsInfo*> *rhsArray;
/** The number of items in @c rhsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger rhsArray_Count;

@property(nonatomic, readwrite) int32_t isEnd;

@end

#pragma mark - EventRuleAddRpcResponse

typedef GPB_ENUM(EventRuleAddRpcResponse_FieldNumber) {
  EventRuleAddRpcResponse_FieldNumber_EtId = 11,
};

/**
 * 返回方填写
 **/
@interface EventRuleAddRpcResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *etId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
