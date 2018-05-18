//
//  Md5.h
//  grpc_demo
//
//  Created by mysoul on 2018/1/25.
//  Copyright © 2018年 mysoul. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Md5Tool : NSObject

+(NSString *)md5:(NSString *)inPutText;

+(NSString *)getMd5ByData:(NSData *)data;

@end
