//
//  GameResult.h
//  Matchismo
//
//  Created by Richard Ting on 7/9/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameResult : NSObject

+ (NSArray *)allGameResults;

@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) NSTimeInterval duration;
@property (nonatomic) int score;

@end
