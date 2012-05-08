/*     This file is part of FRLayeredNavigationController.
 *
 * FRLayeredNavigationController is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FRLayeredNavigationController is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with FRLayeredNavigationController.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *  Copyright (c) 2012, Johannes Weiß <weiss@tux4u.de> for factis research GmbH.
 */

#import <UIKit/UIKit.h>

#import "FRLayeredNavigationItem.h"

@interface FRLayeredNavigationController : UIViewController<UIGestureRecognizerDelegate> {
    UIView *firstTouchedView;
    NSMutableArray *viewControllers;
    UIPanGestureRecognizer *panGR;
}

- (id)initWithRootViewController:(UIViewController *)rootViewController;

- (id)initWithRootViewController:(UIViewController *)rootViewController
                   configuration:(void (^)(FRLayeredNavigationItem *item))configuration;

- (void)popViewControllerAnimated:(BOOL)animated;

- (void)popToRootViewControllerAnimated:(BOOL)animated;

- (void)popToViewController:(UIViewController *)vc animated:(BOOL)animated;

- (void)pushViewController:(UIViewController *)viewController
                 inFrontOf:(UIViewController *)anchorViewController
              maximumWidth:(BOOL)maxWidth
                  animated:(BOOL)animated;

- (void)pushViewController:(UIViewController *)viewController
                 inFrontOf:(UIViewController *)anchorViewController
              maximumWidth:(BOOL)maxWidth
                  animated:(BOOL)animated
             configuration:(void (^)(FRLayeredNavigationItem *item))configuration;


@property (nonatomic, readonly, retain) NSArray *viewControllers;

@end
