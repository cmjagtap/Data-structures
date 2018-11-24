#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// sort string of 'W' and 'B'
// input WBBWWBWB
// output BBBBWWWW this is minimal approch complexity o(n)
void sortString(char string[])
{
    int len=strlen(string),countB=0;
    for(int i=0;i<len;i++)
    {
        
        if (string[i]=='B') {
            countB++;
        }        
    }
    for(int i=0;i<len;i++)
    {
        countB--;
        string[i]='B';
        if(countB<0)
        {
            string[i]='W';
        }
    }
    printf("%s\n",string);
}
int main(int argc, char *argv[])
{
    char string[100]="WBWBBWWB";
    sortString(string);
    return 0;
}
