#include<stdio.h>
#include<stdlib.h>
void Minimum_occurenace(int *a,int size)
{
  int i,j,maxcnt=0,cnt;
  for(j=0;j<size;j++)
    {
      cnt=1;
      for(i=1;i<size;i++)
	{
	  if(a[i]==a[j])
	    {
	      cnt++;
	    }
	}
      if(cnt>maxcnt)
	{
	  maxcnt=cnt;
	}
    }
  printf("Maximum no of occurance is %d\n",maxcnt);
}
int main()
{
  int *a,n,i;
  printf("How Many elemnts\n");
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  printf("Enter Array \n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]); 
    }
  printf("array elemts\n");
  for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
  Minimum_occurenace(a,n);
}
