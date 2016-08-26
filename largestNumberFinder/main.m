//
//  main.m
//  largestNumberFinder
//
//  Created by Shaun Campbell on 2016-08-25.
//  Copyright © 2016 Shaun Campbell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSArray+parameters.h"


int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
        NSArray *myArray = @[@3, @7, @3280.1, @8, @5.2888888, @28.9, @3];
        NSNumber *highNumber = [myArray arrayMax];
        
        NSLog(@"The largest number in the array is %@", highNumber);
        
    }
    return 0;
}
