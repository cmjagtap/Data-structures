#include<stdio.h>
#include<stdlib.h>
void Majority(int *a,int n,FILE *fp1)
{
  int cnt,Maxcnt=0,mid,i,j;
  for(j=0;j<n-1;j++)
    {
      cnt=1;
      for(i=i+1;i<n;i++)
	{
	  if(a[i]==a[j])
	    {
	      cnt++;
	    }
	}
      if(cnt > Maxcnt)
	{
	  Maxcnt=cnt;
	}
    }
  fprintf(fp1,"---------------------------------------\n");
  fprintf(fp1,"MAjority element program output\n");
  fprintf(fp1,"---------------------------------------\n");

  // fprintf(fp1,"Max Count %d\n",Maxcnt);
  mid=n/2;
  if(Maxcnt >= mid)
    {
      fprintf(fp1,"Array Have an Majority\n");
    }
  else
    {
     fprintf(fp1,"Array Doent contain any majority\n");
    }
}
int main()
{
  int i,n,*a,t;
  FILE *fp,*fp1;
  fp=fopen("input.txt","r");
  fp1=fopen("output.txt","a");
  if(!fp)
    {
      fprintf(stderr,"Error\n");
    }
  fscanf(fp,"%d\n",&t);
  while(t--)
    {
      fscanf(fp,"%d\n",&n);
      a=(int *)malloc(sizeof(int)*n);
      for(i=0;i<n;i++)
	{
	  fscanf(fp,"%d\n",&a[i]);
	}
  
      Majority(a,n,fp1);
    }
  fclose(fp);
  fclose(fp1);
}
