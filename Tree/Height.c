#include "header.h"
int Height_Tree(Tree *root)
{
  int Lheight,Rheight;
  if(root==NULL)
    {
      return -1;
    }
  if(root->Ltree==NULL && root->Rtree==NULL)
    {
      return 0;
    }
  Lheight=Height_Tree(root->Ltree);
  Rheight=Height_Tree(root->Rtree);
  if(Lheight>Rheight)
    {
      return Lheight+1;
    }
  else
    {
      return Rheight+1;
    }
}
