//
//  Document.h
//  Demo (Mac)
//
//  Created by Oliver Drobnik on 23.10.13.
//  Copyright (c) 2013 Cocoanetics. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument <NSTextDelegate>

@property (assign) NSInteger selectedPreviewTabIndex;

- (IBAction)changePreviewTabIndex:(id)sender;

@end
