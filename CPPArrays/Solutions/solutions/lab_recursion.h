#include <string>

/**
 * @brief Identifies if the given string is a palindrome.
 * 
 * A palindrome is a word that can be read the same way forwards and 
 * backwards. For example, RACECAR.
 * 
 * @param String to check.
 * @return Is a palindrome (true/false).
 */
bool is_palindrome( std::string value )
{
    // string has length of 0 or 1, so it must be a palindrome
    if( value.length() <= 1 )
        return true;
    // first and last characters are the same, check next set of characters
    else if( value[0] == value[value.length()-1] )
    {
        /* remove the first and last letters from the string and then
            check what remains to see if it is a palindrome */
        const std::string subString = value.substr( 1, value.length()-2 );
        return is_palindrome( subString );    
    }

    /* if the program got to this point is means that at some point
        the first and last letters were not the same. This means 
        that the string is not a palindrome. */
    return false;
}
