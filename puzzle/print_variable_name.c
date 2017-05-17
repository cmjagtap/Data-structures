#include<stdio.h>
#define printvar(var) #var
int main()
{
  int hello;
  printf("%s",printvar(hello));
  return 0;
}
