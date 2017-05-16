#include "header.h"
int isFull(Queue *q)
{
  if(q->rear==q->capacity-1)
    {
      return 1;
    }
  else
    return 0;
}
