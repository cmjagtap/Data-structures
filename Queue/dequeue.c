#include "header.h"
int dequeue(Queue *q)
{
  int x;
  if(isEmpty(q))
    {
      return 0;
    }
  else
    {
      x=q->data[q->front++];
    }
  return x;
}
