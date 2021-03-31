//
// Created by SHendryx on 3/26/21.
//

#include <vector>
#include "TwoSum.h"

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::vector<int> sumPair (2);
    std::vector<int> table (target,-1);
    std::vector<int>::size_type sz = nums.size();
    int curVal;
    for(unsigned i=0; i < sz; i++){
        curVal = nums[i];

        if (curVal > 0 && curVal < target){
            if (table[target - curVal] != -1){
                sumPair[0] = i;
                sumPair[1] = table[target - curVal];
            } else{
                table[curVal] = i;
            }
        }
    }
    return sumPair;
}
