#include <string>
#include <stdexcept>

/**
 * @brief Returns a one-word description of the given age.
 * 
 * @param age The age of a version.
 * @return Description.
 */
std::string you_are( int age )
{
    if( age < 0 )
        throw std::invalid_argument( "You can't be less than 0." );
    else if( age < 5 )
        return "baby";
    else if( age < 13 )
        return "child";
    else if( age <= 19 )
        return "teenager";
    else if( age < 65 )
        return "adult";
    else if( age <= 122 )
        return "oap";

    /* I could have put this throw statement inside an else 
        statement and it is fine if that is what you have done.
        However, if the program gets to this point in the code it 
        means that none of the other conditions have been met and 
        so it must have been an invalid argument value.
        My personal preference (it's a habit from writing safety
        critical code) is to have a fallback behaviour that
        runs by default in all my functions so that I can be sure 
        what will happen when the function ends as opposed to 
        risking a random value being returned. */

    throw std::invalid_argument( "You can't be more than 122." );
}
