// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HouseAreaDeviceSet.proto

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

@class HouseAreaDeviceSetSetInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - HouseAreaDeviceSetHouseAreaDeviceSetRoot

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
@interface HouseAreaDeviceSetHouseAreaDeviceSetRoot : GPBRootObject
@end

#pragma mark - HouseAreaDeviceSetSetInfo

typedef GPB_ENUM(HouseAreaDeviceSetSetInfo_FieldNumber) {
  HouseAreaDeviceSetSetInfo_FieldNumber_DeviceId = 11,
  HouseAreaDeviceSetSetInfo_FieldNumber_SubDeviceId = 12,
  HouseAreaDeviceSetSetInfo_FieldNumber_AreaGuid = 13,
  HouseAreaDeviceSetSetInfo_FieldNumber_HouseGuid = 14,
};

@interface HouseAreaDeviceSetSetInfo : GPBMessage

/**
 * 1, 从 area_guid 获得 house_guid;
 * 2, 如果记录已经存在，则改变记录的值: area_guid
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subDeviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *areaGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

@end

#pragma mark - HouseAreaDeviceSetRpcRequest

typedef GPB_ENUM(HouseAreaDeviceSetRpcRequest_FieldNumber) {
  HouseAreaDeviceSetRpcRequest_FieldNumber_AccessToken = 1,
  HouseAreaDeviceSetRpcRequest_FieldNumber_SetsArray = 10,
};

/**
 * 请求方填写
 **/
@interface HouseAreaDeviceSetRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<HouseAreaDeviceSetSetInfo*> *setsArray;
/** The number of items in @c setsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger setsArray_Count;

@end

#pragma mark - HouseAreaDeviceSetRpcResponse

/**
 * 返回方填写
 **/
@interface HouseAreaDeviceSetRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)