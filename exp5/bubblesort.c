#include "bubblesort.h"
void bubblesort(int s[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(s[j]>s[j+1])
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;
			}
		
}
