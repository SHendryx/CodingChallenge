#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "Reverse_Int/ReverseInt.h"
#include "Roman_To_Int/RomanToInt.h"
#include "Two_Sum/TwoSum.h"
#include "Non_Neg_Int_Ones/NonNegIntOnes.h"
#include "Int_To_Binary/IntToBinary.h"
#include "Running_Sum/RunningSum.h"
#include "Corp_Flight_Bookings/CorpFlightBookings.h"

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
    EXPECT_EQ(20, romanToInt("XX"));
    EXPECT_EQ(21, romanToInt("XXI"));

    EXPECT_EQ(40, romanToInt("XL"));
    EXPECT_EQ(45, romanToInt("VL"));
    EXPECT_EQ(49, romanToInt("IL"));

    EXPECT_EQ(90, romanToInt("XC"));
    EXPECT_EQ(95, romanToInt("VC"));
    EXPECT_EQ(96, romanToInt("VCI"));
    EXPECT_EQ(99, romanToInt("IC"));
    EXPECT_EQ(104, romanToInt("CIV"));

    EXPECT_EQ(400, romanToInt("CD"));
    EXPECT_EQ(401, romanToInt("CDI"));
    EXPECT_EQ(404, romanToInt("CDIV"));
    EXPECT_EQ(406, romanToInt("CDVI"));
    EXPECT_EQ(409, romanToInt("CDIX"));
    EXPECT_EQ(411, romanToInt("CDXI"));
    EXPECT_EQ(414, romanToInt("CDXIV"));
    EXPECT_EQ(440, romanToInt("CDXL"));
    EXPECT_EQ(445, romanToInt("CDVL"));
    EXPECT_EQ(446, romanToInt("CDVLI"));
    EXPECT_EQ(450, romanToInt("LD"));

}

TEST(CorpFlightBookings, CorpFlightBookings){
    std::vector<std::vector<int>> myFlights = {{1,2,10},{2,3,20},{2,5,25}};
    std::vector<int> myResult = corpFlightBookings(myFlights, 5);
    std::vector<int> expectedResult = {10,55,45,25,25};

    ASSERT_EQ(expectedResult.size(), myResult.size()) << "Vectors x and y are of unequal length";

    for (int i = 0; i < expectedResult.size(); ++i) {
        EXPECT_EQ(expectedResult[i], myResult[i]) << "Vectors x and y differ at index " << i;
    }
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
