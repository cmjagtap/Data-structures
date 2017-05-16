//problem of triple sum i.e sum of a[i],a[j],a[k] =n
#include<stdio.h>
int main()
{
  int n,a[100],i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }printf("\n");
  for(j=0;j<n;j++)
    {
      for(i=0;i<n;i++)
	{
	  for(k=0;k<n;k++)
	    {
	      if((a[i] + a[j] + a[k]) ==n)
		{
		  printf("%d %d %d\n",a[i],a[j],a[k]);
		}
	    }
	  
	}
    }
  return 0;
}
