#include "header.h"
int enqueue(Queue *q,int ele)
{
  if(isFull(q))
    {
      return 1;
    }
  else
    {
      if(q->front==-1)
	{
	  q->front=0;
	}
      q->rear++;
      q->data[q->rear]=ele;
    }return 0;
}
