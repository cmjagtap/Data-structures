#include "header.h"
void Del_LIST(link *LIST)
{
  link *temp,*temp1;
  temp=LIST;
  while(temp!=NULL)
    {
      temp1= temp->next;
      free(temp);
      temp=temp1;

    } LIST=NULL;
  printf("Linked list Successfully Deleted \n");
}
