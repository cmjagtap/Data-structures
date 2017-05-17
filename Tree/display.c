#include "header.h"
void Display_Tree(Tree *root)
{
  Tree *temp=root;
  if (temp != NULL)
    {
      Display_Tree(temp->Ltree);
      printf("%d\n",temp->data);
      Display_Tree(temp->Rtree);
    }
}

