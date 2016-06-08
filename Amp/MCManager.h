//
//  MCManager.h
//  Amp
//
//  Created by Kenny Okagaki on 11/3/15.
//  Copyright (c) 2015 CS144. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface MCManager : NSObject <MCSessionDelegate>
//represents the device
@property (nonatomic, strong) MCPeerID *peerID;

// represents the session that the current peer (the device that this app will run) will create
@property (nonatomic, strong) MCSession *session;

//representing the default UI provided by Apple for browsing for other peers
@property (nonatomic, strong) MCBrowserViewController *browser;

//used from the current peer to advertise itself
@property (nonatomic, strong) MCAdvertiserAssistant *advertiser;

-(void)setupPeerAndSessionWithDisplayName:(NSString *)displayName;
-(void)setupMCBrowser;
-(void)advertiseSelf:(BOOL)shouldAdvertise;

@end
