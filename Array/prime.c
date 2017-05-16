#include<stdio.h>
int main()
{
  int n,flag=1,temp[10],k=0;
  fscanf(stdin,"%d",&n);
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
	{
	  flag=0;
	}
      else
	{
	  temp[k++]=i;
	}
    }
  if(flag)
    {
      fprintf(stdout,"No is prime\n");
      for(int i=0;i<k;i++)
	{
	  fprintf(stdout,"%d\n",temp[i]);
	}
    }
  else
    {
      fprintf(stdout,"no is not prime\n");
    }
  return 0;
}
