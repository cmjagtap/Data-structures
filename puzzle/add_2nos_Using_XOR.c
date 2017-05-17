#include<stdio.h>
#include<stdlib.h>
void fun_Add(int x,int y)
{
  x=x^y;
  y=y^x;
  x=x^y;
}
int main()
{
  int x,y;
  printf("Enter two no\n");
  scanf("%d% %d",&x,&y);
  fun_Add(x,y);
  printf("value of x=%d y=%d",x,y);
}
