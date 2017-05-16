#include "header.h"
int maxele(Queue *q)
{
  int i,max=0;
  if(isEmpty(q))
    {
      return 1;
    }
  else
    {
  for(i=q->front;i<=q->rear;i++)
    {
      if(q->data[i]>max)
	{
	  max=q->data[i];
	 
	  }
    }
  printf("Maximum no is queue is %d \n",max);
    }    return 0;
}
