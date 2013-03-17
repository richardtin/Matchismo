//
//  Card.h
//  Matchismo
//
//  Created by Richard Ting on 3/16/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnplayable) BOOL unplayable;

// return 0 if the otherCards do not match the receiver
// otherwise return an integer representing the quality of the match
// 1 should be the simplest, easiest match
// high number should reflect  how much more difficult the match was

- (int)match:(NSArray *)otherCards;

@end
