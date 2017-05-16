#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *a,*b,n1,n2,i,j;
  a=(int *)malloc(sizeof(int));
  b=(int *)malloc(sizeof(int));
  printf("Enter 1st array size\n");
  scanf("%d",&n1);
  printf("Enter Elemnts\n");
  for(i=0;i<n1;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter 2Nd array size\n");
  scanf("%d",&n2);
  printf("Enter 2nd ArrayElments\n");
  for(i=0;i<n2;i++)
    {
      scanf("%d",&b[i]);
    }
  printf("Common Elemnt\n");
  for(i=0;i<n1;i++)
    {
      for(j=0;j<n2;j++)
	{
	  if(a[i]==b[j])
	    {
	      printf("%d\n",a[i]);
	    }
	}
    }
}
