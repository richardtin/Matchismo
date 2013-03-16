//
//  Card.m
//  Matchismo
//
//  Created by Richard Ting on 3/16/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import "Card.h"

@implementation Card

@synthesize contents = _contents;

@synthesize faceUp = _faceUp;
@synthesize unplayable = _unplayable;

- (NSString *)contents {
    return _contents;
}

- (void)setContents:(NSString *)contents {
    _contents = contents;
}

- (BOOL)isFaceUp {
    return _faceUp;
}

- (void)setFaceUp:(BOOL)faceUp {
    _faceUp = faceUp;
}

- (BOOL)isUnplayable {
    return _unplayable;
}

- (void)setUnplayable:(BOOL)unplayable {
    _unplayable = unplayable;
}

- (int)match:(NSArray *)otherCards {
    int score = 0;

    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
            break;
        }
    }
    return score;
}

@end
