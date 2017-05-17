#include "header.h"
void Del_alternative(link *LIST)
{
  link *temp=LIST,*temp1;
  if(temp ==NULL || temp->next==NULL)
    {
      return;
    }
  
  while(temp->next)
    {
      temp1=temp;
      temp=temp->next;
      free(temp1);
      temp->next=temp;
    }
}
