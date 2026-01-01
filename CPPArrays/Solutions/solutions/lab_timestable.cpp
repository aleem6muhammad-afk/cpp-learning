#include <iostream>
#include <iomanip>

int main()
{
    const int n = 5;

    // print the header
    std::cout << "* |";
    for( int x=1; x<=n; ++x )
        std::cout << std::setw(3) << x;
    std::cout << std::endl;

    // print the horizontal line
    std::cout << "--+";
    for( int x=1; x<=n; ++x )
        std::cout << "---";
    std::cout << std::endl;

    // print the body of the table
    for( int y=1; y<=n; ++y )
    {
        std::cout << y << " |";
        for( int x=1; x<=n; ++x )
            std::cout << std::setw(3) << x*y;
        std::cout << std::endl;
    }

    return 0;
}
