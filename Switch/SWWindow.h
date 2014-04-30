//
//  SWWindow.h
//  Switch
//
//  Created by Scott Perry on 02/21/13.
//  Copyright © 2013 Scott Perry.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>


typedef NSPoint NNVec2;


@class SWApplication;


@interface SWWindow : NSObject <NSCopying>

+ (instancetype)windowWithDescription:(NSDictionary *)description;

@property (nonatomic, assign, readonly) CGWindowID windowID;
@property (nonatomic, strong, readonly) SWApplication *application;
@property (nonatomic, assign, readonly) NSRect frame;
- (CGRect)cartesianFrame;
@property (nonatomic, strong, readonly) NSString *name;
@property (atomic, copy, readonly) NSDictionary *windowDescription;

- (NSScreen *)screen;

- (BOOL)isRelatedToLowerWindow:(SWWindow *)window;
- (NNVec2)offsetOfCenterToCenterOfWindow:(SWWindow *)window;
- (NSSize)sizeDifferenceFromWindow:(SWWindow *)window;
- (BOOL)enclosedByWindow:(SWWindow *)window;

@end
