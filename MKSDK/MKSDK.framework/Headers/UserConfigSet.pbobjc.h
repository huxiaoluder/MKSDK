// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserConfigSet.proto

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

@class UserConfigSetAreaConf;
@class UserConfigSetHouseConf;
@class UserConfigSetSceneConf;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - UserConfigSetUserConfigSetRoot

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
@interface UserConfigSetUserConfigSetRoot : GPBRootObject
@end

#pragma mark - UserConfigSetAreaConf

typedef GPB_ENUM(UserConfigSetAreaConf_FieldNumber) {
  UserConfigSetAreaConf_FieldNumber_AreaGuid = 1,
  UserConfigSetAreaConf_FieldNumber_ResId = 3,
};

@interface UserConfigSetAreaConf : GPBMessage

/** 区域编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *areaGuid;

/** 使用资源编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *resId;

@end

#pragma mark - UserConfigSetSceneConf

typedef GPB_ENUM(UserConfigSetSceneConf_FieldNumber) {
  UserConfigSetSceneConf_FieldNumber_SceneId = 1,
  UserConfigSetSceneConf_FieldNumber_ResId = 3,
};

@interface UserConfigSetSceneConf : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *sceneId;

/** 使用资源编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *resId;

@end

#pragma mark - UserConfigSetHouseConf

typedef GPB_ENUM(UserConfigSetHouseConf_FieldNumber) {
  UserConfigSetHouseConf_FieldNumber_HouseGuid = 1,
  UserConfigSetHouseConf_FieldNumber_AreasArray = 2,
  UserConfigSetHouseConf_FieldNumber_ScenesArray = 3,
  UserConfigSetHouseConf_FieldNumber_HouseResid = 4,
};

@interface UserConfigSetHouseConf : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigSetAreaConf*> *areasArray;
/** The number of items in @c areasArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger areasArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigSetSceneConf*> *scenesArray;
/** The number of items in @c scenesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger scenesArray_Count;

/** 家庭使用资源ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *houseResid;

@end

#pragma mark - UserConfigSetRpcRequest

typedef GPB_ENUM(UserConfigSetRpcRequest_FieldNumber) {
  UserConfigSetRpcRequest_FieldNumber_AccessToken = 1,
  UserConfigSetRpcRequest_FieldNumber_AppLang = 5,
  UserConfigSetRpcRequest_FieldNumber_HousesArray = 6,
  UserConfigSetRpcRequest_FieldNumber_SkinId = 7,
};

/**
 * 请求方填写
 **/
@interface UserConfigSetRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** true; APP使用语言 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *appLang;

/** House配置信息 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<UserConfigSetHouseConf*> *housesArray;
/** The number of items in @c housesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger housesArray_Count;

/** APP使用资源皮肤 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *skinId;

@end

#pragma mark - UserConfigSetRpcResponse

/**
 * 返回方填写
 **/
@interface UserConfigSetRpcResponse : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)