#include <vector>

std::vector<int> reverse( std::vector<int> sequence )
{
    for( int i=0; i<sequence.size()/2; ++i )
    {
        const int temp = sequence[i];
        sequence[i] = sequence[sequence.size()-i-1];
        sequence[sequence.size()-i-1] = temp;
    }

    return sequence;
}
