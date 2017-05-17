#include<stdio.h>
void setBit(int no,int bt)
{
  no<<=1;
  printf("%d\n",no);
}
int main()
{
  int i,n,bt;
  printf("Enter a nos\n");
  scanf("%d",&n);
  printf("Enter a BIT \n");
  scanf("%d",&bt);
  setBit(n,bt);
  return 0;
}
