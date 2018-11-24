#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int countWords(char string[])
{
    int len=strlen(string),count=1;
    for(int i=0;i<len;i++)
    {
        if(string[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main(int argc, char *argv[])
{
    char string[1000];
    fgets(string,1000,stdin);
    printf("countOfWords is %d\n",countWords(string));
    return 0;
}
