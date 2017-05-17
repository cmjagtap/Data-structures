#include "header.h"
void height_tree(Tree *root)
{
  int maxht,lht=0,rht=0;
  if(root==NULL)
    {
      maxht=1;
    }
  while(root)
    {
      if(root->Ltree)
      {
	lht++;
      }
      if(root->Rtree)
	{
	  rht++;
	}
      if(lht>rht)
	{
	  maxht=lht;
	}
      else
	{
	  maxht=rht;
	}
      root=root->Ltree;
      root=root->Rtree;
    }
  fprintf(stdout,"Height %d",maxht);
}
