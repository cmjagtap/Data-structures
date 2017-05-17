#include "header.h"
int isLeaf(Tree *root)
{
  if(root->Ltree==NULL || root->Rtree==NULL)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}
