#include<stdio.h>
#include<stdlib.h>
void snake_mat(int **mat,int m,int n)
{
  int t=0,dir=0,l=0,b=m-1;
  while(t<=b)
    {
      if(dir==0)
	{
	  for(int i=l;i<=n-1;i++)
	    {
	      printf("%d\t",mat[t][i]);
	    }
	  t++;
	  dir=1;
	}
      if(dir==1)
	{
	  for(int i=n-1;i>=l;i--)
	    {
	      printf("%d\t",mat[t][i]);
	    }
	  t++;
	  dir=0;
	}
    }
}
int main()
{
  int **mat,m,n;
  fscanf(stdin,"%d%d",&m,&n);
  mat=malloc(sizeof(int *)*m);
  for(int i=0;i<m;i++)
    {
      mat[i]=malloc(sizeof(int)*n);
    }
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  fscanf(stdin,"%d",&mat[i][j]);
	}
    }
  snake_mat(mat,m,n);
  return 0;
}
