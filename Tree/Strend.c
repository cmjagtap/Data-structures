#include "header.h"
int Strend(Tree *root,int k)
{
   
  if(root==NULL)
    {
      return 0;
    }
  if(Sum_Node(root) < k)
     printf("%d\n",root->data);
   return (Height_Tree(root));
   Strend(root->Ltree,k);
   Strend(root->Rtree,k);
   
}
