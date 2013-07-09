//
//  GameResultViewController.m
//  Matchismo
//
//  Created by Richard Ting on 7/9/13.
//  Copyright (c) 2013 Richard Ting. All rights reserved.
//

#import "GameResultViewController.h"
#import "GameResult.h"

@interface GameResultViewController ()
@property (weak, nonatomic) IBOutlet UITextView *display;

@end

@implementation GameResultViewController

- (void)setup
{
    // initialization that can't wait until viewDidLoad
}

- (void)awakeFromNib
{
    [self setup];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    [self setup];
    return self;
}

- (void)updateUI
{
    NSString *displayText = @"";
    for (GameResult *result in [GameResult allGameResults]) {
        displayText = [displayText stringByAppendingFormat:@"Score: %d (%@, %0g)\n", result.score, result.end, round(result.duration)];
    }
    self.display.text = displayText;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [self updateUI];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
