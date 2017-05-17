#include<stdio.h>
#define MACRO(num,str)do{\
    printf("%d",num);\
    printf(" is ");\
    printf("%s number ",str);\
    printf("\n");\
  }while(0)
int main()
{
  int num;
  scanf("%d",&num);
  if(num & 1)
    MACRO(num,"ODD");
  else
    MACRO(num,"EVEN");
  return 0;
}
