#include "header.h"
void Print_full_Nodes(Tree *root)
{
  if(root==NULL)
    {
      return;
    }
  if(root)
    {
      Print_full_Nodes(root->Ltree);
      if(!isLeaf(root))
	{
	  fprintf(stdout,"%d\n",root->data);
	}
       Print_full_Nodes(root->Rtree);
    }
}
