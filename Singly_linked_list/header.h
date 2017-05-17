#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include<stdio.h>
#include<stdlib.h>
struct mylink
{
  int data;
  struct mylink *next;
};
typedef struct mylink link;
link *CreateList(link *,int);
void Display(link *);
int Count_Nodes(link *);
int sum(link *);
void Insert_Pos(link *,int,int);
void Search_NO(link *,int);
void Maximum(link *);
void *Reverse_List(link *);
link *Reverse_Recursion(link *);
void Reverse_In_pair(link *);
void Del_By_Pos(link *,int);
void Del_LIST(link *);
void Find_Middle(link *);
void Print_F_End(link *);
int EvenOdd(link *);
link *Merge_List(link *,link *);
void Alternative(link *);
link *Sort_List(link *);
int isLoop(link *);
link *Even_List(link *);
void split(link *);
int palindrom(link *);
link *Concat(link *,link *);
void Retrive_Last(link *);
link *Addition(link *,link *);
void Duplicate(link *);
void sublist(link *,link *);
int Get_Node_Value_fromTail(link *,int positionFromTail);
link *Del_Duplicate_value(link *);
int Find_Merge_point(link *,link *);
void Split_alternative(link *,link *);
void Del_alternative(link *);
link *Reverse_alternative(link *,link *);
link *Maximum_sum_LIST(link *,link *);
link *Last_ele_head(link *);
int Get_Node_value_after_m_ele(link *,int,int,int);
void *Linked_list_rotation(link *,int);
int get_fifth_from_last(link *);
int get_kth_from_last(link *,int);
#endif
