#include "header.h"
int isSingle(Tree *root)
{
  if(root->Ltree==NULL && root->Rtree==NULL)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}
