#include <iostream>

class reverseInt {
private:
    int revInt = 0;
public:
    int reverse(int x){
        std::cout << "Initial int: " << x << "\n";
        while (x != 0){
            //std::cout << "Value of x % 10: " << (x % 10) << "\n";
            revInt = (revInt * 10) + (x % 10);
            //std::cout << "Current revInt: " << revInt << "\n";
            x = (x / 10);
            //std::cout << "Current x value: " << x << "\n";
        }
        return revInt;
    }
};
int main() {
    reverseInt myInt;
    std::cout << myInt.reverse(-123);
    return 0;
}
