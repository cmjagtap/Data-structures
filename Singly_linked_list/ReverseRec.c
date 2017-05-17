#include "header.h"
link *Reverse_Recursion(link *LIST)
{
  link *secondElemt,*Result;
  if(LIST==NULL)
    return NULL;
  if(LIST->next==NULL)
    return LIST;
  secondElemt=LIST->next;
  LIST->next=NULL;
  Result=Reverse_Recursion(secondElemt);
  secondElemt->next=LIST;
  return Result;
}
