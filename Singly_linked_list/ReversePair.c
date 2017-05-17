#include "header.h"
void Reverse_In_pair(link *LIST)
{
  link *temp;
  if(LIST==NULL || LIST->next==NULL)
    return;
  else
    {
      temp=LIST->next;
      LIST->next=temp->next;
      temp->next=LIST;
      Reverse_In_pair(LIST->next);
    }
}
