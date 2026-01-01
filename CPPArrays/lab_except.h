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
    if( age < 5 )
        return "baby";
    else if( age < 13 )
        return "child";
    else if( age <= 19 )
        return "teenager";
    else if( age < 65 )
        return "adult";
    else if( age <= 122 )
        return "oap";
    return "";
}
