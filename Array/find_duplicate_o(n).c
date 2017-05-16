#include<stdio.h>
#include<stdlib.h>
void duplicate(int a[],int n)
{
  int i;
  fprintf(stdout,"Duplicate elemnt\n");
  for(i=0;i<n;i++)
    {
      if(a[abs(a[i])] >=0)
	{
	  a[abs(a[i])]=-a[abs(a[i])];
	}
      else
	{
	  fprintf(stdout,"%d\n",abs(a[i]));
	}
    }
}
int main()
{
  int *a,i,n;
  fprintf(stdout,"How many no\n");
  fscanf(stdin,"%d",&n);
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&a[i]);
    }
  duplicate(a,n);
  fprintf(stdout,"After operations array is \n");
  for(i=0;i<n;i++)
    {
      fprintf(stdout,"%d\n",abs(a[i]));
    }
  return 0;
}
