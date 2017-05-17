#include "header.h"
int identical_bst(Tree *root,Tree *root1)
{
  if(root==NULL && root1==NULL)
    {
      return 1;
    }
  if(root==NULL || root1==NULL)
    {
      return 0;
    }
  return(root->data == root1->data && identical_bst(root->Ltree,root1->Ltree) && identical_bst(root->Rtree,root1->Rtree));
}
