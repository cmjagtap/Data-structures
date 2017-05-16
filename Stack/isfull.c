#include "header.h"
int isfull(stack *s1)
{
  if(s1->top==s1->capacity- 1)
    return 1;
  else
    return 0;
}
