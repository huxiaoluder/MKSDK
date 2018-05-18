//
//  NetworkTool.h
//  SmartHome
//
//  Created by mysoul on 2018/1/26.
//  Copyright © 2018年 Nick. All rights reserved.
//

#import <Foundation/Foundation.h>

//用户
#import "UserLogin.pbobjc.h"
#import "UserReg.pbobjc.h"
#import "UserVcode.pbobjc.h"
#import "UserRefreshToken.pbobjc.h"
#import "UserLostPass.pbobjc.h"

//用户设备
#import "UserDeviceAdd.pbobjc.h"
#import "UserDeviceDel.pbobjc.h"
#import "UserDeviceEdit.pbobjc.h"
#import "UserDeviceList.pbobjc.h"
#import "UserDeviceListAdv.pbobjc.h"
#import "UserDeviceCheck.pbobjc.h"
//用户设备分享
#import "UserGetIdbyName.pbobjc.h"
#import "UserDeviceShareAdd.pbobjc.h"
#import "UserDeviceShareDel.pbobjc.h"
#import "UserDeviceShareList.pbobjc.h"
#import "UserDeviceShareAclSet.pbobjc.h"
#import "UserDeviceShareListByOwner.pbobjc.h"
//用户设备USE
#import "UserDeviceInfoGet.pbobjc.h"
//用户个人信息
#import "UserAttrSet.pbobjc.h"
#import "UserAttrGet.pbobjc.h"
#import "UserChangePass.pbobjc.h"
#import "UserPhoneChange.pbobjc.h"

//用户家人
#import "UserFrsadd.pbobjc.h"
#import "UserFrsconfirm.pbobjc.h"
#import "UserFrsdel.pbobjc.h"
#import "UserFrsedit.pbobjc.h"
#import "UserFrslist.pbobjc.h"
#import "UserFrsremark.pbobjc.h"

//文件上传下载
#import "GetFileid.pbobjc.h"
#import "PutObject.pbobjc.h"
#import "GetObject.pbobjc.h"
#import "ListObject.pbobjc.h"

//用户家庭
#import "HouseAdd.pbobjc.h"
#import "HouseDel.pbobjc.h"
#import "HouseEdit.pbobjc.h"
#import "HouseList.pbobjc.h"
#import "HouseMemberList.pbobjc.h"
#import "HouseMemberQuit.pbobjc.h"
#import "HouseMemberApply.pbobjc.h"
#import "HouseMemberInvite.pbobjc.h"
#import "HouseMemberRemove.pbobjc.h"
#import "HouseMemberApplyConfirm.pbobjc.h"
#import "HouseMemberInviteConfirm.pbobjc.h"
#import "HouseAreaAdd.pbobjc.h"
#import "HouseAreaDel.pbobjc.h"
#import "HouseAreaEdit.pbobjc.h"
#import "HouseAreaList.pbobjc.h"
#import "HouseAreaDeviceDel.pbobjc.h"
#import "HouseAreaDeviceSet.pbobjc.h"
#import "HouseDeviceList.pbobjc.h"
#import "HouseDeviceListAdv.pbobjc.h"

//设备固件操作
#import "DeviceVerGet.pbobjc.h"
#import "DeviceStatusGet.pbobjc.h"

//情景列表
#import "SceneList.pbobjc.h"
#import "SceneAdd.pbobjc.h"
#import "SceneDel.pbobjc.h"
#import "SceneEdit.pbobjc.h"
#import "SceneActive.pbobjc.h"

//自动化
#import "IotComm.pbobjc.h"
#import "EventRuleAdd.pbobjc.h"
#import "EventRuleDel.pbobjc.h"
#import "EventRuleEdit.pbobjc.h"
#import "EventRuleSet.pbobjc.h"
#import "EventRuleList.pbobjc.h"

//设备操作
#import "DeviceRunIotcmd.pbobjc.h"
#import "DeviceStatusGet.pbobjc.h"

//用户config
#import "UserConfigSet.pbobjc.h"
#import "UserConfigGet.pbobjc.h"

//域名
#import "UserDnsQuery.pbobjc.h"

//消息
#import "GetMsg.pbobjc.h"


@interface NetworkTool : NSObject

@property (nonatomic,strong) NSMutableDictionary * _Nullable messageDic;

