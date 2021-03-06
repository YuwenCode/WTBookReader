//
//  WTNoteModel.h
//  WTBookReader
//
//  Created by xueban on 2017/8/17.
//  Copyright © 2017年 lyw. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WTRecordModel.h"
@interface WTNoteModel : NSObject

@property (nonatomic,strong) NSDate *date;
@property (nonatomic,copy) NSString *note;
@property (nonatomic,copy) NSString *content;
@property (nonatomic,assign) NSUInteger location;
@property (nonatomic,assign) NSUInteger length;
@property (nonatomic,assign) NSUInteger chapter;
@property (nonatomic,strong) WTRecordModel *recordModel;
@end
