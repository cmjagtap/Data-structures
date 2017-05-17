#include "header.h"
int chek_bst_structuraly_equal(Tree *root,Tree *root1)
{
  if(!root && !root1)
    {
      return 1;
    }
  if(root==NULL || root1==NULL)
    {
      return 0;
    }
 
  return (chek_bst_structuraly_equal(root->Ltree,root1->Ltree) && chek_bst_structuraly_equal(root->Rtree,root1->Rtree));
  return 0;
}
