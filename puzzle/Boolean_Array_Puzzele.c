#include<stdio.h>
#include<stdlib.h>
void changeToZero(int *a,int n)
{
  int i,temp;
  for(i=0;i<n;i++)
    {
      if(a[i]==1)
	{
	  temp=a[i];
	  a[i]=0;
	}
    }
}
int main()
{
  int *a,n,i;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  changeToZero(a,n);
  for(i=0;i<n;i++)
    {
      printf(" %d \n", a[i]);
    }
   return 0;
}
