#include "lab_merge.h"

#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> sequence {-70, 89, 86, 91, 18, -85, 98, -83, -31, 98 };
    const std::vector<int> sorted { -85, -83, -70, -31, 18, 86, 89, 91, 98, 98 };
    
    const std::vector<int> result = merge_sort( sequence );

    for( int i=0; i<sequence.size(); ++i )
    {
        if( sorted[i] != result[i] )
        {
            std::cout << result[i] << " is in the wrong position" << std::endl;
            return 1;
        }
    }

    std::cout << "All sorted" << std::endl;

    return 0;
}
