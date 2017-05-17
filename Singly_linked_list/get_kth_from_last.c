#include "header.h"
int get_kth_from_last(link *LIST,int k)
{
  link *temp=LIST,*fastptr=NULL,*slowptr=LIST;
  if(!temp)
    {
      fprintf(stdout,"Empty List\n");
    }
  while(k--)
    {
      temp=temp->next;
      if(temp==NULL)
	{
	  fprintf(stdout,"Enter k value int between range of list\n");
	  break;
	}
    }
  fastptr=temp;
  while(fastptr->next)
    {
      fastptr=fastptr->next;
      slowptr=slowptr->next;
    }
  return slowptr->data;
  
}
