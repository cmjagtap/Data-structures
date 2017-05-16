#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void print_rotation(int a[],int n,int k)
{ 
  int temp[n],t=0;
  if(k==0)
    {
      return;
    }
  else
    {
      for(int i=0;i<k;i++)
        {
	  temp[i]=a[i];
	}
      for(int i=k;i<n;i++)
        {
        a[t++]=a[i];
	}
      for(int i=0;i<k;i++)
        {
	  a[i+k]=temp[i];
	}
    }
}
void print_array(int a[],int n,int k)
    {
    for(int i=0;i<n;i++)
        {
        fprintf(stdout,"%d ",a[i]);
    }
}
int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++)
      {
       scanf("%d",&a[a_i]);
    }
    print_rotation(a,n,k);
    print_array(a,n,k);
    return 0;
}
