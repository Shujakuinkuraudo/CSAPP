#include "stdio.h"
float u2f(unsigned x) {
	return *(float*) &x;
}
float fpower2(int x)
{
    unsigned exp, frac, u;
    if (x < -23 - 126) //非规格数的实际指数固定为-126
    { // 0 0000000 000000 ... 001
        exp = 0;
        frac = 0;
    }
    else if (x < -126)
    { // 0 0000000 000 ... 00000100000
        exp = 0;
        frac = 1 << (unsigned)(x + 126 + 23);
    }
    else if (x < 128)  // \pm [1,2) * 2^[-126,127]
    { //  1 <= E <= 254 [1-bias, 254-bias]
        exp = x + 127; // x + bias
        frac = 0;
    }
    else
    {
        exp = 255;
        frac = 0;
    }
    u = exp << 23 | frac;
    return u2f(u);
}
int main()
{
    printf("%f\n",fpower2(-2));
    printf("%f\n",fpower2(4));
    return 0;
}