#include "stdio.h"
void main()
{
    float finf1 = 4e38, finf2 = 5e38, finf3 = 6e38; // 正无穷大
    float fninf1 = -4e38, fninf2 = -5e38, fninf3 = -6e38; //负无穷大
    float fzero = 0, fnzero = -fzero; // 0, -0
    float fnormal1 = 5.0, fnormal2 = 0.1, fnnormal1 = -5, fnnormal2 = -0.1; // 规格化数
    float ffrac = 1e-40, fnfrac = -1e-40; //非规格化数
    float fnan1 = finf1 + fninf1, fnan2 = -fnan1; // 无定义数
    float finf4 = fnormal1 / fzero;          // 除以 0, 无穷大
    printf("%f %f %f \n", finf1, finf2, finf3);
    printf("%f %f %f \n", fninf1, fninf2, fninf3);
    printf("%f %f \n",fzero , fnzero);
    printf("%f %.20f \n%f %.20f \n",fnormal1,fnormal2,fnnormal1,fnnormal2);
    printf("%.50f\n%.50f\n",ffrac,fnfrac);
    printf("%f %f\n",fnan1,fnan2);
    printf("%f\n",finf4);
}