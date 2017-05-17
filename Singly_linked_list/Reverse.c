#include "header.h"
void *Reverse_List(link *LIST)
{
  link *temp=NULL,*nextptr=NULL;
  if(LIST==NULL)
    {
      printf("List is Empty\n");
    }
  else
    {
      while(LIST)
	{
	  nextptr=LIST->next;
	  LIST->next=temp;
	  temp=LIST;
	  LIST=nextptr;
	}
    }
  return temp;
}
