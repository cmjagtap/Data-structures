#include<stdio.h>
#include<stdlib.h>
void array_rotation(int *a,int d,int n)
{
  int i,temp[10],j,k;
  for(i=0;i<d;i++)
    {
      temp[i]=a[i];
    }
  for(i=0;i<n-d;i++)
    {
      a[i]=a[i+d];
    }
  for(j=n-d,k=0;j<n;j++,k++)
    {
      a[j]=temp[k];
    }
}
int main()
{
  int *a,n,i,d;
  fprintf(stdout,"How many elemnts\n");
  fscanf(stdin,"%d",&n);
  a=(int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&a[i]);
    }
  fprintf(stdout,"Enter size to rotate array i.e d\n");
  fscanf(stdin,"%d",&d);
  array_rotation(a,d,n);
  fprintf(stdout,"Elemnts after Rotation\n");
  for(i=0;i<n;i++)
    {
      fprintf(stdout,"%d\n",a[i]);
    }
  return 0;
}
