#include "header.h"
link *Last_ele_head(link *LIST)
{
  link *second_Last=NULL,*last=NULL;
  if(LIST==NULL || LIST->next==NULL)
    {
      return  NULL;
    }
  while(LIST->next)
    {
      second_Last=LIST;
      LIST=LIST->next;
    }
  last=second_Last->next;
  second_Last->next=NULL;
    return last;
}
