#include "header.h"
link *Even_List(link  *LIST)
{
  link *EvenList=NULL,*OddList=NULL;
  link *EvenListEnd=NULL,*OddListEnd=NULL;
  if(LIST==NULL)
    {
      return 0;
    }
  else
    {
      while(LIST!=NULL)
	{
	  if(LIST->data%2==0)
	    {
	      if(EvenList==NULL)
		{
		  EvenList=EvenListEnd=LIST;
		}
	      else
		{
		  EvenListEnd->next=LIST;
		  EvenListEnd=LIST;
		}
	    }
	  else
	    {
	      if(OddList==NULL)
		{
		  OddList=OddListEnd=LIST;
		}
	      else
		{
		  OddListEnd->next=LIST;
		  OddListEnd=LIST;
		}
	    }
	  LIST=LIST->next;
	}
    }
  OddListEnd->next=EvenList;
      return OddList;
}
