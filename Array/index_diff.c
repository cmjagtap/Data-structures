//find maximum differranec index 
#include<stdio.h>
main()
{
  int i,n,a[100],max=0,diff=0,ten[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=1;i<n-1;i++)
    {
      diff=a[i+1]-a[i];
      if(diff>max)
	{
	  max=diff;
	}
    }
  printf("MAximum Array index differance is %d\n",max);
}
