#include<stdio.h>
#include<stdlib.h>
main()
{
  int i,*a,n,j,sum;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter given sum\n");
  scanf("%d",&sum);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  if(a[j]+a[i]==sum)
	    {
	      printf("%d %d\n",a[j],a[i]);
	    }
	}
    }
}
