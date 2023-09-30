#pragma once
#include <iostream>
#include <vector>

class Solution {
public:
    /*
    *338. Counting Bits
    */
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