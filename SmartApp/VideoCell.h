//
//  VideoCell.h
//  SmartApp
//
//  Created by Dide van Berkel on 07-06-16.
//  Copyright © 2016 Dide van Berkel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Video;

@interface VideoCell : UITableViewCell
-(void)updateUI:(nonnull Video*)video;
@end
