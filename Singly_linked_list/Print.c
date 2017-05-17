#include "header.h"
void Print_F_End(link *LIST)
{
  if(LIST)
    {
      Print_F_End(LIST->next);
      printf("%d",LIST->data);
    }
}
