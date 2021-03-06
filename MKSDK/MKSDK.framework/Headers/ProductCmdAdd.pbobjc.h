// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProductCmdAdd.proto

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

@class ProductCmdAddCmdAns;
@class ProductCmdAddCmdInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ProductCmdAddProductCmdAddRoot

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
@interface ProductCmdAddProductCmdAddRoot : GPBRootObject
@end

#pragma mark - ProductCmdAddCmdInfo

typedef GPB_ENUM(ProductCmdAddCmdInfo_FieldNumber) {
  ProductCmdAddCmdInfo_FieldNumber_Cmdid = 13,
  ProductCmdAddCmdInfo_FieldNumber_CmdType = 14,
  ProductCmdAddCmdInfo_FieldNumber_ArgV = 15,
  ProductCmdAddCmdInfo_FieldNumber_ArgType = 16,
  ProductCmdAddCmdInfo_FieldNumber_ArgDetailEn = 17,
  ProductCmdAddCmdInfo_FieldNumber_ArgDetailCn = 18,
};

@interface ProductCmdAddCmdInfo : GPBMessage

@property(nonatomic, readwrite) uint32_t cmdid;

@property(nonatomic, readwrite) uint32_t cmdType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *argV;

@property(nonatomic, readwrite, copy, null_resettable) NSString *argType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *argDetailEn;

@property(nonatomic, readwrite, copy, null_resettable) NSString *argDetailCn;

@end

#pragma mark - ProductCmdAddCmdAns

typedef GPB_ENUM(ProductCmdAddCmdAns_FieldNumber) {
  ProductCmdAddCmdAns_FieldNumber_Cmdid = 11,
  ProductCmdAddCmdAns_FieldNumber_Code = 12,
  ProductCmdAddCmdAns_FieldNumber_CodeMsg = 13,
};

@interface ProductCmdAddCmdAns : GPBMessage

@property(nonatomic, readwrite) uint32_t cmdid;

/** 处理后的代码： 0 正确： 其余错误 */
@property(nonatomic, readwrite) uint32_t code;

/** 错误描述信息 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *codeMsg;

@end

#pragma mark - ProductCmdAddRpcRequest

typedef GPB_ENUM(ProductCmdAddRpcRequest_FieldNumber) {
  ProductCmdAddRpcRequest_FieldNumber_AccessToken = 1,
  ProductCmdAddRpcRequest_FieldNumber_ProductCode = 11,
  ProductCmdAddRpcRequest_FieldNumber_RomVer = 12,
  ProductCmdAddRpcRequest_FieldNumber_CmdsArray = 13,
};

/**
 * 请求方填写
 **/
@interface ProductCmdAddRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

@property(nonatomic, readwrite, copy, null_resettable) NSString *productCode;

@property(nonatomic, readwrite, copy, null_resettable) NSString *romVer;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProductCmdAddCmdInfo*> *cmdsArray;
/** The number of items in @c cmdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger cmdsArray_Count;

@end

#pragma mark - ProductCmdAddRpcResponse

typedef GPB_ENUM(ProductCmdAddRpcResponse_FieldNumber) {
  ProductCmdAddRpcResponse_FieldNumber_AnsArray = 11,
};

/**
 * 返回方填写
 **/
@interface ProductCmdAddRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ProductCmdAddCmdAns*> *ansArray;
/** The number of items in @c ansArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger ansArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
