//
// Created by SHendryx on 4/2/21.
//

#include "RunningSum.h"

std::vector<int> runningSum(std::vector<int>& nums){
    int sum = 0;
    for (int & num : nums){
        num = sum += num;
    }
    return nums;
}