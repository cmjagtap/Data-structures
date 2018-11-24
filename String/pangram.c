#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isPanagram(char string[])
{
    int alphabet[26]={0};
    int len=strlen(string),i=0;
    while(string[i] != '\0')
    {
      alphabet[string[i]-'a']++;
      i++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(alphabet[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char  *argv[])
{
    char string[100];
    fgets(string,100,stdin);
    int flag=isPanagram(string);
    if(flag)
    {
        printf("String is panagram\n");
    }
    else
    {
        printf("\nstring is not pangram\n");
    }
    return 0;
}
