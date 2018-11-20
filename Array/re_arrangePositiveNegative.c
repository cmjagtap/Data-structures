//Move all negative elements to front in order with extra space allowed
#include<stdio.h>
#include<stdlib.h>
void printArray(int *array,int size)
{
  if(size<1)
    {
      printf("Empty Array");
    }
  for(int i=0;i<size;i++)
    {
      printf("%d \t",array[i]);
    }
}
void re_ArrangeArray(int *array,int size)
{
  int tempArray[size],k=0;
  for(int i=0;i<size;i++)
    {
      if(array[i]<0)
	{
	  tempArray[k++]=array[i];
	}
    }
  for(int i=0;i<size;i++)
    {
      if(array[i]>0)
	{
	  tempArray[k++]=array[i];
	}
    }
  printArray(tempArray,size);
}
int main()
{
  int *array,size;
  scanf("%d",&size);
  array=malloc(sizeof(int)*size);
  for(int i=0;i<size;i++)
    {
      scanf("%d",&array[i]);
    }
  re_ArrangeArray(array,size);
  return 0;
}
