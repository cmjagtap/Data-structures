// find middle elemnt of linkedlist
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