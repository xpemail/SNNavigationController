//
//  UINavigationController+Custom.h
//
//

#import <UIKit/UIKit.h>

@interface UINavigationController(Navigation)

- (NSArray *)popToViewControllerClass:(Class)aClass animated:(BOOL)animated;


@end

@interface UINavigationItem(Extra)

-(void)setIndicatorImage:(UIImage *)indicatorImage;

-(UIImage *)indicatorImage;
 
-(void)setIndicatorHighlightedImage:(UIImage *)indicatorHighlightedImage;

-(UIImage *)indicatorHighlightedImage;

- (void)setLeftBarButtonTitle:(NSString *)title target:(id)target action:(SEL)action indicator:(BOOL)indicator;

- (void)setLeftBarButtonImage:(UIImage *)image target:(id)target action:(SEL)action;

- (void)setLeftBarButton:(UIButton *)button;

- (void)setRightBarButtonTitle:(NSString *)title target:(id)target action:(SEL)action;

- (void)setRightBarButtonImage:(UIImage *)image target:(id)target action:(SEL)action;

- (void)setRightBarButton:(UIButton *)button;


-(void)setLeftBarButtons:(NSArray*)array target:(id)target action:(SEL)action;  //by xd.5
-(void)setRightBarButtons:(NSArray*)array target:(id)target action:(SEL)action;

-(void)setRightBarButtons:(NSArray*)array target:(id)target action:(SEL)action withLongPress:(SEL)longPressAction;  //长按

-(void)setMidTitleView:(UIView*)image;

@end

@interface UINavigationBar (Extra)

-(void)setBackgroundImage:(UIImage *)image;

-(void)setTitleColor:(UIColor *)color;

-(void)setTitleColor:(UIColor *)color font:(UIFont *)font titleShadowColor:(UIColor *)shadowColor shadowOffset:(CGSize)shadowOffset;

@end
