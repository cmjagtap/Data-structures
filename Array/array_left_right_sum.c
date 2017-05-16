#include<stdio.h>
#include<stdlib.h>
void  left_right_sum(int *arr,int n,int sum)
{
    int i,j,k,rightsum=0,leftsum=0,flag=0;
    for(i=0;i<n;i++)
        {
         for(j=0;j<i;j++)
        {
             leftsum+=arr[j];
         }
        for(k=i+1;k<n;k++)
            {
            rightsum+=arr[k];
        }
        }
    if(leftsum==rightsum)
        {
        printf("YES\n");
		
    }
    else
        {
        printf("NO\n");
    }
}

int main() 
{
    int n,i,*arr,t,sum;
    scanf("%d",&t);
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        {
        fscanf(stdin,"%d",&arr[i]);
        }
        for(i=0;i<t;i++)
            {
               left_right_sum(arr,n,sum); 
                sum+=arr[i];
        }
	return 0;
}
