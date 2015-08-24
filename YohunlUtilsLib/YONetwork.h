//
//  YONetwork.h
//  YohunlUtilsLib
//
//  Created by lingyohunl on 15/8/24.
//  Copyright (c) 2015年 yohunl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YONetwork : NSObject
/**
 *  获取github上用户的repo
 *
 *  @param user    用户名
 *  @param success 成功的回调
 *  @param failure 失败的回调
 */
- (void)getGithubReposForUser:(NSString*)user withSuccess:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;


/**
 *  测试 getGithubReposForUser:withSuccess:failure 的
 */
- (void)test;
@end
