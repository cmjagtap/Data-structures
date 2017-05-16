#include<stdio.h>
#include<stdlib.h>
int my_atoi(char *ato)
{
    int res;
    int sign;
    
    res = 0;
    sign = 1;
    //handling space, tab, newline, form feed and carriage return
    while (*ato == ' ' || *ato == '\t' || *ato == '\n' || *ato == '\f' || *ato == '\r')
        ato++;
    //handling negative numbers
    if (*ato == '-')
        sign = -1;
    if (*ato == '-' || *ato == '+')
        ato++;
    while (*ato >= '0' && *ato <= '9')
    {
        res = res * 10 + *ato - '0';
        ato++;
    }
    return (sign * res);
}

int main()
{
  char str[100];
  scanf(" %[^\t\n]s",&str);
  printf("MINE: %d Oringanal %d \n", my_atoi(str),atoi(str));
  return 0;
}
