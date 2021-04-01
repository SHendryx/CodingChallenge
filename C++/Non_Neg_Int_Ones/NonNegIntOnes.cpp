//
// Created by SHendryx on 4/1/21.
//

#include <iostream>
#include "NonNegIntOnes.h"

int findIntegers(int num) {
    int count = 0;  // variable for counting ints
    // The simplest solution appears to be testing every int from 0 to n looking for consecutive 1s
    // in the binary equivalent. I believe there is a more elegant solution finding factors of the
    // numbers in base 2.
    int n;  // temporarily hold the value of the number we are working on
    int r;  // remainder variable
    int validDigit = 0; // if the digit doesn't contain consecutive 1s, this value becomes 1
    bool oneSeen = false;   // have we found a single 1?

    for (int i = 0; i <= num; i++){
        n = i;
        validDigit = 1; // assume it's a valid digit until we prove otherwise
        oneSeen = false;
        while (n != 0){
            r = (n % 2);
            if (r && oneSeen){
                validDigit = 0; // not a valid digit to count because it contains consecutive 1s
                break;
            }
            oneSeen = (n % 2);  // if the remainder is 1, we found a one
            n /= 2;
        }
        count += validDigit;
    }

    return count;
}

void showIntegers(int num){
    int n;
    std::cout << "0";
    for (int i = 0; i <= num; i++){
        n = i;
        while (n != 0){
            std::cout << (n % 2);
            n /= 2;
        }
        std::cout << "\n";
    }
}