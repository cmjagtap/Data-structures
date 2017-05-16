#include<stdio.h>
int sum_no(int arr[],int line,int n)
{
  int sum=0;
    for(int i=0;i<n;i++)
      {
	if(i==line)
	{
	  sum+=arr[i];
	}
      }
    return sum;
}
int main()
{
  int n,sum=0,i,T,ele;
  fscanf(stdin,"%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fscanf(stdin," %d",&T);
  while(T-->0)
    {
      fscanf(stdin,"%d",ele);
      sum+=sum_no(arr,ele,n);
    }
  fprintf(stdout,"%d\n",sum);
  return 0;
}
