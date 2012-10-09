//
//  SAboutCell.h
//  CheaperSeeker
//
//  Created by 滕 松 on 12-10-9.
//  Copyright (c) 2012年 shawnt22@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCustomBGCell.h"
#import "Util.h"
#import "SUtil.h"
#import "Sconfiger.h"

@interface SAboutCell : UITableViewCell

+ (CGFloat)cellHeight;
- (void)refreshWithTitle:(NSString *)title;

@end