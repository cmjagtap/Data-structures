#include "header.h"
int get_fifth_from_last(link *LIST)
{
  int i=5;
  link *temp=LIST,*slowptr=LIST,*fastptr=NULL;
  if(!temp)
    {
      fprintf(stdout,"EMpty LIst\n");
    }
  while(i--)
    {
      temp=temp->next;
    }
  fastptr=temp;
  while(fastptr->next)
    {
      fastptr=fastptr->next;
      slowptr=slowptr->next;
    }
  return slowptr->data;
}

