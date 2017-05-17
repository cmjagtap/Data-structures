#include "header.h"
void Duplicate(link *LIST)
{
  int FLAG=0;
  if(LIST==NULL)
    {
      return;
    }
  if(LIST->next==NULL)
    {
      return;
    }
  while(LIST->next!=NULL)
    {
      if(LIST->data == LIST->next->data)
	{
	  FLAG=1;
	  printf("Duplicate No %d\n",LIST->data);
	}
      LIST=LIST->next;
    }
  if(!FLAG)
    {
      printf("No duplicate inList\n");
    }
}
