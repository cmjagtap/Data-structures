
//sorted linkedlist rotation count of right side
//Linked List: 15 18 5 8 11 12
//rotated count: 2
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