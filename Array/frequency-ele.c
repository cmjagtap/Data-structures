#include<stdio.h>
#include<stdlib.h>
void Frequenci(int *arr,int size)
{
  for(int i=0;i<size;i++)
    {
     int cnt=1;
      for(int j=i+1;j<size;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      cnt++;
	      i++;
	    }
	}
      fprintf(stdout," %d -> %d\n",arr[i],cnt);
    }
}
void sort(int *arr,int size)
{
  for(int i=0;i<size-1;i++)
    {
      for(int j=i+1;j<size;j++)
	{
	  if(arr[i] >= arr[j])
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
  int *arr,i,size;
  fprintf(stdout,"How many elemts\n");
  fscanf(stdin,"%d",&size);
  for(i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  sort(arr,size);
  Frequenci(arr,size);
  return 0;
}
