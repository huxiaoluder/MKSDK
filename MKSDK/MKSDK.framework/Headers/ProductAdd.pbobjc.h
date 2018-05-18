// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProductAdd.proto

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

#pragma mark - ProductAddProductAddRoot

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
@interface ProductAddProductAddRoot : GPBRootObject
@end

#pragma mark - ProductAddRpcRequest

typedef GPB_ENUM(ProductAddRpcRequest_FieldNumber) {
  ProductAddRpcRequest_FieldNumber_AccessToken = 1,
  ProductAddRpcRequest_FieldNumber_ProductName = 11,
  ProductAddRpcRequest_FieldNumber_CompanyCode = 12,
  ProductAddRpcRequest_FieldNumber_Pic1Fileid = 13,
  ProductAddRpcRequest_FieldNumber_Pic2Fileid = 14,
  ProductAddRpcRequest_FieldNumber_Remark = 15,
  ProductAddRpcRequest_FieldNumber_NbiCodeArray = 16,
  ProductAddRpcRequest_FieldNumber_ProdtCodeArray = 17,
};

/**
 * 请求方填写
 **/
@interface ProductAddRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** true; 产品名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *productName;

/** true; 公司代码 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *companyCode;

/** true; 产品图片(文件ID) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pic1Fileid;

/** true; 产品图片(文件ID) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pic2Fileid;

/** false; 备注 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *remark;

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *nbiCodeArray;
/** The number of items in @c nbiCodeArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger nbiCodeArray_Count;

/** 多个，存放的是JSON数组 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *prodtCodeArray;
/** The number of items in @c prodtCodeArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger prodtCodeArray_Count;

@end

#pragma mark - ProductAddRpcResponse

typedef GPB_ENUM(ProductAddRpcResponse_FieldNumber) {
  ProductAddRpcResponse_FieldNumber_ProductCode = 11,
};

/**
 * 返回方填写
 **/
@interface ProductAddRpcResponse : GPBMessage

/** true; 产品唯一编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *productCode;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
