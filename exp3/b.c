#include "stdio.h"
int main()
{
    printf("0 == 0U is %d\n", 0 == 0U);
    printf("-1 < 0  is %d\n", -1 < 0);
    printf("-1 < 0U is %d\n", -1 < 0U);
    printf("2147483647 > -2147483647-1 is %d\n", 2147483647 > -2147483647 - 1);
    printf("2147483647U > -2147483647-1 is %d\n", 2147483647U > -2147483647 - 1);
    printf("2147483647 > (int)2147483648U is %d\n", 2147483647 > (int)2147483648U);
    printf("-1 > -2 is %d\n", -1 > -2);
    printf("(unsigned)-1 > -2 is %d\n", (unsigned)-1 > -2);
    return 0;
}
// 0 == 0U is 1
// -1 < 0  is 1
// -1 < 0U is 0
// 2147483647 > -2147483647-1 is 1
// 2147483647U > -2147483647-1 is 0
// 2147483647 > (int)2147483648U is 1
// -1 > -2 is 1
// (unsigned)-1 > -2 is 1