#include <iostream>

class Solution {
public:
    static int addDigits(int num = 38) {
        return num == 1 ? 1: ((num - 1) % 9) + 1;
    }
};

int main(){
    int number = Solution::addDigits();
    std::cout << number << std::endl;
    return 0;
}