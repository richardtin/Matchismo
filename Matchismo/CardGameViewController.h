//
//  CardGameViewController.h
//  Matchismo
//
//  Created by Richard Ting on 3/16/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Deck.h"

@interface CardGameViewController : UIViewController

- (Deck *)createDeck; // abstract
@property (nonatomic) NSUInteger startingCardCount; // abstract
- (void) updateCell:(UICollectionViewCell *)cell usingCard:(Card *)card; // abstract

@end
