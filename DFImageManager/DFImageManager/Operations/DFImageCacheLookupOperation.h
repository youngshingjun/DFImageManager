// The MIT License (MIT)
//
// Copyright (c) 2015 Alexander Grebenyuk (github.com/kean).
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

#import "DFImageManagerOperationProtocol.h"
#import <Foundation/Foundation.h>

@class DFCache;
@class DFImageRequestOptions;


@interface DFImageCacheLookupOperation : NSOperation <DFImageManagerOperation>

@property (nonatomic, readonly) id asset;
@property (nonatomic, readonly) DFImageRequestOptions *options;
@property (nonatomic, readonly) DFCache *cache;

@property (nonatomic, readonly) DFImageResponse *response;
@property (nonatomic, copy) NSString* (^cacheKeyForAsset)(id asset, DFImageRequestOptions *options);

- (instancetype)initWithAsset:(id)asset options:(DFImageRequestOptions *)options cache:(DFCache *)cache NS_DESIGNATED_INITIALIZER;

@end
