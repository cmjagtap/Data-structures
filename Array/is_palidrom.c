#include<stdio.h>
int main()
{
  int n,rev=0,r,t;
  fscanf(stdin,"%d",&n);
  t=n;
  while(n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }
  if(t==rev)
    {
      fprintf(stdout,"No is palidrome\n");
    }
  else
    {
      fprintf(stdout,"Nt palidrome\n");
    }
  return 0;
}
