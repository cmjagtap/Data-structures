#include<stdio.h>
#include<stdlib.h>
void selectionSort(int *array,int size)
{
    int min_index;
    
    for(int i = 0; i < size-1; i++)
    {
        min_index=i;
        
        for(int j = i+1; j < size; j++)
        {
            if(array[j]<array[min_index])
            {
                min_index=j;
            }
        }
        int temp=array[min_index];
        array[min_index]=array[i];
        array[i]=temp;
        
    }
    
}
int main(int argc, char *argv[])
{
    int size,key,result;
    scanf("%d",&size);
    int *array=(int *)malloc(sizeof(size));
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Before sort\n");
     for(int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
    }
    printf("after sort\n");
    selectionSort(array,size);
     for(int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
