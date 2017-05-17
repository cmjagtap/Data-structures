#include "header.h"
void Preorder(Tree *root)
{
 
  if(root!=NULL)
    {
      printf("%d\n",root->data);
      Preorder(root->Ltree);
      Preorder(root->Rtree);
    }
}
