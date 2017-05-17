#include "header.h"
void split(link *LIST)
{
  link *fastptr=LIST->next,*slowptr=LIST,*endList=NULL;
  if(LIST==NULL)
    {
      return;
    }
  if(LIST->next==NULL)
    {
      return;
    }
  while(fastptr && fastptr->next)
    {
      slowptr=slowptr->next;
      fastptr=fastptr->next->next;
    }
  endList=slowptr->next;
  slowptr->next=NULL;
  printf("List one Elements\n");
  while(LIST!=NULL)
    {
      printf("%d\n",LIST->data);
      LIST=LIST->next;
    }
  printf("Elemnts in 2nd List\n");
  while(endList!=fastptr)
    {
      printf("%d\n",endList->data);
      endList=endList->next;
    }
}
