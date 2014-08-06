//  AFHTTPRequestOperationManager+SingleBlock.h
//
// Copyright (c) 2014 Stefano Acerbetti
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


#import "AFHTTPRequestOperationManager.h"

@interface AFHTTPRequestOperation (SingleBlock)

- (void)setCompletionSingleBlock:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

@end

#pragma mark -

@interface AFHTTPRequestOperationManager (SingleBlock)

- (AFHTTPRequestOperation *)HTTPRequestOperationWithRequest:(NSURLRequest *)request
                                                   complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;


- (AFHTTPRequestOperation *)GET:(NSString *)URLString
                     parameters:(id)parameters
                       complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)HEAD:(NSString *)URLString
                      parameters:(id)parameters
                        complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)POST:(NSString *)URLString
                      parameters:(id)parameters
                        complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)POST:(NSString *)URLString
                      parameters:(id)parameters
       constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block
                        complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)PUT:(NSString *)URLString
                     parameters:(id)parameters
                       complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)PATCH:(NSString *)URLString
                       parameters:(id)parameters
                         complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;

- (AFHTTPRequestOperation *)DELETE:(NSString *)URLString
                        parameters:(id)parameters
                          complete:(void (^)(AFHTTPRequestOperation *operation, id responseObject, NSError *error))complete;
@end
