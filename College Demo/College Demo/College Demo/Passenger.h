//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject

@property (nonatomic, copy) NSDate *starttime;
@property (nonatomic, copy) NSDate *endtime;
@property (nonatomic, copy) NSString *fromwhere;
@property (nonatomic, copy) NSString *desitination;
@property (nonatomic, copy) float price;
@property (nonatomic, copy) NSString *number;

- (void)setorder:starttime:(NSDate *)starttime endtime:(NSDate *)endtime fromwhere:(NSString *)fromwhere
 destination:(NSString *)destination price:(float)price number:(NSString *)number;

@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property (nonatomic, copy) bool ifeighteen;
// 历史订单 （数组）
@property (nonatomic, copy) NSMutableArray *historders = nil;
// 未出行订单 （数组）
@property (nonatomic, copy) NSMutableArray *notdoneorders = nil;

// Function 方法
// 去订票
- (void)booktickets:(Orders *)neworder;
// 去检票
- (void)booktickets:(Orders *)doneorder;
@end

NS_ASSUME_NONNULL_END
