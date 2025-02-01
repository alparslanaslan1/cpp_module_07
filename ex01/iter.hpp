#ifndef ITER_HPP
#define ITER_HPP

#include <iostream> 

template <typename T>

void iter(T *adress, size_t length, void(*f)(T& )){
    for(size_t i = 0; i < length; i++){
        f(adress[i]);
    }
}

template <typename T>

void print(T& element){
    std::cout << "adress: " << &element << "  value: " << element << std::endl;
}

#endif