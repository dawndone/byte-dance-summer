//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

- (void)setorder:starttime:(NSDate *)starttime endtime:(NSDate *)endtime fromwhere:(NSString *)fromwhere
 destination:(NSString *)destination price:(float)price number:(NSString *)number{
    self->starttime = starttime;self->endtime = endtime;self->fromwhere = fromwhere;self->destination = destination;
    self->price = price;self->number=number;
 }

@end

@implementation Passenger

- (void)booktickets:(Orders *)neworder {
    [historders addObject:@"neworder"];
    [notdoneorders addObject:@"neworder"];
}

- (void)booktickets:(Orders *)doneorder {
    Orders *newdone = [[Orders alloc] init];
    newdone = doneorder;
    [notdoneorders removeObject:@"newdone"];
}

@end
