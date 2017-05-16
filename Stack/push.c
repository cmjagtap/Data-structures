#include "header.h"
int push(stack *s1,int ele)
{
  if(isfull(s1))
    {
      return 1;
    }
  else
    {
	if(s1->top==-1)
	{
		s1->top++;
	}
      	    s1->top++;
            s1->data[s1->top]=ele;

    }return 0;
}
