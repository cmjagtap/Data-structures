#include "header.h"
int main()
{
  stack *s1=NULL;
  int n,ls,ele,i,k,ch;
  while(10)
    {
  printf("\n\n1) Create Stack \n");
  printf("2) Display Stack \n");
  printf("3) Push in Stack \n");
  printf("4) Pop Stack \n");
  printf("5) Top of Stack\n");
  printf("6) Delete Complete stack\n");
  printf("7) Maximun no \n");
  printf("8) Minimum no\n");
  printf("9) Save in output\n");
  printf("10) Exit !\n");
  printf("Enter Ur choice \n");
  scanf("%d",&ch);
  switch(ch)
    {
    case 1:  printf(" ENTER STACKSIZE \n");
             scanf("%d",&n);
	     s1=createstack(n);
       break;
    case 2: displaystack(s1);
      break;
    case 3:  printf("How many elements U wana? push\n");
             scanf("%d",&k);
	     if(k>n)
	       {
		 printf("Stack is overflow \n");
	       }
	     else
	       {
		 printf("Enter elements \n");
		 for(i=0;i<k;i++)
		   {
		     scanf("%d",&ele);
		     push(s1,ele);
		   }
	       }
     break;
    case 4:   if(isEmpty(s1))
               {
		 printf("Stack is Empty cant pop\n");
	       }
             else
	       {
		 pop(s1);
	       } 
      break;
    case 5:  printf("Top of Stack is \n");
              ls=topstack(s1);
              printf("%d\n",ls);
	break;
    case 6: Deletstack(s1);
	    printf("Stack Succesful deleted\n");
	    break;
    case 7: Maximum(s1);
	break;
   case 8: Minimum(s1);
      break;
    case 9:for(i=s1->top;i>0;i--)
	{
	  printf("%d\n",s1->data[i]);
	}
      break;
    case 10:	exit(10);
	break;
    
       default:printf("Enter correct choice \n");
      break;
    }
    }
  free(s1);
return 0;
}
