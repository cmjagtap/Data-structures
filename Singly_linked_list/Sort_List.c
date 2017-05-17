#include "header.h"
link *Sort_List(link *LIST)
{
  link *result=NULL;
  if(LIST->next!=NULL)
    {
      if(LIST->data > LIST->next->data)
	{
	  result=LIST->next;
	  result->next=Sort_List(LIST->next);
	}
      else
	{
	  result=LIST;
	  result->next=Sort_List(LIST->next);
	}
    }
      return result;
    
}
