#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include<stdio.h>
#include<stdlib.h>
struct myqueue
{
  int *data;
  int capacity;
  int rear;
  int front;
};
typedef struct myqueue Queue;
Queue *creatqueue(int c);
int isFull(Queue *q);
int isEmpty(Queue *q);
int enqueue(Queue *q,int ele);
int dequeue(Queue *q);
void display(Queue *q);
int maxele(Queue *q);
void fronts(Queue *q);
void rears(Queue *q);
#endif
