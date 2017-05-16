#include<stdio.h>
#include<stdlib.h>
int is_Diagonal_mat(int **mat,int r,int c)
{
  int cnt=0;
  if(!mat)
    {
      return 0;
    }
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  if(r==c)
	    {
	      if(mat[i][j]!=0)
		{
		  cnt++;
		}
	    }
	}
    }
  if(cnt==c)
    {
      return 1;
    }
  return 0;
}
int main()
{
  int r,c;
  int **mat;
  fprintf(stdout,"Enter rows & columns\n");
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
  if(is_Diagonal_mat(mat,r,c))
    {
      fprintf(stdout,"Its a Diagonal matix\n");
    }
  else
    {
      fprintf(stdout,"Not Dig\n");
    }
  return 0;
}
