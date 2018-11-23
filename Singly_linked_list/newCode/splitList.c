//split List into equal parts
void splitList(mylist *list)
{
	mylist *temp=list,*list2=NULL,*middle;
	if(list==NULL || list->next==NULL)
	{
		return NULL;
	}
	else
	{
		middle=findMiddle(temp);
		list2=middle->next;
		middle->next=NULL;
	}
	printf("\nlist 1 \n");
	printList(list);
	printf("\nlist 2 \n");
	printList(list2);
}