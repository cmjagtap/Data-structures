#include<stdio.h>
#include<stdlib.h>
void common_ele(int *a,int *b,int *c,int n)
{
  int temp[n];
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(a[i]==b[j])
	    {
	      temp[i]=a[i];
	    }	  
	}
    }
  fprintf(stdout,"Common elemnts\n");
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(temp[i]==c[j])
	    {
	      fprintf(stdout," %d\n",c[j]);
	    }	  
	}
    }

}
int main()
{
  int i,j,n,*a,*b,*c,k;
  fprintf(stdout,"Hoow many elemnt?\n");
  fscanf(stdin,"%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  b=(int *)malloc(sizeof(int)*n);
  c=(int *)malloc(sizeof(int)*n);
  fprintf(stdout,"Enter elements fisrt arr \n");
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&a[i]);
    }
  fprintf(stdout,"Enter elements 2nd arr \n");
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&b[i]);
    }
  fprintf(stdout,"Enter elements 3nd arr \n");
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&c[i]);
    }
  common_ele(a,b,c,n);
  return 0;
}
