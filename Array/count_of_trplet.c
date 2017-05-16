#include<stdio.h>
#include<stdlib.h>
void counttripletsum(int *arr,int n,int sum)
{
  int i,ans,j,k;
   for(i=0;i<n-2;i++)
     {
       for(j=i+1;j<n-1;j++)
	 {
	   for(k=j+1;j<n;j++)
	    {
	      if(arr[i]+arr[j]+arr[k]<sum)
		{
		  ans++;
		  printf("%d %d %d\n",arr[i],arr[j],arr[k]);
		}
	    }
	
	}
     }
  printf("Smaller sum of triplet is %d\n",ans);
}
int main()
{
  int *arr;
  int i,n,k;
  scanf("%d",&n);
  arr=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
   printf("Enter no k for smaller sum of subarray\n");
  scanf("%d",&k);
  counttripletsum(arr,n,k);
  return 0;
}
