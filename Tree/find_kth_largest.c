#include "header.h"
int find_kth_largest(Tree *root,int ele)
{
  int cnt=0;
  if(!root)
    {
      fprintf(stderr,"Emptry tree\n");
    }
  while(root)
    {
      root=root->Ltree;
      ele--;
      root=root->Rtree;
      if(ele==0)
	{
	  cnt=root->data;
	}
    }
  return cnt;
}
