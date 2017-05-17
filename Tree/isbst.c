#include "header.h"
int isBST(Tree *root)
{
  if(root==NULL)
    {
      return 1;
    }
  if(root->Ltree!=NULL && root->Ltree->data >root->data)
    {
      return 0;
    }
  if(root->Rtree!=NULL && root->Rtree->data <root->data)
    {
      return 0;
    }
  if(isBST(root->Ltree) || isBST(root->Rtree))
    {
      return 0;
    }
  return 1;
}
