#include "header.h"
int isEmpty(Queue *q)
{
  if(q->front ==-1 && q->rear == -1)
    {
      return 1;
    }
  else
    return 0;
}
