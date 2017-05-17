#include<stdio.h>
#include<stdlib.h>
int main()
{
  int m,n,flag=0;
  int mat[10][10];
  fprintf(stdout,"Enter dimention of mat mxn \n");
  fscanf(stdin,"%d%d",&m,&n);
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  fscanf(stdin,"%d",&mat[i][j]);
	}
    }
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(mat[i][j]==1)
	    {
	      flag=1;
	      if((mat[i+1][j]==2) || (mat[i-1][j]==2) || (mat[i][j+1]==2) || (mat[i][j-1]==2))
		{
		  mat[i][j]=2;
		}
	   
		  
	    }
	}
      
    }
  if(flag==0)
    {
      fprintf(stdout,"ALl apples are rotten no time required\n");
      for(int i=0;i<m;i++)
	{
	  for(int j=0;j<n;j++)
	    {
	      fprintf(stdout,"%d\t",mat[i][j]);
	    }
	  fprintf(stdout,"\n");
	}
    }
  else if(flag==1)
    {
      fprintf(stdout,"1 unit time required\n");
      for(int i=0;i<m;i++)
	{
	  for(int j=0;j<n;j++)
	    {
	      fprintf(stdout,"%d\t",mat[i][j]);
	    }
	  fprintf(stdout,"\n");
	}
    }
  return 0;
}
