#include "header.h"
int isLoop(link *LIST)
{
  int FLAG=0;
  link *slowptr=LIST,*fastptr=LIST;
  while(slowptr && fastptr && fastptr->next)
    {
      fastptr=fastptr->next->next;
      slowptr=slowptr->next;
      if(slowptr==fastptr)
	{
	  FLAG=1;
	  break;
	}
    }
  if(FLAG)
    {
      fastptr=fastptr->next;
      while(slowptr!=fastptr)
	{
	  fastptr=fastptr->next;
	}
      printf("List Loop Point is %d\n",fastptr->data);
      return 1;
    }
  return 0;
}
