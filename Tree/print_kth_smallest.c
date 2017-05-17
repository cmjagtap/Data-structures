#include "header.h"
void print_kth_smallest(Tree *root,int k)
{
  int count=1;
  if(count>k)
    {
      return;
    }
  if(root==NULL)
    return;
  print_kth_smallest(root->Ltree,k);
  if(k==count)
    {
      printf("%d\n",root->data);
      count++;
      return;
    }
  count++;
  print_kth_smallest(root->Rtree,k);
}

