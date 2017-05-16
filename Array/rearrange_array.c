//rearrange given array in such a way that the first element is first maximum and second element is first minimum.
#include<stdio.h>
#include<stdlib.h>
main()
{
  int i,*a,n,j,sum,temp,max=0,max1=0;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(j=0;j<n-1;j++)
    {
      for(i=j+1;i<n;i++)
	{
	  if(a[i]<a[j])
	    {
	      temp=a[i];
	      a[i]=a[j];
	      a[j]=temp;
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    } 
}
