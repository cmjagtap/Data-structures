#include "header.h"
int main()
{
  int SIZE,ch,ELE,ls,k,ht,st,ele,n1,n2,i,maxW=0,Width=0,no,succ,an;
  Tree *root,*root1,*max,*min;
  char str[100];
  while(40)
    {
      printf("\n1) Create Binary Tree\n");
      printf("2) Display Tree\n");
      printf("3) Search Element\n");
      printf("4) Preorder Travrsal\n");
      printf("5) Inorder Trevrsal\n");
      printf("6) Postorder Travrsal\n");
      printf("7) Count a node in Tree\n");
      printf("8) Print All Leaf \n");
      printf("9) Print All Single Leaf\n");
      printf("10 Print Sum Of Node Up to k\n");
      printf("11) Print Sum Of Tree All Nodes\n");
      printf("12) Find Maximum & Minimum in Tree\n");
      printf("13) Height of Tree\n");
      printf("14) Count Strend up sum of k\n");
      printf("15) Create Another BST\n");
      printf("16) Print All even Node\n");
      printf("17) Insert Elemnt\n");
      printf("18) Check given tree is BST\n");
      printf("19) Find LCA of 2 nos in BST\n");
      printf("20) Find LCA of 2 nos in BT\n");
      printf("21) Delet Given Element in Tree\n");
      printf("22) Level Order Travrsal\n");
      printf("23) Enter Path ex LRLLR\n");
      printf("24) MAximum Width\n");
      printf("25) Sucessor of Given element\n");
      printf("26) Chek is Is Mirror of tree\n");
      printf("27) Convert BST into its Mirror\n");
      printf("28) Print Full Nodes\n");
      printf("29) check bst structuraly equal\n");
      printf("30) height of tree using iterativen\n");
      printf("31) Print even level\n");
      printf("32) chek two tree identical\n");
      printf("33) Chek subtree (structuraly)\n");
      printf("34) Level order in reverse order\n");
      printf("35) Maximum sum level\n");
      printf("36) Find kth smallest element\n");
      printf("37) Itertaive preorder\n");
      printf("38) Smallest kth elemnt\n");
      printf("40) Exit\n");
      printf("Enter choice\n");
      scanf("%d",&ch);
      switch(ch)
	{
	case 1:  printf("How Many  Node in Tree\n");
	         scanf("%d",&SIZE);
		 root=Create_Tree(SIZE);
		 break;
	case 2:  Display_Tree(root);
	         break;
	case 3:  printf("Enter A No to search\n");
	         scanf("%d",&ELE);
		 if(Search_Ele(root,ELE))
		   {
		     printf("No Found\n");
		   }
		 else
		   {
		     printf("Element not Found\n");
		   }
		 break;
	case 4:Preorder(root);
	        break;
	case 5: Inorder(root);
	        break;
	case 6:Postorder(root);
	       break;
	case 7:ls=Count_Node(root);
	      printf("Nodes in Tree is %d\n",ls);
	      break;
	case 8:Print_Leaves(root);
	       break;
	case 9:Print_Single(root);
	       break;
	case 10:printf("Enter Value of K For Suming Node\n");
	       scanf("%d",&k);
	       printf("Nodes \n");
	       Print_Sum_K(root,k);
	       break;
	case 11:ls=Sum_Node(root);
	        printf("Sum of Tree is %d\n",ls);
		break;
	case 12:max=FindMax(root);
	         min=FindMin(root);
		 printf("Maximum is %d & Minimum %d",max->data,min->data);
		 break;
	case 13:ht=Height_Tree(root);
	        printf("Height Of Tree is %d\n",ht);
		break;
	case 14:printf("Enter Value of k\n");
	        scanf("%d",&k);
		st=Strend(root,k);
		printf("Strend Of Count Nodes %d\n",st);
	        break;
	case 15:printf("How Many  Node in Tree\n");
	         scanf("%d",&SIZE);
		 root1=Create_Tree(SIZE);
		 Display_Tree(root1);
		 break;
	case 16:Even_Node(root);
	         break;
	case 17:printf("Enter Elemt\n");
	        scanf("%d",&ele);
		root1=insert(root,ele,SIZE);
		Display_Tree(root1);
		break;
	case 18:if(isBST(root))
		  {
		    printf("Tree is BST \n");
		  }
		else
		  {
		    printf("Tree is not BST\n");
		  }
	  break;
	case 19:if(isBST(root))
	        {
		  printf("Enter two Elemnt \n");
		  scanf("%d%d",&n1,&n2);
		  an=*(int *)Ancestor(root,n1,n2);
		  printf("Comon ancestor of %d & %d =%d",n1,n2,an);
		}
	  else
	    {
	      printf("Tree is Not BST\n");
	    }
		break;
	case 20:if(isBST(root))
		  {
		    printf("Tree is BST\n");
		  }
		else
		  {
		     printf("Enter two Elemnt \n");
		     scanf("%d%d",&n1,&n2);
		      an=AncestorBT(root,n1,n2);
		    printf("Comon ancestor of %d & %d =%d",n1,n2,an);
		  }
	         break;
	case 21:printf("Enter elemnt to delet\n");
	           scanf("%d",&ele);
	    	  if(Search_Ele(root,ele))
		   {
		     Delet(root,ele);
		   }
		 else
		   {
		     printf("Elemnt Not in tree\n");
		   }
	        break;
	case 22:for(i=1;i<=ht;i++)
		  {
		    printGivenLevel(root,i);
		  }
	  break;
	case 23:printf("Enter Path\n");
	        scanf("%s",str);
		Path_Print(root,str);
	       break;
	case 24:for(i=1;i<=ht;i++)
		 {
		   Width=getWidth(root,i);
		   printf("Level= %d Width = %d\n",i,Width);
		   if(Width>maxW)
		     {
		       
		       maxW=Width;
		     }
		 }
	  printf("Maximum Width is %d\n",maxW);
	  break;
	case 25:printf("Enter no to find succesor\n");
	        scanf("%d",&no);
	       	succ=succesor(root,no);
		printf("Sucessor of Given key=%d is %d",no,succ);
		break;
	case 26:if(isMirror(root,root1))
	        fprintf(stdout,"Its a Mirror Tree\n");
		else
		  fprintf(stdout,"Its not a Mirror\n");
	           break;
	case 27:root1=Convert_Mirror(root);
	  break;
	case 28:Print_full_Nodes(root);
	  break;
	case 29:if( chek_bst_structuraly_equal(root,root1))
	         fprintf(stdout,"Tree are Equal structuraly\n");
	       else
		 fprintf(stdout,"Tree are not equal structuraly\n");
	  break;
	case 30:Height_Tree(root);
	  break;
	case 31:for(i=0;i<ht;i++)
	    {
	      print_even_level(root,i);
	    }
	  break;
	case 32:if(identical_bst(root,root1))
	    {
	      fprintf(stdout,"Identical two tree\n");
	    }
	  else
	    {
	      fprintf(stdout,"2 tree not identical\n");
	    }
	  break;
	case 33:if(sub_Tree(root,root1))
	    {
	      fprintf(stdout,"Tree is Subtree\n");
	    }
	  else
	    {
	      fprintf(stdout,"Tree is not sub tree\n");
	    }
	  break;
	case 34:for(i=0;i<=ht;i++)
	    {
	      Level_order_rev(root,i);
	    }
	  break;
	case 35:for(i=0;i<=ht;i++)
	    {
	      Maximum_sum_level(root,i);
	    }
	  break;
	case 36:fprintf(stdout,"Enter k value\n");
	        fscanf(stdin,"%d",&ele);
		fprintf(stdout,"kth ele %d\n",find_kth_smallest(root,ele));
		break;
	case 37:iterative_preoder(root);
	  break;
	case 38:printf("Enter k value\n");
	        scanf("%d",&k);
		print_kth_smallest(root,k);
		break;
	case 40:exit(40);
	       break;
	default:printf("Enter Correct choice \n");
	}
    }
  free(root);
  return 0;
}
