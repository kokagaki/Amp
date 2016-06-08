//
//  ntpViewController.h
//  Amp
//
//  Created by Kenny Okagaki on 11/23/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ios-ntp.h"

@interface ntpViewController : UIViewController <NetAssociationDelegate>

@property (weak, nonatomic) IBOutlet UILabel *  sysClockLabel;
@property (weak, nonatomic) IBOutlet UILabel *  netClockLabel;
@property (weak, nonatomic) IBOutlet UILabel *  offsetLabel;

@property (weak, nonatomic) IBOutlet UILabel *  timeCheckLabel;

@end