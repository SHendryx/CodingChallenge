#include <iostream>

int reverseInt(int x){
    std::int32_t revInt = 0;
    std::cout << "Initial int: " << x << "\n";
    while (x != 0){
        // Test 32-bit integer overflow
        if ((revInt > (INT32_MAX / 10)) || (revInt < (INT32_MIN / 10))){
            return 0;
        }
        revInt = (revInt * 10) + (x % 10);
        x = (x / 10);
    }
    return revInt;
}
int main() {
    std::cout << "Max Int: " << INT32_MAX << "\n";
    std::cout << "Min Int: " << INT32_MIN << "\n";
    std::cout << reverseInt(1463847412);
    return 0;
}
