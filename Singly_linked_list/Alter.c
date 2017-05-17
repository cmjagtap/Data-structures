#include "header.h"
void Alternative(link *LIST)
{
  if(LIST->next==NULL)
    printf("%d\n",LIST->data);
  while(LIST && LIST->next)
    {
      printf("%d\n",LIST->data);
      LIST=LIST->next->next;
    }
 
}
