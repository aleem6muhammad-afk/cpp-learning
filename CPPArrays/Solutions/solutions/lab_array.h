#include <array>

/**
 * @brief Finds the lowest numerical value in the given array.
 * 
 * @param arr An array of 10 integers.
 * @return Lowest value.
 */
int lowest_value( std::array<int,10> arr )
{
    // use first value as initial smallest
    int smallest = arr[0];

    // iterate over the rest
    for( int i=1; i<arr.size(); ++i )
    {
        if( arr[i] < smallest )
        {
            smallest = arr[i];
        }
    }

    return smallest;
}
