#include "header.h"
void  Retrive_Last(link *LIST)
{
  link *fastptr=LIST,*temp;
  if(LIST==NULL)
    {
      return;
    }
  if(LIST->next==NULL)
    {
      printf("%d\n",LIST->data);
    }
  while(fastptr)
    {
      temp=fastptr;
      fastptr=fastptr->next;
    }
  printf("Last Element is Deleted %d\n",temp->data);
  free(temp);
  
}
