//
//  PlayingCardCollectionViewCell.h
//  Matchismo
//
//  Created by Richard Ting on 7/16/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayingCardView.h"

@interface PlayingCardCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet PlayingCardView *playingCardview;

@end
