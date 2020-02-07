#include "../src/Arithmetic.hpp"
#include <iostream>
#include <cassert>
#include <limits>

int main( int, char *[ ] ) 
{
    /*testSum();
    testDifference();*/
    
    assert( std::abs( addNum(1.0, 3.0) - 4.0) < std::numeric_limits<double>::epsilon() );
    assert( std::abs( differenceNum(5.0, 7.0) - -2.0) < std::numeric_limits<double>::epsilon() );
    return 0;
}



