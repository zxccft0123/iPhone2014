//
//  ViewController.h
//  CrossGroove
//
//  Created by 陈晓强 on 14/12/21.
//  Copyright (c) 2014年 陈晓强. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate,NSURLConnectionDelegate>
@property (weak, nonatomic) IBOutlet UITextField *username;
@property (weak, nonatomic) IBOutlet UITextField *password;

@end

