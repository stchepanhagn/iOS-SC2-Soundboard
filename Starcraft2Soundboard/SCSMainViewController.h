//
//  SCSMainViewController.h
//  Starcraft2Soundboard
//
//  Created by Stephan Chang on 4/17/14.
//  Copyright (c) 2014 AppWerk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface SCSMainViewController : UIViewController
{
    AVAudioPlayer *audioPlayer, *soundPlayer;
}

@property (weak, nonatomic) IBOutlet UIButton *btnProtoss;
@property (weak, nonatomic) IBOutlet UIButton *btnZerg;
@property (weak, nonatomic) IBOutlet UIButton *btnTerran;

@end
