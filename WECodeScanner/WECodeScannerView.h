//
//  WECodeScannerView.h
//  WECodeScanner
//
//  Created by Werner Altewischer on 10/11/13.
//  Copyright (c) 2013 Werner IT Consultancy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WECodeScannerView;

@protocol WECodeScannerViewDelegate < NSObject >

- (void)scannerView:(WECodeScannerView *)scannerView didReadCode:(NSString*)code;

@optional
- (void)scannerViewDidStartScanning:(WECodeScannerView *)scannerView;
- (void)scannerViewDidStopScanning:(WECodeScannerView *)scannerView;

@end

@interface WECodeScannerView : UIView

@property (nonatomic, weak) id <WECodeScannerViewDelegate> delegate;
@property (nonatomic, assign) NSTimeInterval quietPeriodAfterMatch;

- (void)setMetadataObjectTypes:(NSArray *)metaDataObjectTypes;
- (void)start;
- (void)stop;

@end
