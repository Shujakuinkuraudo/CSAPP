#include "add.h"
int add(int s[],int n)
{
	int result=0;
	int i;
	for(i=0;i<n;i++)
		result += s[i];
	return result;
}
