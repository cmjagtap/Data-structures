#include "header.h"
void fronts(Queue *q)
{
  int ls;
  ls =q->data[q->front];
  printf("Front is %d\n",ls);
}
