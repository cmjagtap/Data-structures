#include "header.h"
int main()
{
  int SIZE,ELE,POS,ch,positionFromTail,val,m,t,cnt,k;
  link *LIST=NULL,*tp=NULL,*list2=NULL,*temp=NULL;
  while(40)
    {
      printf("\n1) Create Linked List\n");
      printf("2) Display List\n");
      printf("3) Count Nodes\n");
      printf("4) Sum of List\n");
      printf("5) Insert by Position\n");
      printf("6) Serach element in List\n");
      printf("7) Maximum No in List\n");
      printf("8) Reverse List\n");
      printf("9) Reverse List Usig Recursion\n");
      printf("10) Delete by position\n");
      printf("11) Delete Linked List\n");
      printf("12) Find Middle of List\n");
      printf("13) Print List From End (Recursive)\n");
      printf("14) Check List is Even or Odd\n");
      printf("15) Create second List\n");
      printf("16) Merge two Sorted List\n");
      printf("17) Print Alternative\n");
      printf("18) Reverse List in Pairs\n");
      printf("19) SOrt List\n");
      printf("20) Find Is Circular or Loop in List\n");
      printf("21) 1st Odd no then Even no List\n");
      printf("22) Split List\n");
      printf("23) Palindrome List\n");
      printf("24) Concat List\n");
      printf("25) Remove Last Elemnt\n");
      printf("26) Duplicate Element\n");
      printf("27) Addition of 2 List\n");
      fprintf(stdout,"28) Get Node Value from Tail\n");
      fprintf(stdout,"29) Delet duplicate from sorted\n");
      fprintf(stdout,"30) Split Alternative elments\n");
      fprintf(stdout,"31) Del Alternative\n");
      fprintf(stdout,"32) Reverse Alternative\n");
      fprintf(stdout,"33) Maximum_sum List from 2 list\n");
      fprintf(stdout,"34) Last elemnet as Head\n");
      fprintf(stdout,"35) Get node value after m ele\n");
      fprintf(stdout,"36) Rotate Linked List by k elements\n");
      fprintf(stdout,"37) Find fifth from last\n");
      fprintf(stdout,"38) find ele from last without cnt\n");
      fprintf(stdout,"40) Enter 40 to Exit\n");
      fprintf(stdout,"Enter Ur choice\n");
      fscanf(stdin,"%d",&ch);
      switch(ch)
	{
	case 1:	  printf("How many Nodes\n");
	  	  scanf("%d",&SIZE);
		  LIST=CreateList(LIST,SIZE);
		  break;
	case 2:   Display(LIST);
	          break; 
	case 3:  cnt= Count_Nodes(LIST);
	  fprintf(stdout,"count %d\n",cnt);
	          break;
	case 4:  sum(LIST);
	         break;
	case 5: printf("Enter Element & Position\n");
	        scanf("%d%d",&ELE,&POS);
		if(POS>SIZE)
		  {
		    printf("Incorrect Position\n");
		  }
		else
		  {
		    Insert_Pos(LIST,POS,ELE);
		  }
		break;
	case 6: if(LIST==NULL)
		{
			printf("List Empty\n");
		}
		else
		{
		 printf("Enter Element to search \n");
	         scanf("%d",&ELE);
		 Search_NO(LIST,ELE);
		}
		break;
	case 7:  Maximum(LIST);
		 break;
	case 8: LIST= Reverse_List(LIST);
	        break;
	case 9:LIST=Reverse_Recursion(LIST);
	         break;
	case 10:printf("Enter Position to Delete elemnt\n ");
	       scanf("%d",&POS);
	        Del_By_Pos(LIST,POS);
	         break;
	case 11: Del_LIST(LIST);
	         break;
	case 12:Find_Middle(LIST);
	       break;
	case 13:Print_F_End(LIST);
	       break;
	case 14:if(EvenOdd(LIST))
		 {
		   printf("List is Odd\n");
	          }
	       else
		 {
		   printf("List is Even\n");
		 }
	       break;
	case 15:  printf("How many Nodes\n");
	  	  scanf("%d",&SIZE);
		  list2=CreateList(list2,SIZE);
		  Display(list2);
		  break;
	case 16: LIST=Merge_List(LIST,list2);
     		 break;
	case 17:Alternative(LIST);
	        break;
	case 18:Reverse_In_pair(LIST);
	         break;
	case 19:LIST=Sort_List(LIST);
		break;
	case 20:if(isLoop(LIST))
		  {
		    printf("List Contain Cycle\n");
		  }
	        else
		  {
		    printf("Cycle not found\n");
		  }
	  break;
	case 21:tp=Even_List(LIST);
	          Display(tp);
		  break;
	case 22:split(LIST);
	  break;
	case 23:  if(palindrom(LIST))
	    {
	      printf("List is Palindrom\n");
	    }
	  else
	    {
	      printf("List is not palindrom\n");
	    }
	  break;
	case 24:LIST=Concat(LIST,list2);
	  break;
	case 25:Retrive_Last(LIST);
	  break;
	case 26:Duplicate(LIST);
	  break;
	case 27:LIST=Addition(LIST,list2);
	      break;
	case 28:fprintf(stdout,"Enter position from Last\n");
	         fscanf(stdin,"%d",&positionFromTail);
		 val=Get_Node_Value_fromTail(LIST,positionFromTail);
		 fprintf(stdout,"Value is %d\n",val);
		 break;
	case 29:LIST=Del_Duplicate_value(LIST);
	  break;
	case 30:temp=LIST->next;
	  Split_alternative(LIST,temp);
	  break;
	case 31:Del_alternative(LIST);
	  break;
	case 32:temp=LIST->next;
	  LIST=Reverse_alternative(LIST,temp);
	  break;
	case 33:LIST=Maximum_sum_LIST(LIST,list2);
	  break;
	case 34:Last_ele_head(LIST);
	  break;
	case 35:fprintf(stdout,"Enter M & n value\n");
	  fscanf(stdin,"%d %d",&m,&t);
	  val=Get_Node_value_after_m_ele(LIST,m,t,cnt);
	  fprintf(stdout,"value %d\n",val);
	  break;
	case 36:fprintf(stdout,"Enter value of k\n");
	  fscanf(stdin,"%d",&k);
	  LIST=Linked_list_rotation(LIST,k);
	  break;
	case 37:fprintf(stdout,"ELe %d\n",get_fifth_from_last(LIST));
	  break;
	case 38:fprintf(stdout,"enter k value\n");
	  fscanf(stdin,"%d",&k);
	  fprintf(stdout,"LAst kth ele %d\n",get_kth_from_last(LIST,k));
	  break;
	case 40:exit(40);
	  break;
	default:printf("Enter correct choice\n");
	}
    }
  free(LIST);
  return 0;
}
