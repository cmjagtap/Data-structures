#include "header.h"
void display(Queue *q)
{
  int i;
  if( isEmpty(q))
    printf("Queue is Empty \n");
  else
    {
      printf("Elment is \n");
      for(i=q->front;i<=q->rear;i++)
	{
	  printf("%d\n",q->data[i]);
	}
    }
}
