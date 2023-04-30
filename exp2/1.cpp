#include "stdio.h"
int lsbZero(int x)
{
	return x&(~1);
}
int byteNode(int x,int n)
{
	return x^(1<<n);
}
int byteXor(int x,int y,int n)
{
	return ((x^y)>>n) & 1;
}
int logicalAnd(int x,int y)
{
	return !!x & !!y;
}
int logicalOr(int x,int y)
{
	return !!x | !!y;
}
int rotateLeft(int x,int n)
{
	int N = sizeof(x) * 8;
	return (x<<n)|(x>> (N-n));
}
int parityCheck(int x)
{
	int count = 0;
	while(x)
	{
		if(x&1) count++;
		x >>= 1;
	}
	return x&1;
}
int mul2OK(int x)
{
	int N =sizeof(x)*8;
return :wq

}
int main()
{
	return 0;
}
