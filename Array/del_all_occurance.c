#include<stdio.h>
#include<stdlib.h>
void del_occurance(int *arr,int n,int key)
{
  int flag=0,pos=0;
  for(int i=0;i<n;i++)
    {
      if(arr[i]==key)
	{
	  flag=1;
	}
    }
  if(flag)
    {
      for(int i=0;i<n-1;i++)
	{
	  for(int j=1;j<n;j++)
	    {
	      if(arr[i]==arr[j]==key)
		{
		  pos=i;
		}
	    }
	}
    }
  else
    {
      fprintf(stdout,"key not found in array\n");
    }
  for(int i=pos;i<n;i++)
    {
      arr[i]=arr[i+1];
      n--;
    }
  for(int i=0;i<n;i++)
    {
      fprintf(stdout,"%d\n",arr[i]);
    }
}
void print_array(int *arr,int n)
{

  if(!arr)
    {
      fprintf(stdout,"Array not created\n");
    }
  
}
int main()
{
  int n,*arr,key;
  fscanf(stdin,"%d",&n);
  arr=(int *)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  fprintf(stdout,"Enter key\n");
  fscanf(stdin,"%d",&key);
  del_occurance(arr,n,key);
  print_array(arr,n);
  return 0;
}
