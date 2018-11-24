#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void countFunction(char string[])
{
    int len=strlen(string),upprCount=0,loweCount=0,digitCount=0,specialcount=0;
    for(int i=0;i<len;i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
            loweCount++;
        }
        else if(string[i]>='A' && string[i]<='Z')
        {
            upprCount++;
        }
        else if(string[i]>= '0' && string[i]<='9')
        {
            digitCount++;
        }
        else
        specialcount++;
    }
    printf("Upper char count = %d \n",upprCount);
    printf("Lowe char count = %d \n",loweCount);
    printf("Numbers count %d \n",digitCount);
    printf("special char count %d \n",specialcount);
}
int main(int argc, char *argv[])
{
    char string[1000];
    fgets(string,1000,stdin);
    countFunction(string);
    return 0;
}
