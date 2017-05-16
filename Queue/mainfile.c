#include "header.h"
int main()
{
  Queue *q;
  int n,ch,k,i,ele;
  while(1)
    {
      printf("\n1) Exit \n");
      printf("2) Create Queue\n");
      printf("3) Queue status\n");
      printf("4) Insert Element \n");
      printf("5) Delete Element \n");
      printf("6) Display Queue elements\n");
      printf("7) Front status\n");
      printf("8) Rear status \n");
      printf("9 Maximum No \n");
      printf("\nEnter Ur choice \n");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1: exit(1);
	  break;
	case 2: printf("Enter size of Queue\n");
	        scanf("%d",&n);
		q=creatqueue(n);
		printf("Queue Created \n");
	 break;
	case 3:if(isFull(q))
	         printf("Queue is full \n");
	 else if( isEmpty(q))
		printf("Queue is Empty \n");
	 else
	   printf("Queue have a space\n");
	  break;
	case 4:printf("How many elements \n");
	       scanf("%d",&k);
	       if(k>n)
		 {
		   printf("Ur Entering more nos than a size\n");
		 }
	       else
		 {
		   printf("Enter elements\n");
		   for(i=0;i<k;i++)
		     {
		       scanf("%d",&ele);
		       enqueue(q,ele);
		      }
		 }
	       break;
	case 5:dequeue(q);
	  break;
	case 6: display(q);
	  break;
	case 7:fronts(q);
	  break;
	case 8: rears(q);
	  break;
	case 9: maxele(q);
	  break;
	default: printf("Enter correct choice\n");
	  break;
	}
    }

  free(q);
  return 0;
}
