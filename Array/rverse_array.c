#include<stdio.h>
#include<stdlib.h>
void Reverse_Array(int *arr,int size)
{
  int temp[size];
  for(int i=size-1;i>=0;i--)
    {
      temp[i]=arr[i];
    }
  fprintf(stdout,"Reverse of Array is\n");
  for(int i=0;i<size;i++)
    {
      fprintf(stdout,"%d\n",temp[i]);
    }
}
int main()
{
  int *arr,size;
  fprintf(stdout,"How many elemnts\n");
  fscanf(stdin,"%d",&size);
  arr=(int *)malloc(sizeof(int)*size);
  for(int i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  Reverse_Array(arr,size);
  return 0;
}
