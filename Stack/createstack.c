#include "header.h"
stack *createstack(int n)
{

  stack *s1=(stack *)malloc(sizeof(stack));
  if(!s1)
    return NULL;
  s1->top=-1;
  s1->capacity=n;
  s1->data=(int *)malloc(sizeof(int )*n);
  return s1;
}
