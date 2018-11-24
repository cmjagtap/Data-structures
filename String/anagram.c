#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int anagram(char string1[],char string2[])
{
    int first[26]={0},second[26]={0},c=0;
    
    while(string1[c] != '\0')
    {
     first[string1[c] - 'a']++;
     c++;   
    }
    c=0;    
    while(string2[c] != '\0')
    {
        second[string2[c]-'a']++;
        c++;
    }
    for(c=0;c<26;c++)
    {
        if(first[c] != second[c])
        {
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    char string1[100],string2[100];
    scanf("%s",&string1);
    scanf("%s",&string2);

    if(anagram(string1,string2))
    {
        printf("Strings are anagram\n");
    }
    else
    {
        printf("Strings are not anagram\n");
    }
    
    return 0;
}
