#include <iostream>
int lsbZero(int x)
{
	return x & (~1); // x & 111111111110 a&1 = a, a&0 = 0, 从而实现lsb清0
}
int byteNot(int x,int n)
{
	return x ^ (1 << n); // x ^ 1000000 a^1=~a,a^0 = a
}
int byteXor(int x,int y,int n)
{
	return ((x ^ y) >> n) & 1; //x^y 后右移n位取最后一位
}
int logicalAnd(int x,int y)
{
	return !!x & !!y; // !!0 = 0  !!x = 1(x != 0)
}
int logicalOr(int x,int y)
{
	return !!x | !!y; // !!0 = 0  !!x = 1(x != 0)

}
int rotateLeft(unsigned int x,int n)
{
	int N = 0;
	unsigned int MAX = -1;
	while((MAX >> N++) & ~1); // 利用全1掩码的右移最小值为1，判断系统int位数
	return (x << n) | (x >> (N-n)); // 利用无符号整数左右移操作自带补0，及0|x = x   创造 xxxxx00000 | 00000xxxxx = xxxxxxxxxx
}
int parityCheck(unsigned int x)
{
	int count = 0;
	while(x)
	{
		if (x & 1) count++;  // 如果二进制码以1结尾即为奇数
		x >>= 1; // 利用右移操作获得x/2的下取整
	}
	return count & 1; // 返回count的奇偶性
}
int mul2OK(int x) 
{
	int N = 0;
	unsigned int MAX = -1;
	while((MAX >> N++) & ~1) ; //判断位数同上
	return (((x^(x<<1))>>31)&1)^1; // 判断 x 与 x*2 符号位是否相同，同时利用x^1=!x的操作使其返回值符合函数语义
}
int mul3div2(int x)
{
	int y = x + (x<<1); // 向左移1位+原数表示乘三
	return (y>>1) + (((((unsigned)y)>>31)&1) & (y&1));  //如果y是负数且y的末尾为1，即y为负奇数，需要加1向上取整。
}
int subOK(int x,int y)
{
	int N = 0;
	unsigned int MAX = -1;
	while((MAX >> N++) & ~1) ; // 位数判断同上
	if( !((x^y) &(1<<(N-1)))) //符号相同则不会溢出
		return 1;
	return !((x^(x-y)) & (1<< (N-1))); // 返回x与x-y是否符号相同，若不同则为溢出
}
int abs(int x)
{
	int N = 0;
	unsigned int MAX = -1;
	while((MAX >> N++) & ~1) ; // 位数判断同上
	if(!(x& (1<<(N-1)))) return x; // 如果x为正数直接返回
	return ~x+1;  //如果x是负数取反+1获得其绝对值补码
	
}
void test(int x, int y,int index)
{
	printf("x=%08x,y=%08x",x,y);
	printf("\n");
	printf("lsbZero x :: %08x",lsbZero(x));
	printf("\n");
	printf("byteNot x  %d :: %08x",index,byteNot(x,index));
	printf("\n");
	printf("byteXor x y %d :: %08x",index,byteXor(x,y,0));
	printf("\n");
	printf("logicalAnd x y :: %08x",logicalAnd(x,y));
	printf("\n");
	printf("logicalOr x y :: %08x",logicalOr(x,y));
	printf("\n");
	printf("rotateLeft x %d :: %08x",index,rotateLeft(x,index));
	printf("\n");
	printf("parityCheck x :: %08x",parityCheck(x));
	printf("\n");
	printf("mul2OK x :: %08x",mul2OK(x));
	printf("\n");
	printf("mul3div2 x :: %08x",mul3div2(x));
	printf("\n");
	printf("subOK x y :: %08x",subOK(x,y));
	printf("\n");
	printf("abs x :: %08x",abs(x));
	printf("\n");
}
int main()
{
	test(-1,21313,1);
	test(-324,-1,1);
	test(1024, 2048,1);
	return 0;

}
