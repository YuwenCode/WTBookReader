//
//  GlobalMacro.h
//  WTBookReader
//
//  Created by xueban on 2017/4/22.
//  Copyright © 2017年 lyw. All rights reserved.
//

#ifndef GlobalMacro_h
#define GlobalMacro_h

// 颜色相关
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define MainColor_Light RGBA(255,209,9,1)
//#define MainColor_Light RGBA(221,243,207,1)

// 屏幕尺寸
#define MainScreenWidth [UIScreen mainScreen].bounds.size.width
#define MainScreenHeight [UIScreen mainScreen].bounds.size.height


#define ViewSize(view)  (view.frame.size)
#endif /* GlobalMacro_h */
