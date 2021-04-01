//
// Created by SHendryx on 3/26/21.
//

#include <vector>
#include "TwoSum.h"

std::vector<int> twoSum(std::vector<int> &nums, int target) {
    // Possible vector values include negative, zero and positive numbers.
    // Possible target values include negative, zero and positive numbers.

    // the vector we return filled with -1
    std::vector<int> sumPair (2, -1);
    // get the size of the input vector
    std::vector<int>::size_type sz = nums.size();

    for (int i = 0; i < sz; i++) {
        for (int j = i + 1; j < sz; j++){
            if (nums[i] + nums[j] == target){
                sumPair[0] = i;
                sumPair[1] = j;
                return sumPair;
            }
        }
    }
    // In reality, we should never get here. We should always return a matched sumPair before we reach this.
    return sumPair;
}
