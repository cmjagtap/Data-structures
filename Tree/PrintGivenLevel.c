#include "header.h"
void printGivenLevel(Tree *root,int level)
{
  if(root==NULL)
    {
      return;
    }
  if(level==1)
    {
      printf("%d\n",root->data);
    }
  else if(level > 1)
    {
      printGivenLevel(root->Ltree, level-1);
      printGivenLevel(root->Rtree, level-1);
    }
}
