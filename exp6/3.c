#include "stdio.h"
void main()
{
    int a[3] = {32767,100,-100};
    printf("a[0]=%d,a[1]=%d,a[2]=%d\n",a[0],a[1],a[2]);
    printf("a[0]=%0xH,a[1]=%0x,a[2]=%0x\n",a[0],a[1],a[2]);
}