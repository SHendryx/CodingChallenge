//
// Created by samue on 3/19/2021.
//

#include <iostream>
#include "ReverseInt.h"
int reverseInt(int x){
    int revInt = 0;
    int pop = 0;
    //std::cout << "Initial int: " << x << "\n";
    while (x != 0){
        pop = x % 10;
        // Test 32-bit integer overflow
        if ((revInt > (INT32_MAX / 10)) || (revInt < (INT32_MIN / 10))){
            return 0;
        }
        revInt = (revInt * 10) + pop;
        x = (x / 10);
    }
    return revInt;
}