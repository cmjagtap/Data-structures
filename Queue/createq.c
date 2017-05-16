#include "header.h"
Queue *creatqueue(int c)
{
  Queue *q=(Queue *)malloc(sizeof(Queue));
  q->rear=-1;
  q->front=-1;
  q->capacity=c;
  q->data=(int * )malloc(sizeof(int)*c);
  return q;
}
