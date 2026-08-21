#include <iostream>

class Solution {
public:
    static bool canWinNim(int n = 4) {
        return n % 4;
    }
};

int main(){
    std::cout << Solution::canWinNim();
}