#include "lab_except.h"

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ages { 1, 15, 17, 20, -999 };

	/* Notice that this is using the range based for loop syntax.
		This means that the variable 'a' will become each of the values in 
		the ages vector. NOT an index value to each position in the vector. 
	*/
	for( const int a : ages )
	{
		try
		{
			/* We are saving the result of you_are() to a temporary variable
				because, if there is a problem calling you_are(). We want to 
				know before we starting outputting.
				If we did not do this, then we might end up printing half a 
				sentance. */
			const std::string description = you_are( a );

			std::cout << "When you are " << a << " you are a " << description << std::endl;
		}
		catch( const std::invalid_argument& e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return 0;
}
