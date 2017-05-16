#include<stdio.h>
#include<stdlib.h>
void spiral_bootom(int **mat,int m,int n)
{
  int t=0,b=m-1,r=n-1,l=0,dir=0,i;
  while(t<=b && l<=r)
    {
      if(dir==0)
	{
	  for(i=r;i>=l;i--)
	    {
	      printf("%d\t",mat[b][i]);
	    }
	  b--;
	  dir=1;
	}
      else if(dir==1)
	{
	  for(i=b;i>=t;i--)
	    {
	      printf("%d\t",mat[i][l]);
	    }
	  l++;
	  dir=2;
	}
      else if(dir==2)
	{
	  for(i=l;i<=r;i++)
	    {
	      printf("%d\t",mat[t][i]);
	    }
	  t++;
	  dir=3;
	}
      else if(dir==3)
	{
	  for(i=t;i<=b;i++)
	    {
	      printf("%d\t",mat[i][r]);
	    }
	  r--;
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
  spiral_bootom(mat,m,n);
  return 0;
}
