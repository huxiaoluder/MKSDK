//
//  MKViewController.m
//  MKSDK
//
//  Created by Xiaoming on 05/17/2018.
//  Copyright (c) 2018 Xiaoming. All rights reserved.
//

#import "MKViewController.h"
#import <MKSDK/MKSDK.h>

@interface MKViewController ()

@end

@implementation MKViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [NetworkTool userLoginWithUserName:@"86-18801381344" password:@"123456" handler:^(UserLoginRpcResponse * _Nullable response, NSString * _Nullable error) {
        if (!error) {
            
        } else {
            
        }
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
