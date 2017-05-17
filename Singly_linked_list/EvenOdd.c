#include "header.h"
int EvenOdd(link *LIST)
{
  while(LIST && LIST->next)
    {
      LIST=LIST->next->next;
    }
  if(!LIST)
    return 0;
  return 1;
}

