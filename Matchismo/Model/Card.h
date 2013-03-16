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

- (int)match:(NSArray *)card;

@end
