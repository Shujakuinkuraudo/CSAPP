#include "stdio.h"

void main()
{
    union NUM
    {
        int a;
        char b;
    }num;
    num.a = 0x123456f8;
    if(num.b==(char)0xf8)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
    printf("num.b=0x%X\n",num.b);
}