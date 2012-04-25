//
//  FancyChromeController.h
//  FancyVCTest
//
//  Created by Johannes Weiß on 4/23/12.
//  Copyright (c) 2012 factis research GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "FancyChromeView.h"
#import "FancyNavigationItem.h"

@interface FancyChromeController : UIViewController {
    UIViewController *contentViewController;
    FancyNavigationItem *fancyNavigationItem;
    
    BOOL leaf;
    
    FancyChromeView *chromeView;
    UIView *borderView;
    UIView *contentView;
}

- (id)initWithContentViewController:(UIViewController *)contentViewController leaf:(BOOL)isLeaf;

@property (nonatomic, readonly, retain) FancyNavigationItem *fancyNavigationItem;
@property (nonatomic, readonly, retain) UIViewController *contentViewController;
@property (nonatomic, readonly, assign) BOOL leaf;

@end
