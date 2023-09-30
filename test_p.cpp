#include <iostream>
#include <vector>

/*
    *338. Counting Bits
*/
class Solution {
public:
    static std::vector<int> countBits(int n) {
        std::vector<int> bits;
        bits.reserve(n + 1);
        for(int curr = 0; curr <= n; ++curr){
            int sum = 0, copy = curr;
            while(copy){
                sum += (copy & 1 ? 1 : 0);
                copy >>= 1;
            }

            bits.push_back(sum);
        }

        return bits;
    }
};

int main(){
    std::vector<int> res = Solution::countBits(10);
    for(const auto& el: res){
        std::cout << el << ' ';
    }

    std::cout << '\n';
    return 0;
}