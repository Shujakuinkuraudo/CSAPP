#include "stdio.h"
int main()
{
    int ai = 100, bi = 2147483648, ci = -100;
    unsigned au = 100, bu = 2147483648, cu = -100;
    printf("ai=%d, bi=%d, ci=%d\n", ai, bi, ci);
    printf("au=%u, bu=%u, cu=%u\n", au, bu, cu);
    return 0;
}
// ai=100, bi=-2147483648, ci=-100
// au=100, bu=2147483648, cu=4294967196
// 11ee:	c7 45 e0 64 00 00 00 	movl   $0x64,-0x20(%ebp)
// 11f5:	c7 45 e4 00 00 00 80 	movl   $0x80000000,-0x1c(%ebp)
// 11fc:	c7 45 e8 9c ff ff ff 	movl   $0xffffff9c,-0x18(%ebp)
// 1203:	c7 45 ec 64 00 00 00 	movl   $0x64,-0x14(%ebp)
// 120a:	c7 45 f0 00 00 00 80 	movl   $0x80000000,-0x10(%ebp)
// 1211:	c7 45 f4 9c ff ff ff 	movl   $0xffffff9c,-0xc(%ebp)