//
//  GLAppDelegate.h
//  GL
//
//  Created by Tikue Anazodo on 10/6/11.
//  Copyright 2011 6005 185th CT NE. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface GLAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
