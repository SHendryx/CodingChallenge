#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "Reverse_Int/ReverseInt.h"
#include "Roman_To_Int/RomanToInt.h"
#include "Two_Sum/TwoSum.h"
#include "Non_Neg_Int_Ones/NonNegIntOnes.h"
#include "Int_To_Binary/IntToBinary.h"
#include "Running_Sum/RunningSum.h"


int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    std::cout << "Max Int: " << INT32_MAX << "\n";
    std::cout << "Min Int: " << INT32_MIN << "\n";
    std::cout << reverseInt(123) << "\n";

    std::cout << romanToInt("IXV") << "\n";

    std::vector<int> myList = {2,7,11,15};
    std::vector<int> sumPair = twoSum(myList, 9);
    std::cout << "Sum Pair: " << sumPair[0] << ", " << sumPair[1] << "\n";

    // showIntegers(10); // used to verify findIntegers is working.
    std::cout << "Number of digits without consecutive ones: " << findIntegers(10) << "\n";

    // std::cout << intToBinary(1000000000);
    myList = {1,2,3,4};
    myList = runningSum(myList);
    std::cout << "Running Sum of vector: ";
    for (int x : myList)
        std::cout << x << ", ";
    std::cout << "\n";

    return 0;
}
