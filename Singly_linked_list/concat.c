#include "header.h"
link *Concat(link *LIST,link *List2)
{
  link *result=NULL;
  if(LIST==NULL)
    {
      return List2;
    }
  if(List2==NULL)
    {
      return LIST;
    }
  if(LIST==NULL && List2==NULL)
    {
      return NULL;
    }
  if(LIST !=NULL)
    {
      result=LIST;
      result->next=Concat(LIST->next,List2);
      if(LIST==NULL)
	{
	  result->next=List2;
	}
    }
  return result;
}
 
