#include "header.h"
int  Even_Node(Tree *root)
{
  int Rheight,Lheight;
  if(root==NULL)
    {
      return 0;
    }
  if(root->Ltree==NULL && root->Rtree==NULL)
    {
      return 0;
      }
  Lheight=Even_Node(root->Ltree);
  Rheight=Even_Node(root->Rtree);
  if(Lheight%2==0)
    {
       printf("Left %d\n",root->data);
       return Lheight;
    }
  else if(Rheight%2==0)
    {
      printf("Right %d\n",root->data);
      return Rheight;
    }
  return 1;
}
