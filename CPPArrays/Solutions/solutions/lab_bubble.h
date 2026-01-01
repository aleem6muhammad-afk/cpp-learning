#include <vector>

/**
 * @brief Bubble sort a vector into ascending order.
 * 
 * @param sequence The sequence to be sorted.
 * @return A sorted sequnce.
 */
std::vector<int> bubble_sort( std::vector<int> sequence )
{
	bool isSorted;
	/* Notice that I am using the do while loop here as
		we need to run through the sequence at least once
		to confirm that it is sorted */
	do
	{
		isSorted = true;
		for( int i=0; i<sequence.size()-1; ++i )
		{
			if( sequence[i] > sequence[i+1] )
			{
				std::swap( sequence[i], sequence[i+1] );
				isSorted = false;
			}
		}
	}
	while( !isSorted );

	return sequence;
}
