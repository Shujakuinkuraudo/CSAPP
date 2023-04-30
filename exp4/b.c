
#include <stdio.h>
int main()
{
    int i = (1<<30)+1;float f = 20.5;double d= 1e300;
    int i_ =  (int)(float)i; float f_ = (float)(int)f;
    printf("%d\n", i == (int)(float)i);
    printf("%d\n", f == (float)(int)f);
    printf("%d\n", i == (int)(double)i);
    printf("%d\n", f == (float)(double)f);
    printf("%d\n", d == (float)d);
    printf("%d\n", f == -(-f));
    printf("%d\n", (d+f)-d == f);
    return 0;
}
