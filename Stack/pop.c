#include "header.h"
int pop(stack *s1)
{
  int x;
  if(isEmpty(s1))
    {
      return 1;
    }
  else
    {
      x=s1->data[s1->top];
      s1->top--;
      return (x);
    }
}
