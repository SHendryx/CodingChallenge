#include <iostream>
#include "Reverse_Int/ReverseInt.h"
#include "Roman_To_Int/RomanToInt.h"

int main() {
    std::cout << "Max Int: " << INT32_MAX << "\n";
    std::cout << "Min Int: " << INT32_MIN << "\n";
    std::cout << reverseInt(123) << "\n";

    std::cout << romanToInt("IXV") << "\n";
    return 0;
}
