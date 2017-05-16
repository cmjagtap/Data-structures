#include<stdio.h>
#include<stdlib.h>
main()
{
  int i,j,n,*a;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Sum equal zero no is \n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  if(a[i]+a[j]==0)
	    {
	      printf("%d %d = 0\n",a[i],a[j]);
	    }
	}
    }
}
