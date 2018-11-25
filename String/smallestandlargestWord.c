#include<stdio.h>
#include<string.h>
void findSmallestLargestWord(char string[])
{
    char *token=strtok(string," ");
    char maxWord[10],minWord[10];
    int max=0,min=9999;
    while(token!=NULL)
    {
        int len=strlen(token);
        if(max<len)
        {
            max=len;
            strcpy(maxWord,token);
        }
        else if(min>len)
        {
            min=len;
            strcpy(minWord,token);
        }
        printf("%s\n",token);
        token=strtok(NULL," ");
    }
    printf("Maximum length is %d and word is %s\n",max,maxWord);
    printf("Minimum length is %d and word is %s\n",min,minWord);
}
int main(int argc, char *argv[])
{
    char string[100];
    fgets(string,100,stdin);
    findSmallestLargestWord(string);
    return 0;
}
