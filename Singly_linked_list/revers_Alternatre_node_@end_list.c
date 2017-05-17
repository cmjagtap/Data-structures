#include "header.h"
link *Reverse_alternative(link *LIST1,link *LIST2)
{
  link *temp=NULL,*res=NULL;
  if(!LIST1 || !LIST2 )
    {
      return NULL;
    }
  while(LIST1->next && LIST2->next)
    {
      res=LIST1;
      res->next=LIST1->next;
      temp=LIST2;
      temp->next=LIST2->next;
      LIST1=LIST1->next;
      LIST2=LIST2->next;
    }
  res->next=LIST2;
  return res;
}
