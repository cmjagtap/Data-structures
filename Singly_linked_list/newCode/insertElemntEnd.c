//insertElemt at end of linkedlist
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