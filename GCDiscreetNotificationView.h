//
//  GCDiscreetNotificationView.h
//  Mtl mobile
//
//  Created by Guillaume Campagna on 09-12-27.
//  Copyright 2009 LittleKiwi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GCDiscreetNotificationViewPresentationModeTop,
    GCDiscreetNotificationViewPresentationModeBottom,
} GCDiscreetNotificationViewPresentationMode;

@interface GCDiscreetNotificationView : UIView 

@property (nonatomic, assign) UIView *view;
@property (nonatomic, assign) GCDiscreetNotificationViewPresentationMode presentationMode;

//You can access the label and the activity indicator to change its values. 
//If you want to change the text or the activity itself, use textLabel and showActivity proprieties.
@property (nonatomic, retain, readonly) UILabel *label;  
@property (nonatomic, retain, readonly) UIActivityIndicatorView *activityIndicator;

@property (nonatomic, copy) NSString* textLabel;
@property (nonatomic, assign) BOOL showActivity;

@property (nonatomic, readonly, getter = isShowing) BOOL showing;

- (id) initWithText:(NSString *)text inView:(UIView *)aView;
- (id) initWithText:(NSString *)text showActivity:(BOOL)activity inView:(UIView *)aView;
- (id) initWithText:(NSString *)text showActivity:(BOOL)activity inPresentationMode:(GCDiscreetNotificationViewPresentationMode) aPresentationMode inView:(UIView *)aView;

//Show/Hide animated
- (void) show:(BOOL) animated;
- (void) hide:(BOOL) animated;

//Change proprieties animated
- (void) setTextLabel:(NSString *) aText animated:(BOOL) animated;
- (void) setShowActivity:(BOOL) activity animated:(BOOL) animated;
- (void) setTextLabel:(NSString *)aText andSetShowActivity:(BOOL)activity animated:(BOOL)animated;
- (void) setPresentationMode:(GCDiscreetNotificationViewPresentationMode) newPresentationMode animated:(BOOL) animated;

@end
