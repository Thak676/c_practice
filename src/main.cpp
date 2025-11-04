
#include <stdio.h>
#include "swap.h"

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"



TEST_CASE( "swaps correctly", "[single-file]" ) {
    int x;
    int y;
    x = 5;
    y = 4;
    int_swap(&x, &y);
    REQUIRE( x == 4 );
    REQUIRE( y == 5 );
    // REQUIRE( Factorial(2) == 2 );
    // REQUIRE( Factorial(3) == 6 );
    // REQUIRE( Factorial(10) == 3628800 );
}

// int main()
// {
//     int* x;
//     int* y;
//     *x = 5;
//     *y = 4;
//     printf("%d\n", *x);
//     printf("%d\n", *y);
//     int_swap(x, y);
//     printf("%d\n", *x);
//     printf("%d\n", *y);
//     return 0;
// }

