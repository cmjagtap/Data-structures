// Right Rotate array in O(n) complexity
#include<stdio.h>
#include<stdlib.h>
void reverseArray(int *array,int start,int end)
{
  while(start<end)
    {
      int temp=array[start];
      array[start]=array[end];
      array[end]=temp;
      start++;
      end--;
    }
}
void printArray(int *array,int arraySize)
{
  if(arraySize<1)
    {
      printf("Empty Array");
    }
  else
    {
      for(int index=0;index<arraySize;index++)
	{
	  printf("%d \t",array[index]);
	}
      printf("\n");
    }
}
void rotateArrayReversalAlgo(int *array,int arraySize,int rotateBy)
{
  reverseArray(array,0,arraySize-1);
  reverseArray(array,0,rotateBy-1);
  reverseArray(array,rotateBy,arraySize-1);
}
int main()
{
  int *array,arraySize,rotateBy;
  scanf("%d",&arraySize);
  scanf("%d",&rotateBy);
  array=(int *)malloc(sizeof(int)*arraySize);
  for(int index=0;index<arraySize;index++)
    {
      scanf("%d",&array[index]);
    }
  printf("Before Rotation Array\n");
  printArray(array,arraySize);
  rotateArrayReversalAlgo(array,arraySize,rotateBy);
  printf("After Rotation Array\n");
  printArray(array,arraySize);
  
  return 0;
}
