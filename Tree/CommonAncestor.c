#include "header.h"
Tree *Ancestor(Tree *root,int e1,int e2)
{
  if(root==NULL)
    {
      return 0;
    }
  if(root)
    {
      if(root->data >e1 && root->data >e2)
	{
	  return Ancestor(root->Ltree,e1,e2);
	}
      if(root->data <e1 && root->data <e2)
	{
	  return Ancestor(root->Rtree,e1,e2);
	}
    }
  return root;
}
