#include<stdio.h>
#include<stdlib.h>
void Find_K_Largest_No(int * arr,int size,int k)
{
  for(int i=0;i<size-1;i++)
    {
      for(int j=i+1;j<size;j++)
	{
	  if(arr[i]<=arr[j])
	    {
	      int temp=arr[i];
	      arr[i]=arr[j];
	      arr[j]=temp;
	    }
	}
    }
  fprintf(stdout,"Largest nos is \n");
  for(int i=0;i<k;i++)
    {
      fprintf(stdout,"%d\n",arr[i]);
    }
}
int main()
{
  int *arr,size,k;
  fprintf(stdout,"How mny nos?\n");
  fscanf(stdin,"%d",&size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fprintf(stdout,"Enter how many maximum no?\n");
  fscanf(stdin,"%d",&k);
  Find_K_Largest_No(arr,size,k);
  return 0;
}
