#include "header.h"
void Maximum_sum_level(Tree *root,int level)
{
  int sum=0,maxsum=0;
  if(root==NULL)
    {
      sum=0;
    }
  if(level==1)
    {
      sum=sum+ root->data;
      if(sum>maxsum)
	{
	  maxsum=sum;
	}
    }
  if(level>1)
    {
     
      Maximum_sum_level(root->Ltree,level-1);
      Maximum_sum_level(root->Rtree,level-1);
    }
  printf("Sum %d\n",maxsum);
}
