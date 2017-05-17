#include "header.h"
link *Del_Duplicate_value(link *LIST)
{
  link *Temp=LIST;
  while(LIST->next)
    {
      if(LIST->next->data == LIST->data)
	{
	  LIST->next=LIST->next->next;
	}
      else
	{
	  LIST=LIST->next;
	}
    }
  return Temp;
}
