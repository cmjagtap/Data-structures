#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//find initials of string
//input "Chandramohan jagtap"
//output C J
void findinitials(char name[])
{   
 int len=strlen(name);
 printf("%c\t",toupper(name[0]));
 for(int i = 0; i < len; i++)
 {
     if(name[i]== ' ')
     {
         printf("%c\t",toupper(name[i+1]));
     }
 }
 printf("\n");
    
}
int main()
{
    char name[500];
    fgets(name,500,stdin);
    findinitials(name);
    return 0;
}
