
#include "stdio.h"

void main()
{
    union test
    {
        unsigned a;
        int b;
        float c;
        char d[4];
    }num;
    num.a = 0x32343538;
    printf("num.a=%X\n",num.a);
    printf("num.a=%u\n",num.a);
    printf("num.b=%d\n",num.b);
    printf("num.c=%.20f\n",num.c);
    num.a = 0x38353432;
    printf("num.d=%s\n",num.d);
    //12 14    15 13
    //50 52 53
}