#include "header.h"
void Print_Single(Tree *root)
{
  if(root==NULL)
    {
      return;
    }
  Print_Single(root->Ltree);
  Print_Single(root->Rtree);
  if(isSingle(root))
    printf("%d\n",root->data);
  
}
