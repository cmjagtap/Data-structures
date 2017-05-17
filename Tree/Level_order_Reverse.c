#include "header.h"
void Level_order_rev(Tree *root,int level)
{
  if(root==NULL)
    {
      return;
    }
  if(level==1)
    {
      fprintf(stdout,"%d",root->data);
    }
  if(level>1)
    {
      Level_order_rev(root->Rtree,level-1);
      Level_order_rev(root->Ltree,level-1);
    }
}
