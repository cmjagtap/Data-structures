#include<stdio.h>
#include<stdlib.h>
int is_symmetric(int **mat,int r,int c)
{
  int flag=1;
   for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  if(r<c)
	    {
	      if(mat[i][j]!=mat[j][i]);
	      {
		flag=0;
	      }
	    }
	}
    }
   if(flag)
     return 1;
   
   return 0;
}

int main()
{
  int r,c,**mat;
  fprintf(stdout,"Enter rows & culumns\n");
  fscanf(stdin,"%d%d",&r,&c);
  mat=malloc(sizeof(int)*r);
  for(int i=0;i<r;i++)
    {
      mat[i]=malloc(sizeof(int)*c);
    }
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  fscanf(stdin,"%d",&mat[i][j]);
	}
    }
  if(is_symmetric(mat,r,c))
    {
      fprintf(stdout,"Matrix is symetric\n");
    }
  else
    {
      fprintf(stdout,"Matrix not symmetric\n");
    }
  return 0;
}

