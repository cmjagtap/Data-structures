#include "header.h"
void Delet(Tree *root,int ele)
{
  if(root==NULL)
    {
      return;
    }
  if(root)
    {
      if(root->data==ele)
	{
	  if(isSingle(root))
	    {
	      free(root);
	    }
	}
      Delet(root->Ltree,ele);
      Delet(root->Rtree,ele);
    }
}
