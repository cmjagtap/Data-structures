#include "header.h"
int succesor(Tree * root,int key)
{
  if(root==NULL)
    {
      return 0;
    }
  if(root->data > key)
    {
      succesor(root->Ltree,key);
    }
  else if(root->data <key)
    {
      succesor(root->Rtree,key);
    }
  return root->data;
}
