//
//  TDSession.h
//  Amp
//
//  Created by Kenny Okagaki on 11/20/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TDSession, MCPeerID, MCBrowserViewController;
@protocol TDSessionDelegate <NSObject>

- (void)session:(TDSession *)session didReceiveAudioStream:(NSInputStream *)stream;
- (void)session:(TDSession *)session didReceiveData:(NSData *)data;

@end

@interface TDSession : NSObject

@property (weak, nonatomic) id<TDSessionDelegate> delegate;

- (instancetype)initWithPeerDisplayName:(NSString *)name;

- (void)startAdvertisingForServiceType:(NSString *)type discoveryInfo:(NSDictionary *)info;
- (void)stopAdvertising;
- (MCBrowserViewController *)browserViewControllerForSeriviceType:(NSString *)type;

- (NSArray *)connectedPeers;
- (NSOutputStream *)outputStreamForPeer:(MCPeerID *)peer;

- (void)sendData:(NSData *)data;

@end
