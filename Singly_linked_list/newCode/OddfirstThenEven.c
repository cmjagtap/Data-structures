// first all odd nos then even nos
// input: 1 2 3 4 5 6 7
// output: 1 3 5 7 2 4 6 
void oddNofirstThenEvenNos(mylist* list)
{
	mylist *oddList=NULL,*evenListHead=NULL,*oddListHead=NULL,*evenList=NULL,*temp=list;
	if(list==NULL || list->next == NULL)
	{
		return;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->data %2 ==0)
			{
				if(evenListHead==NULL)
				{
					evenListHead=evenList=temp;
				}
				else
				{
					evenList->next=temp;
					evenList=evenList->next;
				}
			}
			else
			{
				if(oddListHead==NULL)
				{
					oddListHead=oddList=temp;
				}
				else
				{
					oddList->next=temp;
					oddList=oddList->next;
				}
			}
			temp=temp->next;
		}
		evenList->next=NULL;
		oddList->next=evenListHead;
	}
	printf("\nAfter OddNode and evenNode\n");
	printList(oddListHead);
}