#include<stdio.h>
#include<stdlib.h>
void product_of_array(int *a,int n)
{
  int i,j,*left,*right,*prod;
  left=(int *)malloc(sizeof(int)*n);
  right=(int *)malloc(sizeof(int)*n);
  prod=(int *)malloc(sizeof(int)*n);
  left[0]=1;
  right[n-1]=1;

  for(i=0;i<n;i++)
    left[i]=a[i-1]*left[i-1];
  
  for(j=n-2;j>=0;j--)
    right[j]=a[j+1]*right[j+1];
  
  for(i=0;i<n;i++)
    prod[i]=left[i]*right[i];

  printf("Product of array is \n");
  for(i=0;i<n;i++)
    {
      printf("%d\n",prod[i]);
    }
}
int main()
{
  int *a,n,i,j,*left,*right,*prod;
  printf("How Many nos?\n");
  scanf("%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  product_of_array(a,n);
  return 0;
}
