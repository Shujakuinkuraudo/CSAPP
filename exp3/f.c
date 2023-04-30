#include "stdio.h"
int main()
{
    int ai = 200, bi = -200, ci = 0x80000001;
    unsigned au = 200, bu = -200, cu = 2147483649;
    printf("ai=%d, bi=%d, ci=%d\n", ai, bi, ci);
    printf("au=%u, bu=%u, cu=%u\n", au, bu, cu);
    return 0;
}
// ai=200, bi=-200, ci=-2147483647
// au=200, bu=4294967096, cu=2147483649
// 11ee:	c7 45 e0 c8 00 00 00 	movl   $0xc8,-0x20(%ebp)
// 11f5:	c7 45 e4 38 ff ff ff 	movl   $0xffffff38,-0x1c(%ebp)
// 11fc:	c7 45 e8 01 00 00 80 	movl   $0x80000001,-0x18(%ebp)
// 1203:	c7 45 ec c8 00 00 00 	movl   $0xc8,-0x14(%ebp)
// 120a:	c7 45 f0 38 ff ff ff 	movl   $0xffffff38,-0x10(%ebp)
// 1211:	c7 45 f4 01 00 00 80 	movl   $0x80000001,-0xc(%ebp)