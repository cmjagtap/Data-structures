#include "header.h"
Tree *Convert_Mirror(Tree *root)
{
  Tree *temp;
  
  if(root)
    {
      Convert_Mirror(root->Ltree);
      Convert_Mirror(root->Rtree);
      temp=root->Ltree;
      root->Ltree=root->Rtree;
      root->Rtree=temp;
    }
  return root;
}
