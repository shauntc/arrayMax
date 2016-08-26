//
//  NSArray.h
//  largestNumberFinder
//
//  Created by Shaun Campbell on 2016-08-25.
//  Copyright © 2016 Shaun Campbell. All rights reserved.
//

#include <Foundation/Foundation.h>

@interface NSArray (parameters)

-(NSNumber *)arrayMax;

@end

@implementation NSArray (parameters)

-(NSNumber *)arrayMax
{
    //NSLog(@"%@", [self objectAtIndex:0]);
    
    NSNumber *highNumber = [self objectAtIndex:0];
    NSLog(@"Object 0: %@", highNumber);
    for(int i = 1; i < [self count]; i++)
    {
        NSLog(@"For loop:%@", [self objectAtIndex:i]);
        if([[self objectAtIndex:i] doubleValue] > [highNumber doubleValue])
        {
            highNumber = [self objectAtIndex:i];
            NSLog(@"High Number:%@", highNumber);
        }
    }
    
    NSLog(@"%@", highNumber);
    return highNumber;
    
}

@end
