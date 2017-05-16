#include<stdio.h>
#include<stdlib.h>
void Check_array_roations(int *arr,int n,FILE *fp1)
{
  int cnt=0,flag=0;
  for(int i=0;i<n-1;i++)
    {
      cnt++;
      if(arr[i]>arr[i+1])
	{
	  flag=1;
	  break;
	}
    }
  if(flag)
    {
      fprintf(fp1,"Array roatated by %d\n",cnt);
    }
  else
    {
      fprintf(fp1,"Array is not roatated\n");
    }
}
int main()
{
  FILE *fp,*fp1;
  int n,t;
  int *arr;
  fp=fopen("input.txt","r");
  fp1=fopen("output.txt","a");
  fscanf(fp,"%d\n",&t);
  while(t--)
    {
      fscanf(fp,"%d\n",&n);
      arr=(int *)malloc(sizeof(int)*n);
      for(int i;i<n;i++)
	{
	  fscanf(fp,"%d\n",&arr[i]);
	}
      Check_array_roations(arr,n,fp1);
    }
}
