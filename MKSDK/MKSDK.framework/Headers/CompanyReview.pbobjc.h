// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CompanyReview.proto

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

#pragma mark - CompanyReviewCompanyReviewRoot

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
@interface CompanyReviewCompanyReviewRoot : GPBRootObject
@end

#pragma mark - CompanyReviewRpcRequest

typedef GPB_ENUM(CompanyReviewRpcRequest_FieldNumber) {
  CompanyReviewRpcRequest_FieldNumber_AccessToken = 1,
  CompanyReviewRpcRequest_FieldNumber_CompanyCode = 11,
  CompanyReviewRpcRequest_FieldNumber_IsReview = 21,
  CompanyReviewRpcRequest_FieldNumber_ReviewMark = 22,
};

/**
 * 请求方填写
 **/
@interface CompanyReviewRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/** true; 公司唯一代码 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *companyCode;

/** true; 审核状态; 0, 等待审核；1， 审核通过；2，审核拒绝 */
@property(nonatomic, readwrite) uint32_t isReview;

/** false; is_review=2 该处必须有值. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *reviewMark;

@end

#pragma mark - CompanyReviewRpcResponse

typedef GPB_ENUM(CompanyReviewRpcResponse_FieldNumber) {
  CompanyReviewRpcResponse_FieldNumber_CompanyCode = 11,
};

/**
 * 返回方填写
 **/
@interface CompanyReviewRpcResponse : GPBMessage

/** true; 公司编号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *companyCode;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
