#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,*a,j,k;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter no to find squre of that equls nos\n");
  scanf("%d",&k);
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  if((a[i]*a[i])+(a[j]*a[j])==(k*k))
	    {
	      printf("No found equal squre of k %d + %d = %d\n",a[i],a[j],k);
	    }
	}
    }
  return 0;
}
