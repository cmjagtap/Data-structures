#include<stdio.h>
int fix_point(int *arr,int size)
{
  for(int i=0;i<size;i++)
    {
      if(arr[i]==i)
	{
	  return arr[i];
	}
    }
  return -1;
}
int main()
{
  int *arr,size;
  fprintf(stdout,"How many elemt\n");
  fscanf(stdin,"%d",&size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fprintf(stdout,"Fix ponit found & it is %d \n",fix_point(arr,size));
  return 0;
}
