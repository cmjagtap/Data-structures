#include<stdio.h>
#include<stdlib.h>
int **rotate_mat(int **mat,int m,int n)
{
  int t=0,b=m-1,r=n-1,l=0,dir=0;
  int **mat1;
  mat1=malloc(sizeof(int *)*m);
  for(int i=0;i<m;i++)
    {
      mat1[i]=malloc(sizeof(int)*n);
    }
  while(t<=b && l<=r)
    {
      if(dir==0)
	{
	  for(int i=t;i>=b;i--)
	    {
	      mat1[i][t]=mat[i][t];
	    }
	  l++;
	  dir=1;
	}
      if(dir==1)
	{
	  for(int i=l;i<=r;i++)
	    {
	      mat1[t][i]=mat[t][i];
	    }
	  t++;
	  dir=2;
	}
      if(dir==2)
	{
	  for(int i=t;i<=b;i++)
	    {
	      mat1[i][r]=mat[i][r];
	    }
	  r--;
	  dir=3;
	}
      if(dir==3)
	{
	  for(int i=r;i>=l;i--)
	    {
	      mat1[b][i]=mat[b][i];
	    }
	  b--;
	  dir=0;
	}
    }
  return mat1;
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
  mat=rotate_mat(mat,m,n);
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  fprintf(stdout,"%d\t",mat[i][j]);
	}
    }
  return 0;
}
