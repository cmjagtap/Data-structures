#include "header.h"
#include<string.h>
void Path_Print(Tree *root,char *str)
{
  if(root==NULL)
    {
      return;
    }
  if(root)
    {
      printf("%d\n",root->data);
      {
	if(*str=='L')
	  {
	    Path_Print(root->Ltree,str);
	  }
	else if(*str=='R')
	  {
	    Path_Print(root->Rtree,str);
	  }
       
      }
     }
}
