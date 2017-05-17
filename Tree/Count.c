#include "header.h"
int Count_Node(Tree *root)
{
  int cnt=0;
  if(root!=NULL)
    {
     cnt=1+Count_Node(root->Ltree)+Count_Node(root->Rtree);
    }
  return cnt;
}
