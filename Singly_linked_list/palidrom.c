#include "header.h"
int palindrom(link *LIST)
{
  link *fastptr=LIST->next,*slowptr=LIST,*endList,*previos,*current,*temp;
  if(LIST==NULL)
    {
      return 1;
    }
  if(LIST->next==NULL)
    {
      return 1;
    }
  while(fastptr && fastptr->next)
    {
      slowptr=slowptr->next;
      fastptr=fastptr->next->next;
    }
  current=slowptr->next;
  slowptr->next=NULL;
  previos=NULL;
  while(current)
    {
      temp=current->next;/*This is Reverse of Half List*/
      current->next=previos;
      previos=current;
      current=temp;
    }
  endList=previos;
  while(LIST && endList)
    {    
      if(LIST->data!=endList->data)
	{
	  return 0;
	}
      LIST=LIST->next;
      endList=endList->next;
    }
  return 1;
}
