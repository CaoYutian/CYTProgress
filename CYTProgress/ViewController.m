//
//  ViewController.m
//  CYTProgress
//
//  Created by 。。。 on 2017/3/28.
//  Copyright © 2017年 isofoo. All rights reserved.
//

#import "ViewController.h"
#import "CYTScopeView.h"

#define SCREEN_WIDTH     [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT    [UIScreen mainScreen].bounds.size.height
@interface ViewController ()

@property(nonatomic,strong)CYTScopeView *ScopeView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self initData];
}

- (void)initData {
    
    NSArray *scopeArr = @[@"0",@"80",@"100",@"200",@"999"];
    NSArray *scorePointArr = @[@"20.88",@"138.99",@"888.88"];
    NSArray *titleArr = @[@"A",@"B",@"C"];
    for (int i = 0; i < scorePointArr.count; i ++) {
        self.ScopeView = [[CYTScopeView alloc] initWithFrame:CGRectMake(0, 100 + i * 60, SCREEN_WIDTH, 100) indicatorValue:scopeArr npkScope:scorePointArr[i] npkNameLabel:titleArr[i]];
        [self.view addSubview:self.ScopeView];
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
