#include<stdio.h>
#include<stdlib.h>
int binarySearch(int *arr, int l, int r, int x)
{
   if (r >= l)
     {
       int mid = l + (r - l)/2;
       if (arr[mid] == x)
	 return mid;
       if (arr[mid] > x)
	 return binarySearch(arr, l, mid-1, x);
       return binarySearch(arr, mid+1, r, x);
     }
    return -1;
}
int main()
{
  int *p,i,n,no,k,res;
  printf("How Many elements\n");
  scanf("%d",&n);
  p=malloc(sizeof(int)*n);
  printf("Enter elemts \n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&p[i]);
    }
  printf("Enter no to search \n");
  scanf("%d",&k);
  printf("Array elemts is \n");
  for(i=0;i<n;i++)
    {
      printf("%d\n",p[i]);
    }
  res=binarySearch(p,0,n,k);
  if(res==-1)
    {
      printf("No not found\n");
    }
  else
    {
      printf("No found is at index %d\n",res);
    }
  return 0;
}
