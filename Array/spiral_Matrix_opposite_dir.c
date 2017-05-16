#include<stdio.h>
#include<stdlib.h>
void spiral_opposite(int **mat,int m,int n)
{
  int t=0,b=m-1,r=n-1,l=0;
  int dir=0;
  while(t<=b && l<=r)
    {
      if(dir==0)
	{
	  for(int i=t;i<=b;i++)
	    {
	      printf("%d\t",mat[i][l]);
	    }
	  dir=1;
	 l++;
	}
      else if(dir==1)
	{
	  for(int i=l;i<=r;i++)
	    {
	      printf("%d\t",mat[b][i]);
	    }
	  dir=2;
	  b--;
	}
      else if(dir==2)
	{
	  for(int i=b;i>=t;i--)
	    {
	      printf("%d\t",mat[i][r]);
	    }
	  r--;
	  dir=3;
	}
      else if(dir==3)
	{
	  for(int i=r;i>=l;i--)
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
  int m,n,**mat;
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
  spiral_opposite(mat,m,n);
}
