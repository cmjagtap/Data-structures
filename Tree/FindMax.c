#include "header.h"
Tree *FindMax(Tree *root)
{
  while(root->Rtree!=NULL)
    {
      root=root->Rtree;
    }
  return (root);
}
