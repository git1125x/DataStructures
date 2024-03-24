#include "../include/array.h"
#include <iostream>


int main()
{
    std::cout << "Test" << std::endl;
    array<int, 5> int_array;
    int_array.fill(5);
    int_array[3] = 2;
    for(std::size_t i = 0; i < int_array.size(); i++)
    {
        std::cout << int_array[i] << std::endl;
    }
    std::cout << "Hello" << std::endl;

    for(auto data : int_array)
    {
        std::cout << data << std::endl;
    }
}