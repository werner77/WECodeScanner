//
//  WECodeScannerMatchView.h
//  WECodeScanner
//
//  Created by Werner Altewischer on 10/11/13.
//  Copyright (c) 2013 Werner IT Consultancy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WECodeScannerMatchView : UIView

@property (nonatomic, strong) UIColor *matchFoundColor;
@property (nonatomic, strong) UIColor *scanningColor;
@property (nonatomic, assign) CGFloat minMatchBoxHeight;

- (void)setFoundMatchWithTopLeftPoint:(CGPoint)topLeftPoint topRightPoint:(CGPoint)topRightPoint bottomLeftPoint:(CGPoint)bottomLeftPoint bottomRightPoint:(CGPoint)bottomRightPoint;
- (void)reset;

@end
