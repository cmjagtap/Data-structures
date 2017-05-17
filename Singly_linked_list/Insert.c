#include "header.h"
void Insert_Pos(link *LIST,int POSITION,int Element)
{
  int i;
  link *newnode,*temp1;
  newnode=(link *)malloc(sizeof(link));
  newnode->data=Element;
  newnode->next=NULL;
  if(POSITION==1)
    {
     newnode->next=LIST;
     LIST=newnode;
    }
  else
    {
      
      for(i=1;i<POSITION;i++)
	{
	  temp1=LIST;
	  LIST=LIST->next;
	}
      temp1->next=newnode;
      newnode->next=LIST;
    }
  
}
