#include <iostream>

#include "lab_array.h"

int main()
{
    std::array<int,10> testArray 
        { 9999, 69, 4689, 100000, 1234, 
          7484, 2845, 2837, 42, 86546 };

    std::cout << "smallest value is " 
        << lowest_value( testArray ) << std::endl;

    return 0;
}
