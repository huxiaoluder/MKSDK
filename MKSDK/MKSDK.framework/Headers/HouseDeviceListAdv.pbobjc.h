// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HouseDeviceListAdv.proto

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

@class HouseDeviceListAdvDeviceInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - HouseDeviceListAdvHouseDeviceListAdvRoot

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
@interface HouseDeviceListAdvHouseDeviceListAdvRoot : GPBRootObject
@end

#pragma mark - HouseDeviceListAdvDeviceInfo

typedef GPB_ENUM(HouseDeviceListAdvDeviceInfo_FieldNumber) {
  HouseDeviceListAdvDeviceInfo_FieldNumber_DeviceId = 1,
  HouseDeviceListAdvDeviceInfo_FieldNumber_DeviceName = 2,
  HouseDeviceListAdvDeviceInfo_FieldNumber_SubDeviceId = 3,
  HouseDeviceListAdvDeviceInfo_FieldNumber_HouseGuid = 4,
  HouseDeviceListAdvDeviceInfo_FieldNumber_AreaGuid = 5,
  HouseDeviceListAdvDeviceInfo_FieldNumber_ProdtTypeArray = 6,
  HouseDeviceListAdvDeviceInfo_FieldNumber_Online = 7,
  HouseDeviceListAdvDeviceInfo_FieldNumber_TimeStamp = 8,
  HouseDeviceListAdvDeviceInfo_FieldNumber_Conf = 10,
  HouseDeviceListAdvDeviceInfo_FieldNumber_OwnerId = 11,
  HouseDeviceListAdvDeviceInfo_FieldNumber_Pic1Fileid = 12,
  HouseDeviceListAdvDeviceInfo_FieldNumber_Pic2Fileid = 13,
  HouseDeviceListAdvDeviceInfo_FieldNumber_Pic3Fileid = 14,
};

@interface HouseDeviceListAdvDeviceInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subDeviceId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *areaGuid;

/** [当sub_device_id 为空时才设置该值]设备类别 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *prodtTypeArray;
/** The number of items in @c prodtTypeArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger prodtTypeArray_Count;

/** 1: offline ; 2: online */
@property(nonatomic, readwrite) uint32_t online;

/** 最后更新时间 */
@property(nonatomic, readwrite) int64_t timeStamp;

/**
 * 设备配置信息,每个 prodt_code对应的的配置信息参见: `device_confi.md`
 * add: 2018-0327 wbw
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *conf;

/** 设备属于谁 */
@property(nonatomic, readwrite) uint32_t ownerId;

/** 设备图片(3个尺寸,APP端可缓存) */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pic1Fileid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *pic2Fileid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *pic3Fileid;

@end

#pragma mark - HouseDeviceListAdvRpcRequest

typedef GPB_ENUM(HouseDeviceListAdvRpcRequest_FieldNumber) {
  HouseDeviceListAdvRpcRequest_FieldNumber_AccessToken = 1,
  HouseDeviceListAdvRpcRequest_FieldNumber_Page = 11,
  HouseDeviceListAdvRpcRequest_FieldNumber_PageSize = 12,
  HouseDeviceListAdvRpcRequest_FieldNumber_HouseGuid = 13,
  HouseDeviceListAdvRpcRequest_FieldNumber_AreaGuid = 14,
  HouseDeviceListAdvRpcRequest_FieldNumber_ProdtType = 15,
};

/**
 * 请求方填写
 **/
@interface HouseDeviceListAdvRpcRequest : GPBMessage

/** true; access_token */
@property(nonatomic, readwrite, copy, null_resettable) NSString *accessToken;

/**
 * 分页信息
 * page == 0 / page_size == 0 表示获取所有记录
 * true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 **/
@property(nonatomic, readwrite) uint32_t page;

/** true; 每页多少条数据 */
@property(nonatomic, readwrite) uint32_t pageSize;

/** 检索条件 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *houseGuid;

/** 可选 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *areaGuid;

/** 可选 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *prodtType;

@end

#pragma mark - HouseDeviceListAdvRpcResponse

typedef GPB_ENUM(HouseDeviceListAdvRpcResponse_FieldNumber) {
  HouseDeviceListAdvRpcResponse_FieldNumber_DevsArray = 11,
};

/**
 * 返回方填写
 **/
@interface HouseDeviceListAdvRpcResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<HouseDeviceListAdvDeviceInfo*> *devsArray;
/** The number of items in @c devsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger devsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
