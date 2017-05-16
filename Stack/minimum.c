#include "header.h"
void Minimum(stack *s1)
{
	int i,min=0;
	for(i=(s1->top);i>=0;i--)
	{
		if(s1->data[i]<min)
		{
		  min=s1->top;
		}
	}
	printf("Minimum no is %d",min);
}
