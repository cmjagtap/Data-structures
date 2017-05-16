#ifndef __HEADER__H__
#define __HEADER__H__
#include<stdio.h>
#include<stdlib.h>
#include <limits.h> 
struct mystack
{
  int *data;
  int capacity;
  int top;
};
typedef struct mystack stack;
stack *createstack(int n);
int isfull(stack *s1);
int isEmpty(stack *s1);
int push(stack *s1,int ele);
int pop(stack *s1);
int topstack(stack *s1);
void displaystack(stack *s1);
int Deletstack(stack *s1);
void Maximum(stack *s1);
void Minimum(stack *s1);
#endif
