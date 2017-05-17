#include "header.h"
void sublist(link *LIST,link *subList)
{
  int cnt=0;link *temp=subList;
  if(LIST==NULL)
    {
      printf("LIst is Empty\n");
    }
  while(temp)
    {
      cnt++;
      temp=temp->next;
    }
  while(LIST && subList)
    {
      if(LIST->data==subList->data)
	{
	      cnt--;
	}
      subList=subList->next;
      LIST=LIST->next;
    }
  if(cnt==0)
    {
      printf("SubList found\n");
    }
  else
    {
      printf("sublist Not found\n");
    }
}
