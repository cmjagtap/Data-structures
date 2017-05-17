#include "header.h"
void Maximum(link *LIST)
{
	int max=0;
	if(LIST==NULL)
	{
		printf("Empty List\n");
	}
	else
	{
  	while(LIST!=NULL)
    	{
     	 if(max<LIST->data)
		{
	  	max=LIST->data;
		}

         LIST=LIST->next;
    	}
	  printf("Maximum element %d\n",max);
	}
}
