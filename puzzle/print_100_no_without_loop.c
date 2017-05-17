#include<stdio.h>
void print_No(int n)
{
  if(n>0)
    {
      print_No(n-1);
      printf("%d\n",n);
    }
}
int main()
{
  print_No(100);
  return 0;
}
