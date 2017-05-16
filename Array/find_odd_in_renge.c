#include<stdio.h>
int main()
{
  int x,y,i;
  printf("Enter renge from to \n");
  scanf("%d%d",&x,&y);
  for(i=x;i<y;i++)
    {
      if(x%2!=0)
	{
	  printf("%d\n",x);
	}
    }
  return 0;
}
