#include "header.h"
int Get_Node_Value_fromTail(link *LIST,int positionFromTail)
{
  int cnt=0,value,i;
  link *temp=LIST;
  while(LIST)
    {
      cnt++;
      LIST=LIST->next;
    }
  value=cnt-positionFromTail;
   for(i=0;i<=value;i++)
    {
      if(i==value)
	{
	   return temp->data;
	}
      temp=temp->next;
    }
  return 0;
}
