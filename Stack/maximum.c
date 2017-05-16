#include "header.h"
void Maximum(stack *s1)
{
	int i,max=INT_MIN;
	for(i=s1->top;i>=0;i--)
	{
		if(s1->data[i]>max)
		{
		  max=s1->top;
		}
	}
	printf("Maximum no is %d",max);
}
