#include "header.h"
void Split_alternative(link *LIST1,link *LIST2)
{
  if(LIST1 ==NULL || LIST2==NULL)
    {
      return;
    }
  if(LIST1->next)
    {
      LIST1->next=LIST1->next->next;
    }
  if(LIST2->next)
    {
      LIST2->next=LIST2->next->next;
    }
  Split_alternative(LIST1->next,LIST2->next);
}
