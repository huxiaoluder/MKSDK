// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PutObject.proto

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

#pragma mark - PutObjectPutObjectRoot

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
@interface PutObjectPutObjectRoot : GPBRootObject
@end

#pragma mark - PutObjectRpcRequest

typedef GPB_ENUM(PutObjectRpcRequest_FieldNumber) {
  PutObjectRpcRequest_FieldNumber_AccessToken = 1,
  PutObjectRpcRequest_FieldNumber_FileId = 10,
  PutObjectRpcRequest_FieldNumber_Name = 11,
  PutObjectRpcRequest_FieldNumber_TagsArray = 12,
  PutObjectRpcRequest_FieldNumber_Md5 = 13,
  PutObjectRpcRequest_FieldNumber_Size = 14,
  PutObjectRpcRequest_FieldNumber_Body = 15,
};

/**
 * 请求方填写
 **/
@interface PutObjectRpcRequest : GPBMessage

/** true;平台申请 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** 文件ID */
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

/** 文件内容2进制 */
@property(nonatomic, readwrite, copy, null_resettable) NSData *body;

@end

#pragma mark - PutObjectRpcResponse

typedef GPB_ENUM(PutObjectRpcResponse_FieldNumber) {
  PutObjectRpcResponse_FieldNumber_FileId = 11,
};

/**
 * 返回方填写
 **/
@interface PutObjectRpcResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *fileId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
