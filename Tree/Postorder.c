#include "header.h"
void Postorder(Tree *root)
{
  if(root!=NULL)
    {
      Postorder(root->Ltree);
      Postorder(root->Rtree);
      printf("%d\n",root->data);
    }
}
