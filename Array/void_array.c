#include<stdio.h>
#include<stdlib.h>
int main()
{
  void *data;
  int n;
  fscanf(stdin,"%d",&n);
  data=(int *)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)
    {
      fscanf(stdin,"%d",*(int *)&data[i]);
    }
  for(int i=0;i<n;i++)
    {
      fprintf(stdout,"%d",*(int *)(data[i]));
    }
  return 0;
}

