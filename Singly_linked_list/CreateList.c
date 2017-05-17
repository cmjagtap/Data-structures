#include "header.h"
link *CreateList(link *LIST,int SIZE)
{
  int i;
  link *temp;
  link *newnode=NULL;
  for(i=0;i<SIZE;i++)
    {
      newnode=(link *)malloc(sizeof(link));
      scanf("%d",&newnode->data);
      if(LIST==NULL)
	{
	  LIST=temp=newnode;
	}
      else
	{
	  temp->next=newnode;
	  temp=newnode;
	}
      
    }
    return (LIST);
}
