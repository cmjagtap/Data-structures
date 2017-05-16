#include<stdio.h>
#include<stdlib.h>
void Maximum_Avrage_Subarray(int *arr,int size,int k)
{
  int sum=0,maxsum=0;
  for(int i=0;i<size;i++)
    {
      sum=0;
      for(int j=0;j<k;j++)
	{
	  sum+=arr[j];
	}
      printf("sum %d\n",sum);
      if(sum >maxsum)
	{
	  maxsum=sum;
	}
    }
  fprintf(stdout,"Maximum avrage of of sub array start from %d\n",maxsum);
  
}
int main()
{
  int *arr,size,k;
  fprintf(stdout,"How many elemnts\n");
  fscanf(stdin,"%d",&size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fprintf(stdout,"Enter sub array size\n");
  fscanf(stdin,"%d",&k);
  Maximum_Avrage_Subarray(arr,size,k);
  return 0;
}
