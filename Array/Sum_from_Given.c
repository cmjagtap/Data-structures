#include<stdio.h>
int Sum_No(int *a,int n,int k)
{
  int sum=0,i;
  for(i=k;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
int Up_to_sum(int *a,int n,int k)
{
  int sum=0;
  for(int i=0;i<k;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
int main()
{
  int *a,n,k,i,sum,up,except;
  printf("Enter How Many nos\n");
  scanf("%d",&n);
  printf("Entre array elemts\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter K \n");
  scanf("%d",&k);
  sum=Sum_No(a,n,k);
  up=Up_to_sum(a,n,k);
  printf("Sum from K to END is %d\n",sum);
  printf("Sum before 0 to k %d\n",up);
  except=(sum+up)-k;
  printf("Sum except Given No %d\n",except);
}
