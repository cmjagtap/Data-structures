//find minimum element in sorted rotated array?
// we use binary search by modifing to find it in log(n)
#include<stdio.h>
#include<stdlib.h>
int findMinimumBinarySearch(int *array,int start,int end)
{
  if(start==end)//only one element
    {
      return array[start];
    }
  int mid=start + (end-start)/2;
  if(array[start]>array[mid] && array[mid]<array[mid+1]) 
    {
      return findMinimumBinarySearch(array,start,mid);
    }
  if(array[mid]>array[end])
    {
      return findMinimumBinarySearch(array,mid+1,end);
    }
  if(end<start)
    {
      return array[end];
    }
  return array[start];
}
int main()
{
  int *array,arraySize;
  scanf("%d",&arraySize);
  array=malloc(sizeof(int)*arraySize);
  for(int i=0;i<arraySize;i++)
    {
      scanf("%d",&array[i]);
    }
  printf("Min %d\n",findMinimumBinarySearch(array,0,arraySize-1));
  free(array);
  return 0;
}
