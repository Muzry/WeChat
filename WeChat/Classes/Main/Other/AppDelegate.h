//
//  AppDelegate.h
//  WeChat
//
//  Created by LiDan on 15/10/3.
//  Copyright © 2015年 com.lidan. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum
{
    XMPPResultTypeLoginSuccess,//登陆成功
    XMPPResultTypeLoginFailure,// 登录失败
    XMPPResultTypeNetErr //网络问题
}XMPPResultType;
typedef void (^XMPPResultBlock)(XMPPResultType type);

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

//用户登陆
-(void)userLogin:(XMPPResultBlock )resultBlock;
-(void)userLogout;
@end

