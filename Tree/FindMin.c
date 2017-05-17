#include "header.h"
Tree *FindMin(Tree *root)
{
  while(root->Ltree!=NULL)
    {
      root=root->Ltree;
    }
  return root;
}
