#include "header.h"
void Inorder(Tree *root)
{
  if(root!=NULL)
    {
      Inorder(root->Ltree);
      printf("%d\n",root->data);
      Inorder(root->Rtree);
    }
}
