#include "stdio.h"
int main()
{
    int x = -1;
    unsigned u = 2147483648;
    printf("x = %u = %d \n", x, x);
    printf("u = %u = %d \n", u, u);
    return 0;
}
// x = 4294967295 = -1
// u = 2147483648 = -2147483648