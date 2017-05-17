#include "header.h"
Tree *insert(Tree *root,int ele,int SIZE)
{
  Tree *newnode;
  int i;
  newnode=(Tree *)malloc(sizeof(Tree));
  newnode->data=ele;
  newnode->Ltree=NULL;
  newnode->Rtree=NULL;
  for(i=0;i<SIZE;i++)
    {
      if(root==NULL)
	{
	  root=newnode;
	}
      else
	{
	  if (newnode->data < root->data )
	    {
	      if(root->Ltree==NULL)
		{
		 root->Ltree=newnode;
		  break;
		}
	      else
		{
		  root=root->Ltree;
		}
	    }
	  else
	    {
	      if(root->Rtree==NULL)
		{
		 root->Rtree=newnode;
		  break;
		}
	      else
		{
		  root=root->Rtree;
		}
	    }
	}
    }
      return root;
}
  
