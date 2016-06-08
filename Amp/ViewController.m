//
//  ViewController.m
//  Amp
//
//  Created by Kenny Okagaki on 11/1/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//
#define TICK   NSDate *startTime = [NSDate date]
#define TOCK   NSLog(@"Time: %f", -[startTime timeIntervalSinceNow])

#import "ViewController.h"
#import "NHNetworkTime.h"

@interface ViewController ()
@property (strong, nonatomic) IBOutlet UILabel *NTPLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)ntpButtonTouch:(id)sender {
    NSLog(@"START TIME%@", [NSDate networkDate]);
    TICK;
    [[NHNetworkClock sharedNetworkClock] syncWithComplete:^{
        NSLog(@"%s - Time synced %@", __PRETTY_FUNCTION__, [NSDate networkDate]);
    }];
    TOCK;
    NSDate *now = [NSDate networkDate];
    self.NTPLabel.text = [NSDateFormatter localizedStringFromDate:now dateStyle:NSDateFormatterMediumStyle timeStyle:NSDateFormatterMediumStyle ];
}

@end
