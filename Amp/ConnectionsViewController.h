//
//  ConnectionsViewController.h
//  Amp
//
//  Created by Kenny Okagaki on 11/3/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>


@interface ConnectionsViewController : UIViewController <MCBrowserViewControllerDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

@end