@property (nonatomic,copy) void(^ _Nullable Handler)(GPBMessage * _Nullable message,NSString * _Nonnull errorStr);

+ (void)configNetwork;

#pragma mark - 获取域名
/**
 获取域名

 @param hostArray 域名数组
 @param userName 用户名
 @param handler 回调
 */
+ (void)userDnsQueryWithHostArray:(NSMutableArray<NSString*> * _Nullable)hostArray userName:(NSString * _Nullable)userName handler:(void(^_Nullable)(UserDnsQueryRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 用户类型
/**
 新登录方法

 @param userName 用户名
 @param password 密码
 @param handler 回调
 */
+ (void)userLoginWithUserName:(NSString *_Nullable)userName password:(NSString *_Nullable)password handler:(void(^_Nullable)(UserLoginRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 忘记密码

 @param userName 用户名
 @param vcode 验证码
 @param newPass 新密码
 */
+ (void)userLostPassWithWithUserName:(NSString *_Nullable)userName vcode:(NSString *_Nullable)vcode newPass:(NSString *_Nullable)newPass handler:(void(^_Nullable)(UserLostPassRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 注册

 @param userName 用户名
 @param vcode 验证码
 @param textPass 密码
 @param handler 回调
 */
+ (void)userRegWithUserName:(NSString *_Nullable)userName vcode:(NSString *_Nullable)vcode textPass:(NSString *_Nullable)textPass handler:(void(^_Nullable)(UserRegRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 发送验证码

 @param userNameArray 用户名
 @param class_p 发送号码类别: 1，注册验证码; 2，找回密码; 3，更换手机
 @param handler 回调
 */
+ (void)userVcodeWithUserNameArray:(NSMutableArray<NSString *> *_Nullable)userNameArray class_p:(uint32_t)class_p handler:(void(^_Nullable)(UserVcodeRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 用户设备类型
#pragma mark --


/**
 获取设备信息

 @param deviceID 设备id
 @param handler 回调
 */
+ (void)checkDeviceInfoWithDeviceID:(NSString *_Nullable)deviceID handler:(void(^_Nullable)(UserDeviceCheckRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 添加用户设备

 @param deviceId 设备id
 @param deviceName 设备名
 @param handler 回调
 */
+ (void)userDeviceAddWithDeviceId:(NSString *_Nullable)deviceId deviceName:(NSString *_Nullable)deviceName handler:(void(^_Nullable)(UserDeviceAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除用户设备

 @param deviceId 设备id
 @param handler 回调
 */
+ (void)userDeviceDelWithDeviceId:(NSString *_Nullable)deviceId handler:(void(^_Nullable)(UserDeviceDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 编辑用户设备

 @param deviceId 设备id
 @param deviceName 设备名
 @param handler 回调
 */
+ (void)userDeviceEditWithDeviceId:(NSString *_Nullable)deviceId deviceName:(NSString *_Nullable)deviceName handler:(void(^_Nullable)(UserDeviceEditRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取用户设备列表

 @param page 分页信息;   page == 0 / page_size == 0 表示获取所有记录;   第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param pageSize 每页多少条数据
 @param handler 回调
 */
+ (void)userDeviceListWithPage:(uint32_t)page pageSize:(uint32_t)pageSize handler:(void(^_Nullable)(UserDeviceListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark --

/**
 获取其他用户的UserId
 
 @param userName 手机号
 @param handler 回调
 */
+ (void)userGetIDByName:(NSString *_Nullable)userName handler:(void(^_Nullable)(UserGetIDByNameRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 添加分享用户设备

 @param deviceId 设备id
 @param shareUserId 被分享用户id
 @param handler 回调
 */
+ (void)userDeviceShareAddWithDeviceId:(NSString *_Nullable)deviceId shareUserId:(uint32_t)shareUserId permission:(NSArray<NSNumber *> *_Nullable)permission handler:(void(^_Nullable)(UserDeviceShareAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除分享用户设备

 @param deviceId 设备id
 @param shareUserId 被分享用户id
 @param handler 回调
 */
+ (void)userDeviceShareDelWithDeviceId:(NSString *_Nullable)deviceId shareUserId:(uint32_t)shareUserId handler:(void(^_Nullable)(UserDeviceShareDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取已分享设备

 @param page 当前页
 @param pageSize 当前页大小
 @param shareUserId 可以为空,表示获取所有的其它用户给我的,否则获取特定用户
 @param handler 回调
 */
+ (void)userDeviceShareListWithPage:(uint32_t)page pageSize:(uint32_t)pageSize shareUserId:(uint32_t)shareUserId handler:(void(^_Nullable)(UserDeviceShareListRpcResponse *_Nullable response, NSString *_Nullable error))handler;


/**
 设置设备分享用户权限

 @param deviceId 设备 ID
 @param shareUserId  分享的用户 ID
 @param shareAclsArray 权限
 @param handler 回调
 */
+ (void)userDeviceShareAclSetWithDeviceId:(NSString *_Nullable)deviceId shareUserId:(uint32_t)shareUserId shareAclsArray:(GPBUInt32Array *_Nonnull)shareAclsArray handler:(void(^_Nullable)(UserDeviceShareAclSetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取已分享设备（自己）
 
 @param page 当前页
 @param pageSize 当前页大小
 @param handler 回调
 */
+ (void)userDeviceShareListWithPage:(uint32_t)page pageSize:(uint32_t)pageSize handler:(void(^_Nullable)(UserDeviceShareListByOwnerRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark --


/**
 获取我的设备列表

 @param page page == 0 / page_size == 0 表示获取所有记录
 @param pageSize 第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param prodtCode 设备类型
 @param listType 1, 只获取属于我的的设备; 2, 只获取别人分享给我的设备； 3，前面两种
 @param handler 回调
 */
+ (void)userDeviceListAdvWithPage:(uint32_t)page pageSize:(uint32_t)pageSize prodtCode:(NSString *_Nullable)prodtCode listType:(uint32_t)listType handler:(void(^_Nullable)(UserDeviceListAdvRpcResponse *_Nullable response, NSString *_Nullable error))handler;


/**
 获取设备详情

 @param deviceId 设备ID
 @param subDeviceId 子设备ID
 @param handler 回调
 */
+ (void)userDeviceInfoGetWithDeviceId:(NSString *_Nullable)deviceId subDeviceId:(NSString *_Nullable)subDeviceId handler:(void(^_Nullable)(UserDeviceInfoGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 用户个人信息
/**
 设置用户信息

 @param userId 被设置的用户id
 @param attrsArray 设置的信息数组
 @param handler 回调
 */
+ (void)userAttrSetWithUserId:(int)userId attrsArray:(NSMutableArray<UserAttrSetAttr*> *_Nullable)attrsArray handler:(void(^_Nullable)(UserAttrSetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取用户信息

 @param userIds 需要获得信息的用户id数组
 @param handler 回调
 */
+ (void)userAttrGetWithUserIds:(NSMutableArray<NSNumber *> *_Nullable)userIds handler:(void(^_Nullable)(UserAttrGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;


/**
 修改密码

 @param newPassword 新密码
 @param handler 回调
 */
+ (void)userChangePassWithNewPassword:(NSString *_Nullable)newPassword handler:(void(^_Nullable)(UserChangePassRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 修改手机号

 @param oldPhone 旧手机号
 @param oldVcode 旧手机号验证码
 @param newPhone 新手机号
 @param newVcode 新手机号验证码
 */
+ (void)userPhoneChangeWithOldPhone:(NSString *_Nullable)oldPhone oldVcode:(NSString *_Nullable)oldVcode newPhone:(NSString *_Nullable)newPhone newVcode:(NSString *_Nullable)newVcode handler:(void(^_Nullable)(UserPhoneChangeRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 用户家人类
/**
 添加家人成员

 @param relationUserName 被建立关系的用户ID
 @param relationCode 关系描述,通过相关字典接口`DictRelationGet`获得关系描述列表.
 @param handler 回调
 */
+ (void)userFRSAddWithRelationUserName:(NSString *_Nullable)relationUserName relationCode:(uint32_t)relationCode handler:(void(^_Nullable)(UserFRSAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 处理家人加入请求

 @param relationUserName 被建立关系的用户ID
 @param action 关系确认； 2，同意；3 拒绝  (被对方拒绝的关系可以再次编辑和申请)
 @param handler 回调
 */
+ (void)userFRSConfirmWithRelationUserName:(NSString *_Nullable)relationUserName action:(uint32_t)action handler:(void(^_Nullable)(UserFRSConfirmRpcResponse *_Nullable response, NSString *_Nullable error))handler;


/**
 删除家人

 @param relationUserName 被建立关系的用户ID
 @param handler 回调
 */
+ (void)userFRSDelWithRelationUserName:(NSString *_Nullable)relationUserName handler:(void(^_Nullable)(UserFRSDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 修改家人关系

 @param relationUserName 被建立关系的用户ID
 @param relationCode 关系描述 
 @param handler 回调
 */
+ (void)userFRSEditWithRelationUserName:(NSString *_Nullable)relationUserName relationCode:(uint32_t)relationCode handler:(void(^_Nullable)(UserFRSEditRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 家人列表

 @param handler 回调
 */
+ (void)userFRSListWithHandler:(void(^_Nullable)(UserFRSListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 修改家人备注

 @param userId 用户Id
 @param relationUserId 要修改的用户Id
 @param remark 备注名
 @param handler 回调
 */
+ (void)userFRSRemarkWithUserId:(uint32_t)userId relationUserId:(uint32_t)relationUserId remark:(NSString *_Nullable)remark handler:(void(^_Nullable)(UserFRSRemarkRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 文件上传下载
/**
 生成文件ID

 @param handler 回调
 */
+ (void)getFileidWithHandler:(void(^_Nullable)(GetFileidRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 上传文件

 @param fileId 文件ID
 @param name 文件名称
 @param tags 该文件的标签(暂时没用,不用传)
 @param md5 文件MD5
 @param size 文件大小
 @param body 文件内容2进制
 @param handler 回调
 */
+ (void)putObjectWithFileId:(NSString *_Nullable)fileId name:(NSString *_Nullable)name tags:(NSString *_Nullable)tags md5:(NSString *_Nullable)md5 size:(int32_t)size body:(NSData *_Nullable)body handler:(void(^_Nullable)(PutObjectRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 下载文件

 @param fileIdsArray 文件ID
 @param handler 回调
 */
+ (void)getObjectWithFileId:(NSArray<NSString *> *_Nullable)fileIdsArray handler:(void(^_Nullable)(GetObjectRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 家庭类
/**
 添加家庭

 @param houseName 家庭名称
 @param addrName 家庭地址
 @param longitude 经度
 @param latitude 纬度
 @param handler 回调
 */
+ (void)houseAddWithHouseName:(NSString *_Nullable)houseName
                     addrName:(NSString *_Nullable)addrName
                    longitude:(int)longitude
                     latitude:(int)latitude
                      handler:(void(^_Nullable)(HouseAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除家庭

 @param houseGuid 家庭id
 @param handler 回调
 */
+ (void)houseDelWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;


/**
 编辑家庭
 
 @param houseGuid 家庭Id
 @param houseName 家庭名称
 @param addrName 家庭地址
 @param longitude 经度
 @param latitude 纬度
 @param handler 回调
 */
+ (void)houseEditWithHouseGuid:(NSString *_Nullable)houseGuid
                     houseName:(NSString *_Nullable)houseName
                      addrName:(NSString *_Nullable)addrName
                     longitude:(int)longitude
                      latitude:(int)latitude
                       handler:(void(^_Nullable)(HouseEditRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取家庭列表
 
 @param houseGuid 家庭id (如果为空则获取所有家庭)
 @param handler 回调
 */
+ (void)houseListWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取家庭成员列表
 
 @param houseGuid 家庭id (如果为空则获取所有家庭)
 @param handler 回调
 */
+ (void)houseMemberListWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseMemberListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 退出家庭
 
 @param houseGuid 家庭id
 @param handler 回调
 */
+ (void)houseMemberQuitWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseMemberQuitRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 申请家庭
 
 @param houseGuid 家庭id
 @param handler 回调
 */
+ (void)houseMemberApplyWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseMemberApplyRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 邀请加入家庭
 
 @param houseGuid 家庭id
 @param inviteUserId 被邀请的用户id
 @param handler 回调
 */
+ (void)houseMemberInviteWithHouseGuid:(NSString *_Nullable)houseGuid inviteUserId:(int)inviteUserId handler:(void(^_Nullable)(HouseMemberInviteRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 将成员移出家庭
 
 @param houseGuid 家庭id
 @param userId 移除的用户id
 @param handler 回调
 */
+ (void)houseMemberRemoveWithHouseGuid:(NSString *_Nullable)houseGuid userId:(int)userId handler:(void(^_Nullable)(HouseMemberRemoveRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 用户加入家庭申请确认
 
 @param houseGuid 家庭id
 @param userId 申请的用户id
 @param action 11 确认加入; 12 拒绝加入
 @param handler 回调
 */
+ (void)houseMemberApplyConfirmWithHouseGuid:(NSString *_Nullable)houseGuid userId:(int)userId action:(int)action handler:(void(^_Nullable)(HouseMemberApplyConfirmRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 用户邀请加入家庭申请确认
 
 @param houseGuid 家庭id
 @param action 1 确认加入; 2 拒绝加入
 @param handler 回调
 */
+ (void)houseMemberInviteConfirmWithHouseGuid:(NSString *_Nullable)houseGuid action:(int)action handler:(void(^_Nullable)(HouseMemberInviteConfirmRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 添加家庭房间

 @param houseGuid 家庭id
 @param areaName 房间名称
 @param handler 回调
 */
+ (void)houseAreaAddWithHouseGuid:(NSString *_Nullable)houseGuid areaName:(NSString *_Nullable)areaName resId:(NSString *_Nullable)resId handler:(void(^_Nullable)(HouseAreaAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除家庭房间
 
 @param houseGuid 家庭id
 @param areaGuid 房间id
 @param handler 回调
 */
+ (void)houseAreaDelWithHouseGuid:(NSString *_Nullable)houseGuid areaGuid:(NSString *_Nullable)areaGuid handler:(void(^_Nullable)(HouseAreaDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 编辑家庭房间

 @param houseGuid 家庭id
 @param areaGuid 房间id
 @param areaName 房间名
 @param handler 回调
 */
+ (void)houseAreaEditWithHouseGuid:(NSString *_Nullable)houseGuid areaGuid:(NSString *_Nullable)areaGuid areaName:(NSString *_Nullable)areaName handler:(void(^_Nullable)(HouseAreaEditRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取家庭房间

 @param houseGuid 房间id
 @param handler 回调
 */
+ (void)houseAreaListWithHouseGuid:(NSString *_Nullable)houseGuid handler:(void(^_Nullable)(HouseAreaListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除房间设备

 @param houseGuid 家庭id
 @param areaGuid 房间id
 @param deviceId 设备id
 @param subDeviceId 设备子设备id
 @param handler 回调
 */
+ (void)houseAreaDeviceDelWithHouseGuid:(NSString *_Nullable)houseGuid
                               areaGuid:(NSString *_Nullable)areaGuid
                               deviceId:(NSString *_Nullable)deviceId
                            subDeviceId:(NSString *_Nullable)subDeviceId
                                handler:(void(^_Nullable)(HouseAreaDeviceDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 设置房间设备
 
 @param setsArray 设置设备
 @param handler 回调
 */
+ (void)houseAreaDeviceSetWithSetsArray:(NSMutableArray<HouseAreaDeviceSetSetInfo *> *_Nullable)setsArray
                                handler:(void(^_Nullable)(HouseAreaDeviceSetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取家庭房间设备

 @param houseGuid 家庭id
 @param areaGuid 房间id （可选）
 @param page 第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param pageSize 每页多少条数据
 @param prodtType 可选
 @param handler 回调
 */
+ (void)houseDeviceListWithHouseGuid:(NSString *_Nullable)houseGuid
                            areaGuid:(NSString *_Nullable)areaGuid
                                page:(int)page
                            pageSize:(int)pageSize
                           prodtType:(NSString *_Nullable)prodtType
                             handler:(void(^_Nullable)(HouseDeviceListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取家庭房间设备
 
 @param houseGuid 家庭id
 @param areaGuid 房间id （可选）
 @param page 第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param pageSize 每页多少条数据
 @param prodtType 可选
 @param handler 回调
 */
+ (void)houseDeviceListAdvWithHouseGuid:(NSString *_Nullable)houseGuid
                               areaGuid:(NSString *_Nullable)areaGuid
                                   page:(int)page
                               pageSize:(int)pageSize
                              prodtType:(NSString *_Nullable)prodtType
                                handler:(void(^_Nullable)(HouseDeviceListAdvRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 设备固件操作
/**
 获取固件版本

 @param queryArray 设备 ID 数据
 @param handler  回调
 */
+ (void)deviceVerGetWithQueryArray:(NSMutableArray<DeviceVerGetQueryInfo *> *_Nullable)queryArray
                         handler:(void(^_Nullable)(DeviceVerGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取固件更新信息

 @param devsArray 设备 ID 数据
 @param handler  回调
 */
+ (void)deviceStatusGetWithDevsArray:(NSMutableArray<DeviceStatusGetQueryInfo *> *_Nullable)devsArray
                            handler:(void(^_Nullable)(DeviceStatusGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 情景
/**
 获取家庭对应的情景列表

 @param houseGuid 家庭id
 @param page 第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param pageSize 每页多少条数据
 @param handler 回调
 */
+ (void)SceneListWithHouseGuid:(NSString *_Nullable)houseGuid
                          page:(int)page
                      pageSize:(int)pageSize
                       handler:(void(^_Nullable)(SceneListRpcResponse * _Nullable response, NSString * _Nullable error))handler;


/**
 添加情景

 @param houseGuid 家庭id
 @param sceneName 情景名
 @param cmd 命令
 @param sceneId 情景id
 @param resId 情景图标
 @param handler 回调
 */
+ (void)SceneAddWithHouseGuid:(NSString *_Nullable)houseGuid
                    sceneName:(NSString *_Nullable)sceneName
                          cmd:(iot_commIOTCMD *_Nullable)cmd
                      sceneId:(NSString *_Nullable)sceneId
                        resId:(NSString *_Nullable)resId
                      handler:(void (^ _Nullable)(SceneAddRpcResponse * _Nullable response, NSString * _Nullable error))handler ;

/**
 删除场景

 @param sceneId 场景id
 @param houseGuid 家庭id
 @param handler_Nullable 回调
 */
+ (void)SceneDelWithSceneId:(NSString *_Nullable)sceneId
                  houseGuid:(NSString *_Nullable)houseGuid
                    handler:(void (^ _Nullable)(SceneDelRpcResponse * _Nullable response, NSString * _Nullable error))handler_Nullable;

/**
 编辑场景

 @param sceneName 场景名
 @param cmd 设备动作命令集
 @param sceneId 场景id
 @param houseGuid 家庭id
 @param resId 情景图片名
 @param handler_Nullable 回调
 */
+ (void)SceneEditWithSceneName:(NSString *_Nullable)sceneName
                           cmd:(iot_commIOTCMD *_Nullable)cmd
                       sceneId:(NSString *_Nullable)sceneId
                     houseGuid:(NSString *_Nullable)houseGuid
                         resId:(NSString *_Nullable)resId
                       handler:(void (^ _Nullable)(SceneEditRpcResponse * _Nullable response, NSString * _Nullable error))handler_Nullable;

/**
 激活情景

 @param sceneId 情景id
 @param houseGuid 家庭id
 @param handler_Nullable 回调
 */
+ (void)sceneActiveWithSceneId:(NSString *_Nullable)sceneId
                     houseGuid:(NSString *_Nullable)houseGuid
                       handler:(void (^ _Nullable)(SceneActiveRpcResponse * _Nullable response, NSString * _Nullable error))handler_Nullable;

#pragma mark - 自动化
/**
 添加自动化规则

 @param houseGuid 家庭id
 @param deviceId 设备id（暂时填空）
 @param etName 规则名称
 @param lhs 未知（填空）
 @param prio 触发优先级(数字越小优先级越高),该数字唯一
 @param enable 是否启用: 1: 启用; 2：不启用
 @param onlyTime 条件是否只有时间规则(只有时间规则的用cron调用): 1 是；2 不是
 @param isEnd 未知（填0）
 @param exprsArray 条件数组
 @param rhsArray 动作数组
 @param handler 回调
 */
+ (void)eventRuleAddWithHouseGuid:(NSString * _Nullable)houseGuid
                         deviceId:(NSString * _Nullable)deviceId
                           etName:(NSString * _Nullable)etName
                              lhs:(NSString * _Nullable)lhs
                             prio:(int)prio
                           enable:(int)enable
                         onlyTime:(int)onlyTime
                            isEnd:(int)isEnd
                       exprsArray:(NSMutableArray<iot_commExprInfo*> * _Nullable)exprsArray
                         rhsArray:(NSMutableArray<iot_commRhsInfo*> * _Nullable)rhsArray
                          handler:(void(^_Nullable)(EventRuleAddRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 编辑自动化规则
 
 @param deviceId 设备id（暂时填空）
 @param etName 规则名称
 @param lhs 未知（填空）
 @param etId 规则id
 @param onlyTime 条件是否只有时间规则(只有时间规则的用cron调用): 1 是；2 不是
 @param isEnd 未知（填0）
 @param exprsArray 条件数组
 @param rhsArray 动作数组
 @param handler 回调
 */
+ (void)eventRuleEditWithDeviceId:(NSString * _Nullable)deviceId
                            etName:(NSString * _Nullable)etName
                               lhs:(NSString * _Nullable)lhs
                              etId:(NSString * _Nullable)etId
                          onlyTime:(int)onlyTime
                             isEnd:(int)isEnd
                        exprsArray:(NSMutableArray<iot_commExprInfo*> * _Nullable)exprsArray
                          rhsArray:(NSMutableArray<iot_commRhsInfo*> * _Nullable)rhsArray
                           handler:(void(^_Nullable)(EventRuleEditRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 删除自动化规则

 @param etId 规则id
 @param handler 回调
 */
+ (void)eventRuleDelWithEtId:(NSString * _Nullable)etId handler:(void(^_Nullable)(EventRuleDelRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取自动化规则列表

 @param page 页数
 @param pageSize 每页大小
 @param houseGuid 家庭id
 @param handler 回调
 */
+ (void)eventRuleListWithPage:(int)page
                     pageSize:(int)pageSize
                    houseGuid:(NSString * _Nullable)houseGuid
                      handler:(void(^_Nullable)(EventRuleListRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 修改自动化状态和优先级

 @param eventId 自动化规则 ID
 @param setType 状态 1 状态, 2 优先级
 @param setValue 状态(1 开启, 2关闭)
 @param handler  回调
 */
+ (void)eventRuleSetWithEventId:(NSString * _Nullable)eventId
                        setType:(int)setType
                       setValue:(int)setValue
                        handler:(void(^_Nullable)(EventRuleSetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark 设备操作<GRPC命令>

/**
  获取设备当前状态信息
 
 @param devsArray 设备数组
 @param handler 回调
 */
+ (void)deviceStatusGetWithDeviceArr:(NSMutableArray * _Nullable)devsArray
                             handler:(void(^_Nullable)(DeviceStatusGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 执行设备的某项操作

 @param cmd  操作对应的命令
 @param handler 回调
 */
+ (void)deviceRunIOTCmdWithCMD:(iot_commIOTCMD * _Nullable)cmd
                       handler:(void(^_Nullable)(DeviceRunIOTCmdRpcResponse *_Nullable response, NSString *_Nullable error))handler;

#pragma mark - 用户config
/**
 获取用户配置

 @param handler 回调
 */
+ (void)userConfigGetHandler:(void(^_Nullable)(UserConfigGetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 设置用户配置

 @param appLang 使用语言
 @param housesArray 家庭配置
 @param skinId 皮肤
 @param handler 回调
 */
+ (void)userConfigSetWithLang:(NSString * _Nullable)appLang
                  housesArray:(NSMutableArray<UserConfigSetHouseConf*> * _Nullable)housesArray
                       skinId:(NSString * _Nullable)skinId
                      handler:(void(^_Nullable)(UserConfigSetRpcResponse *_Nullable response, NSString *_Nullable error))handler;

/**
 获取设备消息

 @param page true;第几页数据，数据是按照默认排序从 (page-1) * page_size 到 page * page_size 之间的数据
 @param pageSize 每页多少条数据
 @param deviceId 设备Id
 @param subDeviceId subDeviceId
 @param handler 回调
 */
+ (void)getMsgWithPage:(int)page
              pageSize:(int)pageSize
              deviceId:(NSString *_Nullable)deviceId
           subDeviceId:(NSString *_Nullable)subDeviceId
               handler:(void(^_Nullable)(GetMsgRpcResponse *_Nullable response, NSString *_Nullable error))handler;

@end
