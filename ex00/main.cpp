#include <iostream>
#include "helpers.hpp"

int main(void){
    int i = 54;
    int j = 42;
    std::cout << "i: " << i << "\nj: " << j << std::endl;
    ::swap(i,j);
    std::cout << "SWAP: i 🔄 j\n" << "i: " << i << "\nj: " << j << std::endl;

    std::cout << "min value: " << ::min(i,j) << std::endl;

    std::cout << "max value: " << ::max(i,j) << std::endl;
}

