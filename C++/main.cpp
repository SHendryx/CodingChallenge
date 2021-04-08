#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "Reverse_Int/ReverseInt.h"
#include "Roman_To_Int/RomanToInt.h"
#include "Two_Sum/TwoSum.h"
#include "Non_Neg_Int_Ones/NonNegIntOnes.h"
#include "Int_To_Binary/IntToBinary.h"
#include "Running_Sum/RunningSum.h"

TEST(ReverseInt, decimal)
{
    EXPECT_EQ(0, reverseInt(0));
    EXPECT_EQ(1, reverseInt(1));
    EXPECT_EQ(-1, reverseInt(-1));

    EXPECT_EQ(21, reverseInt(12));
    EXPECT_EQ(-32, reverseInt(-23));

    EXPECT_EQ(0, reverseInt(INT32_MIN));
    EXPECT_EQ(0, reverseInt(INT32_MAX));

    EXPECT_EQ(2147483641, reverseInt(1463847412));
    EXPECT_EQ(0, reverseInt(1463847413));
    EXPECT_EQ(0, reverseInt(1563847412));

    EXPECT_EQ(-2147483641, reverseInt(-1463847412));
    EXPECT_EQ(0, reverseInt(-1463847413));
    EXPECT_EQ(0, reverseInt(-1563847412));
}

TEST(RomanToInt, RomanToInt){
    EXPECT_EQ(1, romanToInt("I"));
    EXPECT_EQ(2, romanToInt("II"));

    EXPECT_EQ(4, romanToInt("IV"));
    EXPECT_EQ(5, romanToInt("V"));
    EXPECT_EQ(6, romanToInt("VI"));

    EXPECT_EQ(9, romanToInt("IX"));
    EXPECT_EQ(10, romanToInt("X"));
    EXPECT_EQ(11, romanToInt("XI"));

    EXPECT_EQ(14, romanToInt("XIV"));
    EXPECT_EQ(15, romanToInt("XV"));
    EXPECT_EQ(16, romanToInt("XVI"));

    EXPECT_EQ(19, romanToInt("XIX"));
}

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
