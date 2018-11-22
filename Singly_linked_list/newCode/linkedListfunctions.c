#include<stdio.h>
#include <stdlib.h>
struct linkedlist
{
	int data;
	struct linkedlist *next;
};
typedef struct linkedlist mylist;
mylist *createList(mylist *list,int no_of_nodes)
{
	mylist *newnode=NULL,*temp;
	for (int i = 0; i < no_of_nodes; i++)
	{
		newnode=(mylist*)malloc(sizeof(mylist));
		scanf("%d",&newnode->data);
		if(list==NULL)
		{
			list=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return list;
}
mylist *insertHead(mylist *list,int key)
{
	mylist *newnode=(mylist *)malloc(sizeof(mylist));
	newnode->data=key;
	newnode->next=list;
	return newnode;
}
mylist *insetEnd(mylist *list,int key)
{
	mylist *temp=list;
	mylist *newnode=(mylist *)malloc(sizeof(mylist));
	newnode->data=key;
	newnode->next=NULL;
	if(list==NULL)
	{
		return newnode;
	}
	else
	{
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return list;

}
mylist* reverseList(mylist *list)
{
	mylist *nextptr=NULL,*temp=NULL;
	if(list==NULL)
	{
		return NULL;
	}
	else
	{
		while(list)
		{
			nextptr=list->next;
			list->next=temp;
			temp=list;
			list=nextptr;
		}
	}
	return temp;
}
void printReverse(mylist *list)
{
	if(list==NULL)
	{
		return;
	}
	printReverse(list->next);
	printf("%d\t",list->data);
	
}
void printList(mylist *list)
{
	if(list==NULL)
	{
		printf("Empty list");
	}
	else
	{
		while(list)
		{
			printf("%d\t",list->data);
			list=list->next;
		}
	}
}
void findMiddle(mylist *list)
{
	mylist *fastptr=list,*slowptr=list;
	if (list==NULL)
	{
		return;
	}
	if (list!=NULL)
		{
			while(fastptr!=NULL && fastptr->next!=NULL)
			{
				slowptr=slowptr->next;
				fastptr=fastptr->next->next;

			}
	        printf("\nThe middle element is [%d]\n\n", slowptr->data); 

	}
}
int rotationCountSortedList(mylist *list)
{
	mylist *temp=list;
	if (list==NULL || list->next==NULL)
	{
		return 0;
		/* code */
	}
	else
	{
		int min=list->data,count=0;
		while(temp)
		{
			count++;
			if(min>temp->data)
			{
				break;
			}
			temp=temp->next;
		}
		return count;
	}
	return -1;
}
int main()
{
	mylist *list=NULL;
	int no_of_nodes,rs;
	scanf("%d",&no_of_nodes);
	list=createList(list,no_of_nodes);
	printList(list);
	list=insertHead(list,55);
	printf("\nAfter New Head\n");
	printList(list);
	list=insetEnd(list,99);
	printf("\n After New end \n");
	printList(list);
	list=reverseList(list);
	printf("\nAfter reverseList\n");
	printList(list);
	printf("\n");
	printReverse(list);
	findMiddle(list);
	mylist *newList=NULL;
	newList=createList(newList,5);
	rs=rotationCountSortedList(newList);
	printf("\nsorted count %d\n", rs-1);
	free(list);
	
	return 0;
}