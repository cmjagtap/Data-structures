#include "header.h"
int isMirror(Tree *root,Tree *root1)
{
  if(root ==NULL && root1==NULL)
    {
      return 1;
    }
  if(root ==NULL || root1==NULL)
    {
      return 0;
    }
  if(root->data != root1->data)
    {
      return 0;
    }
  else
    return isMirror(root->Ltree,root1->Ltree) && isMirror(root->Rtree,root1->Rtree);
}
