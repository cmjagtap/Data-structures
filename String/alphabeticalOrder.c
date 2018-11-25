#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sortStrings(char names[10][10],int size)
{
        char temp[10];
        for(int i = 0; i < size-1; i++)
        {
            for(int j = i+1; j < size; j++)
            {
                if(strcmp(names[i],names[j])>0)
                {
                    strcpy(temp,names[i]);
                    strcpy(names[i],names[j]);
                    strcpy(names[j],temp);
                }
            }
            
        }
        
}
void printStrings(char names[10][10],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%s\t",names[i]);
    }
}
int main(int argc, char const *argv[])
{
    int size;
    scanf("%d",&size);
    char names[10][10];
    for(int i=0;i<size;i++)
    {
        scanf("%s",names[i]);
    }
    printf("Before sorting\n");
    printStrings(names,size);
    printf("\nAfter sorting\n");
    sortStrings(names,size);
    printStrings(names,size);
    return 0;
}
