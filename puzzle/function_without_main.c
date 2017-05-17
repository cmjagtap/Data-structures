#include<stdio.h>
#define fun main
int fun(void)
{
  printf("HEllo \n");
  return 0;
}

/*
OR WAY

include<stdio.h>
#define fun m##a##i##n
int fun()
{
    printf("Geeksforgeeks");
    return 0;
}

 OR WAY 
 WE can create our own main function 
 using direct linux system library _start()
 
#include<stdio.h>

_start()
{
  printf (“GeeksForGeeks”);
  _exit (0);
}

*/
