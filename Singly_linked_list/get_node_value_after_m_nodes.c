#include "header.h"
int Get_Node_value_after_m_ele(link *LIST,int m,int n,int cnt)
{
  int i;
  if(LIST==NULL)
    {
      return 0;
    }
  if(m>cnt)
    {
      return 0;
    }
  if(n>cnt)
    {
      return 0;
    }
  if(m+n>cnt)
    {
      return 0;
    }
  for(i=1;i<=m;i++)
    {
      LIST=LIST->next;
    }
  for(i=1;i<=n;i++)
    {
      LIST=LIST->next;
    }
  return LIST->data;
}
