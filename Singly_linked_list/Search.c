#include "header.h"
void Search_NO(link *LIST,int Element)
{
  int flag=0;
 	while(LIST!=NULL)
	  {
	    if(LIST->data==Element)
	      {
	      flag=1;
	      break;
	      }
	    LIST=LIST->next;
	  }
   if(flag==1)
    {
      printf("Element found\n");
    }
  else
    {
      printf("Element Not found\n");
    }
}
