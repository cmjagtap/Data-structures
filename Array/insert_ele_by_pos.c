#include<stdio.h>
main()
{
  int a[100],n,i,c,m,ele,pos,cnt=0;
  fprintf(stdout,"Enter No of elements \n");
  fscanf(stdin,"%d",&n);
  fprintf(stdout,"Enter elemts \n");
  for(i=0;i<n;i++)
    {
      fscanf(stdin,"%d",&a[i]);
    }
  printf("Array is \n");
  for(i=0;i<n;i++)
    {
      printf("\t%d\n",a[i]);
    }
  printf("Enter element to insert & pos \n");
  scanf("%d %d",&ele,&pos);
  for(i=n;i>=pos-1;i--)
    {
      a[i+1]=a[i];
      
    } a[pos-1]=ele;
  
  
  printf("After inserting array is \n");
  for(i=0;i<=n;i++)
    {
      printf("%d\n",a[i]);
    }
}
