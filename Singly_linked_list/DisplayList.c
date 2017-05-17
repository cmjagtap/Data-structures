#include "header.h"
void Display(link *LIST)
{
  if(LIST==NULL)
    {
      printf("Empty List\n");
    }
  else
    {
      printf("Elemts in List \n");
      while(LIST!=NULL)
    	{
	  printf("%d\n",LIST->data);
	  LIST=LIST->next;
	  }
    }
}
