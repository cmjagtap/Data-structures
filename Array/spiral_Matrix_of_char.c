#include<stdio.h>
#include<stdlib.h>
void Spiral_Matrix(int **arr,int m,int n)
{
  int t=0,b=m-1,l=0,r=n-1,dir=0;
  while(t<=b  && l<=r)
    {
      if(dir==0)
	{
	  for(int i=l;i<=r;i++)
	    {
	      printf("%d\t",arr[t][i]);
	    }
	  dir=1;
	  t++;
	}
      else if(dir==1)
	{
	  for(int i=t;i<=b;i++)
	    {
	      printf("%d\t",arr[i][r]);
	    }
	  dir=2;
	  r--;
	  
	}
      else if(dir==2)
	{
	  for(int i=r;i>=l;i--)
	    {
	      printf("%d\t",arr[b][i]); 
	    }
	  dir=3;
	  b--;
	}
      else if(dir==3)
	{
	  for(int i=b;i>=t;i--)
	    {
	      printf("%d\t",arr[i][l]);
	    }
	  l++;
	  dir=0;
	  
	}
            
    }
  printf("\n");
}
void print_Matrix(char arr[][15],int r,int c)
{
  for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  fprintf(stdout,"%c ",arr[i][j]);
	}
    }
}
int main()
{
  int r,c;
  fprintf(stdout,"Enter no of rows & no of columns?\n");
  fscanf(stdin,"%d %d",&r,&c);
   char arr[15][15];
   /* arr=malloc(sizeof(char *)*r);
   for(int i=0;i<r;i++)
     {
       arr[i]=malloc(sizeof(char)*c);
       }*/
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
	{
	  fscanf(stdin,"%c",&arr[i][j]);
	}
    }
    fprintf(stdout,"Matrix in sprial order\n");
    // Spiral_Matrix(arr,r,c);
    print_Matrix(arr,r,c);
  return 0;
}
