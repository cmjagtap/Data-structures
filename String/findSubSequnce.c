//Given two strings, find if seond string is a subsequence of first
//Input: str1 = "AXY", str2 = "ADXCPY"
//Output: True (str1 is a subsequence of str2)
#include<stdio.h>
#include<string.h>
void findSubSequnce(char string[],char substring[])
{
    int len1=strlen(string);
    int len2=strlen(substring),j=0;
    
    for(int  i = 0; i < len1 &&j<len2; i++)
    {
        if(string[i]==substring[j])
        {
            j++;
        }
    }
    if(j==len2)
    {
        printf("SubSequnce found\n");
    }
    else
    {
        printf("No subsequnce\n");
    }
    
}
int main(int argc, char *argv[])
{
    char string[100],substring[10];
    scanf("%s",string);
    scanf("%s",substring);
    findSubSequnce(string,substring);
    return 0;
}
