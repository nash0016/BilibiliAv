//
//  AvImageView.h
//  BiliBiliAv
//
//  Created by 邦泰联合 on 16/3/3.
//  Copyright © 2016年 hu yagang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImageView+YYWebImage.h"
#import "AVModel.h"
typedef void (^refreshBlock) ();
@interface AvImageView : UIView
//基础
@property(nonatomic,strong) UIImageView * imageView;
@property(nonatomic,strong) UILabel * avTitleLabel;
//分区通用
@property (nonatomic,strong) UIImageView * shadowBgView;
@property(nonatomic,strong) UIImageView * playImageView;
@property(nonatomic,strong) UIImageView * danmukuImageView;
@property(nonatomic,strong) UILabel * playNumLabel;
@property(nonatomic,strong) UILabel * danmukuNumLabel;
//番剧
@property(nonatomic,strong) UILabel * avDateLabel;

@property(nonatomic,strong) AVModelBody * dataBody;
@property (nonatomic,assign) BOOL isOpen3DTouch;
@property (nonatomic,assign) BOOL isLast;//是否是最后一个

@property (nonatomic,copy) refreshBlock refresh;
- (void) refreshCurrentCellWithBlock:(refreshBlock)blcok;
@end
