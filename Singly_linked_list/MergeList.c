#include "header.h"
link *Merge_List(link *LIST,link *list2)
{
  link *result=NULL;
  if(LIST==NULL)
    return list2;
  if(list2==NULL)
    return LIST;
  if(LIST->data < list2->data)
    {
      result=LIST;
      result->next = Merge_List(LIST->next,list2);
    }
  else
    {
      result=list2;
      result->next = Merge_List(list2->next,LIST);
    }
  return result;
}
