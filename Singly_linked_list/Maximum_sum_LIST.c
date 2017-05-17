#include "header.h"
link *Maximum_sum_LIST(link *LIST1,link *LIST2)
{
  link *res=NULL,*temp=NULL;
  if(LIST1==NULL)
    {
      res=LIST2;
    }
  if(LIST2==NULL)
    {
      res=LIST1;
    }
  while(LIST1 && LIST2)
    {
      link *newnode=(link *)malloc(sizeof(link));
      newnode->data=LIST1->data +LIST2->data;
      newnode->next=NULL;
      if(res==NULL)
	{
	  res=temp=newnode;
	}
      else
	{
	  temp->next=newnode;
	  temp=newnode;
	}
      LIST1=LIST1->next;
      LIST2=LIST2->next;
    }
  return res;
}
