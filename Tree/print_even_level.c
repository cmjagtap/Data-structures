#include "header.h"
void print_even_level(Tree *root,int level)
{
  if(level==0)
    {
      return;
    }
  if(level %2==0)
    {
      fprintf(stdout,"%d\n",root->data);
    }
      print_even_level(root->Ltree,level-1);
      print_even_level(root->Rtree,level-1);
    
}
