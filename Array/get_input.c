#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  int n,*arr,t;
  fp=fopen("input.txt","w");
  fprintf(stdout,"Enter no of testcases\n");
  fscanf(stdin,"%d",&t);
  fprintf(stdout,"Enter n then n no repeat still test cases\n");
  fprintf(fp,"%d\n",t);
  while(t--)
    {
      fscanf(stdin,"%d",&n);
      fprintf(fp,"%d\n",n);
      arr=(int *)malloc(sizeof(int)*n);
      for(int i=0;i<n;i++)
	{
	  fscanf(stdin,"%d",&arr[i]);
	}
      for(int i=0;i<n;i++)
	{
	  fprintf(fp,"%d\n",arr[i]);
	}
    }
  fclose(fp);
  
}
