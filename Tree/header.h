#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include<stdio.h>
#include<stdlib.h>
struct myTree
{
  int data;
  struct myTree *root;
  struct myTree *Ltree;
  struct myTree *Rtree;
};
typedef struct myTree Tree;
Tree *Create_Tree(int);
void Display_Tree(Tree *);
int Search_Ele(Tree *,int);
void Preorder(Tree *);
void Postorder(Tree *);
void Inorder(Tree *);
int Count_Node(Tree *);
void Print_Leaves(Tree *);
int isLeaf(Tree *);
void Print_Single(Tree *);
int isSingle(Tree *);
void Print_Sum_K(Tree *,int);
int Sum_Node(Tree *);
Tree *FindMax(Tree *);
Tree *FindMin(Tree *);
int Height_Tree(Tree *);
int Strend(Tree *,int);
int Even_Node(Tree *);
Tree *insert(Tree *,int,int);
int isBST(Tree *);
Tree *Ancestor(Tree *,int,int);
int AncestorBT(Tree *,int,int);
void Delet(Tree *,int);
void printGivenLevel(Tree *,int);
void Path_Print(Tree *,char *);
int getWidth(Tree *,int);
int succesor (Tree *,int);
int isMirror(Tree *,Tree *);
Tree *Convert_Mirror(Tree *);
void Print_full_Nodes(Tree *);
int  chek_bst_structuraly_equal(Tree *,Tree *);
void height_bst(Tree *);
void print_even_level(Tree *,int);
int identical_bst(Tree *,Tree *);
int sub_Tree(Tree *,Tree *);
void Level_order_rev(Tree *,int);
void Maximum_sum_level(Tree *,int);
int find_kth_smallest(Tree *,int);
int find_kth_largest(Tree*,int);
void iterative_preoder(Tree *);
void print_kth_smallest(Tree *,int);
#endif
