//
//  toViewCalloutView.h
//  iTrack5
//
//  Created by Dean Leitersdorf on 3/2/15.
//  Copyright (c) 2015 Dean Leitersdorf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "calloutViewClass.h"

@interface toViewCalloutView : calloutViewClass
@property (strong, nonatomic) IBOutlet UIView *view;

@property (strong, nonatomic) NSArray* recipients;
@property (weak, nonatomic) IBOutlet UITextField *toBox;

@end
