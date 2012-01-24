//
//  DrawnBubbleView.h
//  BubbleView
//
//  Created by Mikael Hallendal on 2011-02-19.
//  Copyright 2011 Mikael Hallendal. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MHDrawnBubbleView : UIView {

@private
    CGRect _activationFrame;
}
@property(nonatomic, strong) UIColor *gradientStartColor;
@property(nonatomic, strong) UIColor *gradientEndColor;
@property(nonatomic, strong) UIColor *borderColor;

- (id)initWithFrame:(CGRect)frame activationFrame:(CGRect)activationFrame;
- (id)initWithHeight:(CGFloat)height activationFrame:(CGRect)activationFrame;

@end
