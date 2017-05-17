#include "header.h"
int sum(link *LIST)
{
  int SM=0;
  if(LIST==NULL)
    {
      return 1;
    }
  else
    {
      while(LIST!=NULL)
	{
	 SM=SM+LIST->data;
	  LIST=LIST->next;
	}
      printf("SUM of List is  %d\n",SM);
      return 0;
    }
}
