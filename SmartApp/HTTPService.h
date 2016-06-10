//
//  HTTPService.h
//  SmartApp
//
//  Created by Dide van Berkel on 16-05-16.
//  Copyright © 2016 Dide van Berkel. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSArray * __nullable dataArray, NSString * __nullable errMessage);

@interface HTTPService : NSObject

+(id) instance;
-(void) getTutorials:(nullable onComplete)completionHandler;

@end
