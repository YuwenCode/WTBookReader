//
//  WTSortDetailViewModel.h
//  WTBookReader
//
//  Created by xueban on 2017/4/27.
//  Copyright © 2017年 lyw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WTSortDetailModel.h"

#define WTSortDetailViewModel_FetchStatus_Header @"FetchStatus_Header"
#define WTSortDetailViewModel_FetchStatus_Bottom @"FetchStatus_Bottom"

@interface WTSortDetailViewModel : NSObject
@property(nonatomic,assign) NSInteger pageIndex;

@property(nonatomic,strong,readonly) RACCommand *reuqesCommand;

- (NSInteger)numberOfRowsInSection:(NSInteger) pageIndex;
- (WTSortDetailItemModel *)modelAtIndexPath:(NSIndexPath *)indexPath;
- (void)cleanDataAtPageIndex:(NSInteger)pageIndex;
@end