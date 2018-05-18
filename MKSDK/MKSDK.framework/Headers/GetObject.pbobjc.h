// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GetObject.proto

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

@class GetObjectObjectInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - GetObjectGetObjectRoot

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
@interface GetObjectGetObjectRoot : GPBRootObject
@end

#pragma mark - GetObjectObjectInfo

typedef GPB_ENUM(GetObjectObjectInfo_FieldNumber) {
  GetObjectObjectInfo_FieldNumber_FileId = 1,
  GetObjectObjectInfo_FieldNumber_Name = 2,
  GetObjectObjectInfo_FieldNumber_TagsArray = 3,
  GetObjectObjectInfo_FieldNumber_Md5 = 4,
  GetObjectObjectInfo_FieldNumber_Size = 5,
  GetObjectObjectInfo_FieldNumber_URL = 6,
  GetObjectObjectInfo_FieldNumber_LastTime = 7,
};

@interface GetObjectObjectInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fileId;

/** 文件名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** 该文件的标签 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *tagsArray;
/** The number of items in @c tagsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger tagsArray_Count;

/** 文件MD5 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *md5;

/** 文件大小 */
@property(nonatomic, readwrite) int32_t size;

/**
 * 文件内容的URL
 * bytes body = 15;
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

/** 文件更改时间(Sec) */
@property(nonatomic, readwrite) int64_t lastTime;

@end

#pragma mark - GetObjectRpcRequest

typedef GPB_ENUM(GetObjectRpcRequest_FieldNumber) {
  GetObjectRpcRequest_FieldNumber_AccessToken = 1,
  GetObjectRpcRequest_FieldNumber_FileIdsArray = 10,
};

/**
 * 请求方填写
 **/
@interface GetObjectRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** 文件ID */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *fileIdsArray;
/** The number of items in @c fileIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger fileIdsArray_Count;

@end

#pragma mark - GetObjectRpcResponse

typedef GPB_ENUM(GetObjectRpcResponse_FieldNumber) {
  GetObjectRpcResponse_FieldNumber_ObjsArray = 1,
};

/**
 * 返回方填写
 **/
@interface GetObjectRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GetObjectObjectInfo*> *objsArray;
/** The number of items in @c objsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger objsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)