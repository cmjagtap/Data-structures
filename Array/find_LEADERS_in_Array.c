#include<stdio.h>
#include<stdlib.h>
void Laders_in_Array(int *arr,int size)
{
  int j;
  fprintf(stdout,"Leaders are\n");
  for(int i=0;i<size;i++)
    {
      for( j=i+1;j<size;j++)
	{
	  if(arr[i]<=arr[j])
	    {
	      break;
	    }
	}
      if(j==size)
	{
	  fprintf(stdout,"%d\n",arr[i]);
	}
    }
}
void Leader_in_a(int *arr,int size)
{
  int leader=arr[size-1];
  fprintf(stdout,"Leaders are\n");
  fprintf(stdout,"%d\n",leader);
  for(int i=size-2;i>=0;i--)
    {
      if(leader<arr[i])
	{
	  leader=arr[i];
	  fprintf(stdout,"%d\n",leader);
	}
    }
}
int main()
{
  int *arr,size;
  fprintf(stdout,"How mny nos?\n");
  fscanf(stdin,"%d",&size);
  arr=(int *)malloc(sizeof(int)*size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  Leader_in_a(arr,size);
  return 0;
}
