//
//  LoginView.h
//  FPKeychain
//
//  Created by 方世沛 on 2018/4/18.
//  Copyright © 2018年 方世沛. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginView : UIView

@property (readonly, nonatomic, strong) UITextField *userField;

@property (readonly, nonatomic, strong) UITextField *passwdField;

@property (readonly, nonatomic, strong) UIButton    *loginButton;
@end
