//
// Copyright (c) 2013-2014 Evadne Wu and Nicholas Levin
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// Contains contributions from Nam Kennic
//

#import <Accelerate/Accelerate.h>
#import <QuartzCore/QuartzCore.h>
#import "LFDisplayBridge.h"

@interface LFGlassLayer : CALayer <LFDisplayBridgeTriggering>

@property (nonatomic, assign) CGFloat blurRadius;
@property (nonatomic, assign) CGFloat scaleFactor;

@property (nonatomic, assign) NSUInteger frameInterval;

- (BOOL) blurOnceIfPossible;

// optional properties for greater customization
@property (nonatomic, weak) CALayer *customBlurTargetLayer;
@property (nonatomic, assign) CGRect customBlurBounds;
@property (nonatomic, assign) CGPoint customBlurPosition;
@property (nonatomic, assign) CGPoint customBlurAnchorPoint;
@property (nonatomic, assign) CGRect customBlurFrame;

- (void) resetCustomPositioning;

@end