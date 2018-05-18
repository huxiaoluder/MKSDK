// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserConfigGet.proto

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

@class UserConfigGetAreaConf;
@class UserConfigGetHouseConf;
@class UserConfigGetSceneConf;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - UserConfigGetUserConfigGetRoot

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
@interface UserConfigGetUserConfigGetRoot : GPBRootObject
@end

#pragma mark - UserConfigGetAreaConf

typedef GPB_ENUM(UserConfigGetAreaConf_FieldNumber) {
  UserConfigGetAreaConf_FieldNumber_AreaGuid = 1,
  UserConfigGetAreaConf_FieldNumber_ResId = 3,
};

@interface UserConfigGetAreaConf : GPBMessage

/** 区域编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *areaGuid;

/** 使用资源编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *resId;

@end

#pragma mark - UserConfigGetSceneConf

typedef GPB_ENUM(UserConfigGetSceneConf_FieldNumber) {
  UserConfigGetSceneConf_FieldNumber_SceneId = 1,
  UserConfigGetSceneConf_FieldNumber_ResId = 3,
};

@interface UserConfigGetSceneConf : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *sceneId;

/** 使用资源编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *resId;

@end

#pragma mark - UserConfigGetHouseConf

typedef GPB_ENUM(UserConfigGetHouseConf_FieldNumber) {
  UserConfigGetHouseConf_FieldNumber_HouseGuid = 1,
  UserConfigGetHouseConf_FieldNumber_AreasArray = 2,
  UserConfigGetHouseConf_FieldNumber_ScenesArray = 3,
  UserConfigGetHouseConf_FieldNumber_HouseResid = 4,
};

@interface UserConfigGetHouseConf : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigGetAreaConf*> *areasArray;
/** The number of items in @c areasArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger areasArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigGetSceneConf*> *scenesArray;
/** The number of items in @c scenesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger scenesArray_Count;

/** 家庭使用资源ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *houseResid;

@end

#pragma mark - UserConfigGetRpcRequest

typedef GPB_ENUM(UserConfigGetRpcRequest_FieldNumber) {
  UserConfigGetRpcRequest_FieldNumber_AccessToken = 1,
};

/**
 * 请求方填写
 **/
@interface UserConfigGetRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@end

#pragma mark - UserConfigGetRpcResponse

typedef GPB_ENUM(UserConfigGetRpcResponse_FieldNumber) {
  UserConfigGetRpcResponse_FieldNumber_AppLang = 5,
  UserConfigGetRpcResponse_FieldNumber_HousesArray = 6,
  UserConfigGetRpcResponse_FieldNumber_SkinId = 7,
};

/**
 * 返回方填写
 **/
@interface UserConfigGetRpcResponse : GPBMessage

/** true; APP使用语言 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *appLang;

/** House配置信息 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigGetHouseConf*> *housesArray;
/** The number of items in @c housesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger housesArray_Count;

/** APP使用资源皮肤 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *skinId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
