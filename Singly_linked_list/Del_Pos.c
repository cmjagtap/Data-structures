#include "header.h"
void  Del_By_Pos(link *LIST,int POS)
{
  link *temp;
  int i;
  temp=LIST;
  if(POS==1)
    {
      
      temp->next=temp->next->next;
      free(temp);
    }
  else
    {
      for(i=2;i<POS;i++)
	{
	  temp=temp->next;
	}
        
	temp->next=temp->next->next;
     free(temp);
      }
}
