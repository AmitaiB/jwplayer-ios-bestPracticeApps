//
//  JWCastingViewController.h
//  JWBestPracticeApps
//
//  Created by Karim Mourra on 3/16/16.
//  Copyright © 2016 Karim Mourra. All rights reserved.
//

#import "JWBasicVideoViewController.h"

@interface JWCastingViewController : JWBasicVideoViewController <JWCastingDelegate>

@property (nonatomic) NSArray *availableDevices;
@property (nonatomic) JWCastController *castController;

@end
