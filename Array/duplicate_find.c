#include<stdio.h>
int main()
{
  int n,i,a[100],j,cnt=0,temp,t;
  scanf("%d",&t);
  while(t--)
    {
      scanf("%d",&n);
      for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
      for(j=1;j<n;j++)
	{
	  for(i=0;i<n;i++)
	    {
	      if(a[i]>a[j])
		{
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
	    }
	}
     
    }
   
      for(i=0;i<n;i++)
	{
	  if(a[i]==a[i+1])
	    {
	      printf("Dplicate no is %d\n",a[i]);
	    }
	}
   return 0;
}
