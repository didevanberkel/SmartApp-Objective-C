//
//  Video.h
//  SmartApp
//
//  Created by Dide van Berkel on 08-06-16.
//  Copyright © 2016 Dide van Berkel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(nonatomic, strong) NSString *videoTitle;
@property(nonatomic, strong) NSString *videoDescription;
@property(nonatomic, strong) NSString *videoIframe;
@property(nonatomic, strong) NSString *thumbnailUrl;
@end
