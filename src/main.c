
#include <stdio.h>
#include "swap.h"

int main()
{
    int* x;
    int* y;
    *x = 5;
    *y = 4;
    printf("%d\n", *x);
    printf("%d\n", *y);
    int_swap(x, y);
    printf("%d\n", *x);
    printf("%d\n", *y);
    return 0;
}

