#pragma once
#include <iostream>
#include <vector>

// Template definitions for overloading cout
// Helper function(to print the elements)
template <typename T>
void printVectorElements(std::ostream& os, const std::vector<T>& vec){
    os << "[";
    for(size_t i = 0; i < vec.size(); ++i){
        os << vec[i];
        if(i < vec.size() - 1){
            os << ", ";
        }
    }
    os << "]\n";
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    printVectorElements(os, vec);
    return os;
}