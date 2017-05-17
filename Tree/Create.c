#include "header.h"
Tree *Create_Tree(int SIZE)
{
  int i;
  Tree *newnode=NULL,*temp,*root=NULL;
  for(i=0;i<SIZE;i++)
    {
      newnode=(Tree *)malloc(sizeof(Tree));
      scanf("%d",&newnode->data);
      newnode->Ltree=NULL;
      newnode->Rtree=NULL;
      if(root==NULL)
	{
	  root=newnode;
	}
      else
	{
	  temp=root;
	  while(temp!=NULL)
	    {
	      if(newnode->data < temp->data)
		{
		  if(temp->Ltree==NULL)
		    {
		      temp->Ltree=newnode;
		      break;
		    }
		  else
		    {
		      temp=temp->Ltree;
		    }
		}
	      else
		{
		  if(temp->Rtree==NULL)
		    {
		      temp->Rtree=newnode;
		      break;
		    }
		  else
		    {
		      temp=temp->Rtree;
		    }
		}
	    }
	}
    }
  
  return(root);
}
