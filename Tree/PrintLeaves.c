#include "header.h"
void Print_Leaves(Tree *root)
{
  if(root==NULL)
    {
      return;
    }
  Print_Leaves(root->Ltree);
  Print_Leaves(root->Rtree);
  if((isLeaf(root)))
    printf("%d\n",root->data);
}
