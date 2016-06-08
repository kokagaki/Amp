//
//  FileViewController.h
//  Amp
//
//  Created by Kenny Okagaki on 11/3/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UITableView *tblFiles;

@end
