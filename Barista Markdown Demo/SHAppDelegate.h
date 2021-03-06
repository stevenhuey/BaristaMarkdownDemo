//
//  SHAppDelegate.h
//  Barista Markdown Demo
//
//  Created by Steven Huey on 9/8/13.
//  Copyright (c) 2013 Steven Huey. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SHAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *markdownPathField;
@property (weak) IBOutlet NSButton *chooseButton;
@property (weak) IBOutlet NSTextField *serverPortField;
@property (weak) IBOutlet NSProgressIndicator *progressSpinner;
@property (weak) IBOutlet NSTextField *progressLabel;
@property (weak) IBOutlet NSButton *startAndStopButton;

@property (nonatomic, assign) BOOL serverRunning;
@property (nonatomic, readonly) NSString* startAndStopButtonTitle;

- (IBAction)choose:(id)sender;
- (IBAction)startOrStopServer:(id)sender;
@end
