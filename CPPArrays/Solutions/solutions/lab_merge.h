#include <vector>

/**
 * @brief Merge sort a vector into ascending order.
 * 
 * @param sequence The sequence to be sorted.
 * @return A sorted sequnce.
 */
std::vector<int> merge_sort( std::vector<int> sequence )
{
	/* This is definitely NOT the most efficient implementation of merge 
		sort possible in C++. It is however, a relatively easy
		implementation to follow and understand which is our main concern
		at this point in the module */
	
	/* if sequence length is 1 or 0 then it must already be sorted */
	if( sequence.size() <= 1 )
		return sequence;

	/* split the sequence into two halves */
	const int middle = sequence.size() /2;
	std::vector<int> left, right;

	for( int i=0; i<middle; ++i )
	{
		left.emplace_back( sequence[i] );
	}

	for( int i=middle; i<sequence.size(); ++i )
	{
		right.emplace_back( sequence[i] );
	}
	
	// recursively call merge sort on each half
	left = merge_sort( left );
	right = merge_sort( right );

	// merge the left and right halves
	int i = 0, l = 0, r = 0;
	while( l < left.size() && r < right.size() )
	{
		if( left[l] < right[r] )
		{
			sequence[i] = left[l];
			l += 1;
		}
		else // left[l] >= right[r]
		{
			sequence[i] = right[r];
			r += 1;
		}

		i += 1;
	}

	// add anything remaining to the sequence
	while( l < left.size() )
	{
		sequence[i] = left[l];
		l += 1;
		i += 1;
	}

	while( r < right.size() )
	{
		sequence[i] = right[r];
		r += 1;
		i += 1;
	}

	return sequence;
}
