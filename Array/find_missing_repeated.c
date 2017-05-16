#include<stdio.h>
#include<stdlib.h>
void partition(int *a,int,int);
void merge(int *a,int,int,int,int);
void partition(int *a,int i,int j)
{
  int mid;
  if(i<j)
    {
      mid=(i+j)/2;
      partition(a,i,mid);
      partition(a,mid+1,j);
      merge(a,i,mid,mid+1,j);
    }
}
void merge(int *a,int i1,int j1,int i2,int j2)
{
  int k=0,x,y,i,temp[10000];
  x=i1;
  y=i2;
  while(x<=j1 && y<=j2)
    {
      if(a[x]< a[y])
	{
	  temp[k]=a[x];
	  k++,x++;
	}
      else
	{
	  temp[k]=a[y];
	  k++,y++;
	}
    }
  while(y<=j2)
    {
      temp[k]=a[y];
      k++,y++;
    }
  while(x<=j1)
    {
      temp[k]=a[x];
      k++,x++;
    }
  k=0;
  for(i=i1;i<=j2;i++)
    {
      a[i]=temp[k];
      k++;
    }
}
int main()
{
  int i,n,*a,flag=0;
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  printf("enter elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  partition(a,0,n-1);
  for(i=0;i<n;i++)
    {
      if()
	{
	  printf("missing elements is %d\n",i+1);
	}
    }
  printf("Reapeted element  is \n");
    for(i=0;i<n;i++)
      {
	if(a[i]==a[i+1])
	  {
	    printf("%d\n",a[i]);
	  }
      }
     
  return 0;
}
