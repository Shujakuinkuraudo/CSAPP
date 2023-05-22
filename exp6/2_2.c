#include "stdio.h"

void main()
{
    union test
    {
        int a;
        char b;
    }num;
    num.a = 0xff;
    if(num.b==(char)0xff)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
    printf("num.b=0x%X\n",num.b);
}