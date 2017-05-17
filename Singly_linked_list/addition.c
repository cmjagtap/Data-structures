#include "header.h"
link *Addition(link *LIST,link *List2)
{
  int sum=0;
  link *result=NULL,*newnode=NULL,*temp;
  if(LIST==NULL)
    {
      return List2;
    }
  if(List2==NULL)
    {
      return LIST;
    }
  while(LIST && List2)
    {
      sum=0;newnode=NULL;
      newnode=(link *)malloc(sizeof(link));
      sum = LIST->data + List2->data;
      newnode->data=sum;
      if(result==NULL)
	{
	  result=temp=newnode;
	}
      else
	{ 
	  temp->next=newnode;
	  temp=newnode;
	}
      LIST=LIST->next;
      List2=List2->next;
    }
  return result;
}
