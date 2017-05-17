#include "header.h"
int getWidth(Tree *root,int level)
{
  if(root==NULL)
    {
      return 0;
    }
  if(level==1)
    {
      return 1;
    }
  else if(level>1)
    {
      return (getWidth(root->Ltree,level-1) + getWidth(root->Rtree,level-1));
    }
  return 0;
}

