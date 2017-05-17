#include "header.h"
int AncestorBT(Tree *root,int e1,int e2)
{
  if(root==NULL)
    {
      return 0;
    }
  if(root->data > e1 && root->data >e2)
    {
      return 0;
    }
  if(root->data < e1 && root->data <e2)
    {
      return 0;
    }
  return root->data;
}
