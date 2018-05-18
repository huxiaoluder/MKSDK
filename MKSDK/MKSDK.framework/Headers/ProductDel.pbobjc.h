// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProductDel.proto

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

#pragma mark - ProductDelProductDelRoot

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
@interface ProductDelProductDelRoot : GPBRootObject
@end

#pragma mark - ProductDelRpcRequest

typedef GPB_ENUM(ProductDelRpcRequest_FieldNumber) {
  ProductDelRpcRequest_FieldNumber_AccessToken = 1,
  ProductDelRpcRequest_FieldNumber_ProductCode = 10,
};

/**
 * 请求方填写
 **/
@interface ProductDelRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** true; 产品编号(条件) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *productCode;

@end

#pragma mark - ProductDelRpcResponse

typedef GPB_ENUM(ProductDelRpcResponse_FieldNumber) {
  ProductDelRpcResponse_FieldNumber_ProductCode = 11,
};

/**
 * 返回方填写
 **/
@interface ProductDelRpcResponse : GPBMessage

/** true; 产品唯一编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *productCode;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
