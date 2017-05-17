#include<stdio.h>
#define merge(a,b) b##a
int main()
{
  printf("%d",merge(115,3229));
  return 0;
}
