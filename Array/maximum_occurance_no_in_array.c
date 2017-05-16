#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,j,max=0,a[100],cnt=0;
  char str[20];
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  fprintf(stdout,"Enter str\n");
  fscanf(stdin,"%s",str);
  for(i=0;i<n;i++)
    {
      cnt=0;
      for(j=0;j<n;j++)
	{
	  if(a[i]==a[j])
	    {
	      cnt++;
	    }
	} if(cnt>max)
	    max=cnt;
    }
  system(str);
  printf("Maximum occurance is  %d\n",max);
  return 0;
}
