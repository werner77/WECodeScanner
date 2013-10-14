//
//  WESoundHelper.h
//  WECodeScanner
//
//  Created by Werner Altewischer on 10/14/13.
//  Copyright (c) 2013 Werner IT Consultancy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WESoundHelper : NSObject

+ (void)clearSoundCache;
+ (void)playSoundFromURL:(NSURL *)soundFileURL asAlert:(BOOL)alert;
+ (void)playSoundFromFile:(NSString *)soundFileName fromBundle:(NSBundle *)bundle asAlert:(BOOL)alert;

@end
