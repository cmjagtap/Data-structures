// reaarange array such that 1st smallet,1st greterst,2nd smallest,2nd gretest
#include<stdio.h>
#include<stdlib.h>
void SortArray(int *array,int size)//buble sort algo
{
  for(int i=0;i<size-1;i++)
    {
      for(int j=i+1;j<size;j++)
	{
	  if(array[i]>array[j])
	    {
	      int temp=array[i];
	      array[i]=array[j];
	      array[j]=temp;
	    }
	}
    }
}
void printArray(int *array,int size)
{
  for(int i=0;i<size;i++)
    {
      printf("%d\t",array[i]);
    }
}
void re_arrangeArray(int *array,int size)
{
  SortArray(array,size);
  int tempArray[size],n=size-1,k=0;
  for(int i=0;i<size;i++)
    {
      if((i+1)%2 == 0)
	{
	  tempArray[i]=array[n--];
	}
      else
	{
	  tempArray[i]=array[k++];
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
  printf("Before sort\n"); 
  printArray(array,size);
  printf("\nAfter sorting\n");
  printArray(array,size);
  printf("\nAfter rearrange array is\n");
  re_arrangeArray(array,size);

  return 0;
}
