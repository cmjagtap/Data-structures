#include "header.h"
void Find_Middle(link *LIST)
{
  int i=0;
  link *slowptr,*fastptr;
  slowptr=fastptr=LIST;
  while(fastptr->next!=NULL)
    {
      if(i==0)
	{
	  fastptr=fastptr->next;
	  i=1;
	}
      else
	{
	  if(i==1)
	    {
	      fastptr=fastptr->next;
	      slowptr=slowptr->next;
	      i=0;
	    }
	}
    }
  printf("Middle element is %d\n",slowptr->data);
}
