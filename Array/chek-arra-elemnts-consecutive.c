#include<stdio.h>
#include<stdlib.h>
void consecutive(int *arr,int size)
{
  int i,j,temp,cnt=0;
  for(i=0;i<size-1;i++)
    {
      for(j=i+1;j<size;j++)
	{
	  if(arr[i]>=arr[j])
	    {
	      temp=arr[i];
	      arr[i]=arr[j];
	      arr[j]=temp;
	    }
	}

     }
  for(i=0;i<size;i++)
    {
      if(arr[i+1]-arr[i]!=1)
	{
	  cnt++;
	}
      continue;
    }
  if(cnt>1)
    {
      printf("Array is not consecutive\n");
    }
  else
    {
      printf("Array is consecutive\n");
    }
}
int main()
{
  int *arr,i,size;
  fprintf(stdout,"How many elemnst\n");
  fscanf(stdin,"%d",&size);
  for(i=0;i<size;i++)
    {
      fscanf(stdin,"%d",&arr[i]);
    }
  consecutive(arr,size);
  return 0;
}
