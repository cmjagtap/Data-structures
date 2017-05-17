#include "header.h"
int sub_Tree(Tree *root,Tree *root1)
{
  if(root==NULL)
    {
      return 0;
    }
  if(root1==NULL)
    {
      return 1;
    }
  chek_bst_structuraly_equal(root,root1);
  return 1;
  return (sub_Tree(root->Ltree,root1->Ltree) || sub_Tree(root->Rtree,root1->Rtree));
  return 0;
}
