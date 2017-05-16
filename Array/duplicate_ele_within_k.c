#include<stdio.h>
#include<stdlib.h>
void duplicate(int *a,int n,int k)
{
  fprintf(stdout,"Duplicate elements\n");
  for(int i=0;i<k-1;i++)
    {
      for(int j=i+1;j<k;j++)
	{
	  if(a[i]==a[j])
	    {
	      fprintf(stdout,"%d\n",a[i]);
	    }
	}
    }
}
int main()
{
  int *a,i,n,k;
  fprintf(stdout,"How mny nos\n");
  fscanf(stdin,"%d",&n);
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&a[i]);
    }
  fprintf(stdout,"Enter k\n");
  fscanf(stdin,"%d",&k);
  duplicate(a,n,k);
  return 0;
}
