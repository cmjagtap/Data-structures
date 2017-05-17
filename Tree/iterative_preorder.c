#include "header.h"
void iterative_preoder(Tree *root)
{
  if(root==NULL)
    {
      return;
    }
  while(root)
    {
      if(root->Ltree !=NULL || root->Rtree !=NULL)
	{
	  printf("%d\n",root->data);
	  root=root->Ltree;
	  root=root->Rtree;
	}
    }
}
