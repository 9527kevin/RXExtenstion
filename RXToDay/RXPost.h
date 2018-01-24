//
//  RXPost.h
//  RXExtenstion
//
//  Created by srx on 16/7/14.
//  Copyright © 2016年 https://github.com/srxboys. All rights reserved.
//

// 完整项目 demo https://github.com/srxboys/RXTodayDemo

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RXPost : NSObject
- (void)postReqeustCompletion:(void (^)(NSArray * array, BOOL isError))completion;
- (NSArray *)getDataFromeLocalPost;
- (void)removeLocalPost;
@end
