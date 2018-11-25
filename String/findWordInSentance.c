#include<stdio.h>
#include<string.h>
void findWordInSentence(char sentence[],char word[])
{
    char *substr=strtok(sentence," ");
    int count=0,flag=0;
    while(substr != NULL)
    {
        count++;
        if(strcmp(substr,word)==0)
        {
            flag=1;
            break;   
        }
        substr=strtok(NULL," ");     
    }
    if(flag)
    {
        printf("word %s found at position %d\n",word,count);
    }
    
    else
    {
        printf("Word not found\n");
    }
    
}
int main(int argc, char *argv[])
{
    char sentence[1000],word[100];
    fgets(sentence,1000,stdin);
    scanf("%s",word);
    findWordInSentence(sentence,word);
    return 0;
}
