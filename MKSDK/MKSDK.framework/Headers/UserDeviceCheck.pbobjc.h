// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserDeviceCheck.proto

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

#pragma mark - UserDeviceCheckUserDeviceCheckRoot

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
@interface UserDeviceCheckUserDeviceCheckRoot : GPBRootObject
@end

#pragma mark - UserDeviceCheckRpcRequest

typedef GPB_ENUM(UserDeviceCheckRpcRequest_FieldNumber) {
  UserDeviceCheckRpcRequest_FieldNumber_AccessToken = 1,
  UserDeviceCheckRpcRequest_FieldNumber_DeviceId = 11,
};

/**
 * 请求方填写
 **/
@interface UserDeviceCheckRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@end

#pragma mark - UserDeviceCheckRpcResponse

typedef GPB_ENUM(UserDeviceCheckRpcResponse_FieldNumber) {
  UserDeviceCheckRpcResponse_FieldNumber_OwnerId = 1,
  UserDeviceCheckRpcResponse_FieldNumber_OwnerName = 2,
  UserDeviceCheckRpcResponse_FieldNumber_Online = 3,
  UserDeviceCheckRpcResponse_FieldNumber_ProdtCodeArray = 5,
  UserDeviceCheckRpcResponse_FieldNumber_NbiCodeArray = 6,
  UserDeviceCheckRpcResponse_FieldNumber_Pic1Fileid = 12,
  UserDeviceCheckRpcResponse_FieldNumber_Pic2Fileid = 13,
};

/**
 * 返回方填写
 **/
@interface UserDeviceCheckRpcResponse : GPBMessage

/** 该值为0表示没有被用户添加 */
@property(nonatomic, readwrite) uint32_t ownerId;

/** 如果被添加了，添加者账号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *ownerName;

/** 在离线状态 */
@property(nonatomic, readwrite) uint32_t online;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *prodtCodeArray;
/** The number of items in @c prodtCodeArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger prodtCodeArray_Count;

/**
 * 支持的接入网络方式: 支持的连接方式(北向接口)，
 * 可以多种: [1,11,3]
 * 1|RJ45
 * 11| WIFI 二维码配置网络; 12| WIFI AP配置网络; 13| WIFI 语音配置网络; 14| WIFI SmartLink配置网络
 * 3|2G/3G/4G/5G
 * 4|Zigbee
 * 5|BLE 蓝牙
 * 6|z-Wave
 * 7|RF433/315
 **/
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *nbiCodeArray;
/** The number of items in @c nbiCodeArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger nbiCodeArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *pic1Fileid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *pic2Fileid;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
