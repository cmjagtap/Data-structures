#include<stdio.h>
#include<stdlib.h>
void Odd_no_times(int *arr,int size)
{
  fprintf(stdout,"Odd nos of time occurnace nos is \n");
  for(int i=0;i<size;i++)
    {
      int cnt=0;
      for(int j=0;j<size;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      cnt++;
	    }
	}
      if(cnt%2!=0)
	{
	    fprintf(stdout," %d\n",arr[i]);
	}
    }
}
int main()
{
  int *arr,size;
  fprintf(stdout,"How many nos?\n");
  fscanf(stdin,"%d",&size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  Odd_no_times(arr,size);
  return 0;
}
