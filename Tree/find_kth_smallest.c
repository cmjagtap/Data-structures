#include "header.h"
int find_kth_smallest(Tree *root,int ele)
{
  int cnt=0,k=ele-1;
  if(!root)
    {
      fprintf(stdout,"Empty tree\n");
    }
  while(root)
    {
      root=root->Ltree;
      k--;
      root=root->Rtree;
      if(k==0)
	{
	  cnt=root->data;
	}
  
    }
  return cnt;
}

