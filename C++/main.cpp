#include <iostream>
#include <vector>
#include "Reverse_Int/ReverseInt.h"
#include "Roman_To_Int/RomanToInt.h"
#include "Two_Sum/TwoSum.h"
#include "Non_Neg_Int_Ones/NonNegIntOnes.h"

int main() {
    std::cout << "Max Int: " << INT32_MAX << "\n";
    std::cout << "Min Int: " << INT32_MIN << "\n";
    std::cout << reverseInt(123) << "\n";

    std::cout << romanToInt("IXV") << "\n";

    auto il = {2,7,11,15};
    std::vector<int> myList (il);
    std::vector<int> sumPair = twoSum(myList, 9);
    std::cout << "Sum Pair: " << sumPair[0] << ", " << sumPair[1] << "\n";

    showIntegers(6);
    std::cout << "Number of digits without consecutive ones: " << findIntegers(6) << "\n";
    return 0;
}
