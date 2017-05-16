#include<stdio.h>
#include<stdlib.h>
int check_preorder(int *arr,int size)
{
  for(int i=0;i<size;i++)
    {
      if(arr[i]<=arr[i+1])
	{
	  return 1;
	}
    }
	return 0;

}
int main()
{
  int *arr,size,i;
  fprintf(stdout,"How Many elemnts\n");
  fscanf(stdin,"%d",&size);
  for(i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
if(check_preorder(arr,size))
{
	fprintf(stdout,"Array is preordr\n");
}
  return 0;
}
