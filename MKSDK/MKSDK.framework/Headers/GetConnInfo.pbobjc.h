// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GetConnInfo.proto

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

@class GetConnInfoConnInfo;
@class GetConnInfoNatInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GetConnInfoGetConnInfoRoot

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
@interface GetConnInfoGetConnInfoRoot : GPBRootObject
@end

#pragma mark - GetConnInfoNatInfo

typedef GPB_ENUM(GetConnInfoNatInfo_FieldNumber) {
  GetConnInfoNatInfo_FieldNumber_UpnpStatus = 1,
  GetConnInfoNatInfo_FieldNumber_UpnpProto = 3,
  GetConnInfoNatInfo_FieldNumber_UpnpPort = 4,
  GetConnInfoNatInfo_FieldNumber_UpnpIpaddr = 5,
  GetConnInfoNatInfo_FieldNumber_NatType = 8,
  GetConnInfoNatInfo_FieldNumber_LocalIp = 10,
  GetConnInfoNatInfo_FieldNumber_LocalPort = 11,
  GetConnInfoNatInfo_FieldNumber_OutsideIp = 12,
  GetConnInfoNatInfo_FieldNumber_OutsidePort = 13,
};

@interface GetConnInfoNatInfo : GPBMessage

/** Upnp是否可用; 1 可用;0 不可用 */
@property(nonatomic, readwrite) int32_t upnpStatus;

/** upnp_status = 1 下列参数必须填写 */
@property(nonatomic, readwrite) int32_t upnpProto;

@property(nonatomic, readwrite) int32_t upnpPort;

@property(nonatomic, readwrite, copy, null_resettable) NSString *upnpIpaddr;

/**
 * 0, 不能访问外网; 1,外网地址;2,full cone;3, 受限 cone; 4, 端口受限;
 * 5, 对称NAT.;6, 外网IP地址变化 ;7, 不能使用UDP
 **/
@property(nonatomic, readwrite) int32_t natType;

/** 本地监听ip */
@property(nonatomic, readwrite, copy, null_resettable) NSString *localIp;

/**  本地监听port */
@property(nonatomic, readwrite) int32_t localPort;

/** 服务器用于判断是否更新信息--应该加上对本地监听ip的判断 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *outsideIp;

/** 该值没有意义 */
@property(nonatomic, readwrite) int32_t outsidePort;

@end

#pragma mark - GetConnInfoConnInfo

typedef GPB_ENUM(GetConnInfoConnInfo_FieldNumber) {
  GetConnInfoConnInfo_FieldNumber_DeviceId = 1,
  GetConnInfoConnInfo_FieldNumber_P2PServ = 3,
  GetConnInfoConnInfo_FieldNumber_P2PPortArray = 4,
  GetConnInfoConnInfo_FieldNumber_RelayServ = 5,
  GetConnInfoConnInfo_FieldNumber_RelayPortArray = 6,
  GetConnInfoConnInfo_FieldNumber_RelayProxyServ = 7,
  GetConnInfoConnInfo_FieldNumber_RelayProxyPortArray = 8,
  GetConnInfoConnInfo_FieldNumber_Nat = 10,
};

@interface GetConnInfoConnInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

/** 分配的P2P服务; */
@property(nonatomic, readwrite, copy, null_resettable) NSString *p2PServ;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *p2PPortArray;
/** The number of items in @c p2PPortArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger p2PPortArray_Count;

/** 分配的Relay服务; */
@property(nonatomic, readwrite, copy, null_resettable) NSString *relayServ;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *relayPortArray;
/** The number of items in @c relayPortArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger relayPortArray_Count;

/** 如果Relay需要代理，则设置代理服务 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *relayProxyServ;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *relayProxyPortArray;
/** The number of items in @c relayProxyPortArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger relayProxyPortArray_Count;

/** NAT信息 */
@property(nonatomic, readwrite, strong, null_resettable) GetConnInfoNatInfo *nat;
/** Test to see if @c nat has been set. */
@property(nonatomic, readwrite) BOOL hasNat;

@end

#pragma mark - GetConnInfoRpcRequest

typedef GPB_ENUM(GetConnInfoRpcRequest_FieldNumber) {
  GetConnInfoRpcRequest_FieldNumber_AuthType = 1,
  GetConnInfoRpcRequest_FieldNumber_DeviceId = 2,
  GetConnInfoRpcRequest_FieldNumber_DeviceSeckey = 3,
  GetConnInfoRpcRequest_FieldNumber_UserName = 4,
  GetConnInfoRpcRequest_FieldNumber_UserPass = 5,
  GetConnInfoRpcRequest_FieldNumber_DeviceIdsArray = 6,
};

@interface GetConnInfoRpcRequest : GPBMessage

/** 允许DeviceID询问，主要是为了保留设备之间互相连接 */
@property(nonatomic, readwrite) int32_t authType;

/** auth_type = 1 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceSeckey;

/** 用户手机号码 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

/** 密码MD5 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *userPass;

/** 需要获取的连接设备列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *deviceIdsArray;
/** The number of items in @c deviceIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger deviceIdsArray_Count;

@end

#pragma mark - GetConnInfoRpcResponse

typedef GPB_ENUM(GetConnInfoRpcResponse_FieldNumber) {
  GetConnInfoRpcResponse_FieldNumber_ConnsArray = 1,
};

/**
 * 返回方填写
 **/
@interface GetConnInfoRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GetConnInfoConnInfo*> *connsArray;
/** The number of items in @c connsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger connsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
