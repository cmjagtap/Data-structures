#include "header.h"
int Search_Ele(Tree *root,int ELE)
{
  if(root==NULL)
    {
      return 0;
    }
  if(root->data==ELE)
    {
      return 1;
    }
  return (Search_Ele(root->Ltree,ELE) || Search_Ele(root->Rtree,ELE));
}
