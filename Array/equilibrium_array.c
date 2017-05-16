#include<stdio.h>
#include<stdlib.h>
int equilibrium(int *arr,int size,int n)
{
  int sum = 0,leftsum = 0,i;
  for (i = 0; i < n; ++i)
    {
      sum += arr[i];
      
      for( i = 0; i < n; ++i)
	{
	  sum -= arr[i];
	  
	  if(leftsum == sum)
	    return i;
	  
	  leftsum += arr[i];
	}
      
      return -1;
    }
}
int main()
{
  int *arr,i,size,arrsum,ls;
  fprintf(stdout,"How many nos?\n");
  fscanf(stdin,"%d",&size);
  for(i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
      arrsum+=arr[i];
    }
  fprintf(stdout,"Array sum = %d\n",arrsum);
  ls=equilibrium(arr,size,size/2);
  fprintf(stdout,"Arra is equlibrium %d\n",ls);
  return 0;
}
