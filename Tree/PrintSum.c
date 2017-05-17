#include "header.h"
void Print_Sum_K(Tree *root,int k)
{
  if(root==NULL)
    {
      return;
    }
  if(Sum_Node(root) < k)
    {
      printf("%d\n",root->data);
    }
  Print_Sum_K(root->Ltree,k);
  Print_Sum_K(root->Rtree,k);
}
