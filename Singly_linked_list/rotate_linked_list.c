#include "header.h"
void *Linked_list_rotation(link *LIST,int k)
{
  int i;
  link *temp=NULL;
  if(LIST==NULL)
    {
      return NULL;
    }
  for(i=0;i<k;i++)
    {
      LIST=LIST->next;
    }
  temp=LIST->next;
  while(temp)
    {
      temp=temp->next;
    }
  temp->next=
  LIST->next=NULL;
  return temp;
  
}
