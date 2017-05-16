#include<stdio.h>
#include<stdlib.h>
void Find_Kth_smallest(int *arr,int size,int k)
{
  int cnt=0;
  for(int i=0;i<size-1;i++)
    {
      for(int j=i+1;j<size;j++)
	{
	  if(arr[i]>=arr[j])
	    {
	      int temp=arr[i];
	      arr[i]=arr[j];
	      arr[j]=temp;
	    }
	}
    }
  for(int i=0;i<k-1;i++)
    {
      cnt++;
    }
   fprintf(stdout,"%d\n",arr[cnt]);
}
int main()
{
  int size,k;
  fprintf(stdout,"How many nos?\n");
  fscanf(stdin,"%d",&size);
  int *arr=(int *)malloc(sizeof(int)*size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fprintf(stdout,"Enter k value\n");
  fscanf(stdin,"%d",&k);
  Find_Kth_smallest(arr,size,k);
    return 0;
}
