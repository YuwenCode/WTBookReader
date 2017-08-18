//
//  WTStoredBookModel.h
//  WTBookReader
//
//  Created by xueban on 2017/8/18.
//  Copyright © 2017年 lyw. All rights reserved.
//

#import <Realm/Realm.h>

@interface WTStoredBookModel : RLMObject
/** 书籍id */
@property NSString *bookId;
/** 书籍作者 */
@property NSString *author;
/** 书籍网站 */
@property NSString *site;
/** 书籍简介 */
@property NSString *shortIntro;
/** 书籍是否被禁 */
@property NSString *banned;
/** 书籍封面 */
@property NSString *cover;
/** 书籍标题 */
@property NSString *title;
/** 书籍最后阅读时间 */
@property NSDate *lateReadDate;
/** 书籍总章节数 */
@property NSUInteger *chapterCount;

@end

RLM_ARRAY_TYPE(WTStoredBookModel) // 定义RLMArray<WTStoredBookModel>
