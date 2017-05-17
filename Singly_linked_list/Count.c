#include "header.h"
int Count_Nodes(link *LIST)
{
  int Count_NODE=0;
  if(LIST==NULL)
    {
      return 1;
    }
  else
    {
      while(LIST!=NULL)
	{
	  Count_NODE++;
	  LIST=LIST->next;
	}
      return Count_NODE;
    }
  return 0;
}
