//
//  SLayout.h
//  CheaperSeeker
//
//  Created by 滕 松 on 12-9-8.
//  Copyright (c) 2012年 shawnt22@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SStyle.h"
#import "Sconfiger.h"

@interface SLayout : NSObject
@property (nonatomic, assign) CGFloat height;
@end

@interface SCouponLayout : SLayout
@property (nonatomic, assign) CGRect icon;
@property (nonatomic, assign) CGRect title;
@property (nonatomic, assign) CGRect content;
@property (nonatomic, assign) CGRect expire;
- (void)layoutWithCoupon:(id)coupon Style:(SCouponStyle *)style;
@end