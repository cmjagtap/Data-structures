#include<stdio.h>
#include<stdlib.h>
void NO_occurances(int *arr,int size,int k)
{
  for(int i=0;i<size;i++)
    {
     int cnt=1;
      for(int j=i+1;j<size;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      cnt++;
	    }
	}
      if(arr[i]==k)
	{
	  fprintf(stdout,"No of ocuurances of given no %d = %d\n",k,cnt);
	   break;
	}
    }
}
void sort(int *arr,int size)
{
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
  fprintf(stdout,"Enter No to find occurance\n");
  fscanf(stdin,"%d",&k);
  //sort(arr,size);
  NO_occurances(arr,size,k);
  return 0;
}
