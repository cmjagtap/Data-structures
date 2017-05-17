#include "header.h"
int Sum_Node(Tree *root)
{
  if(root==NULL)
    {
      return 0;
    }
  else
    {
      return(root->data + Sum_Node(root->Ltree) + Sum_Node(root->Rtree));
    }
}
