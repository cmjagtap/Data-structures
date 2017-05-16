#include "header.h"
void displaystack(stack *s1)
{
  int i;
  if(isEmpty(s1))
    {
      printf("Stack is UnderFlow\n");
    }
  else
    {
      printf("Element in Stack is\n");
      for(i=s1->top;i>0;i--)
	{
	  printf("%d\n",s1->data[i]);
	}
    }
}
