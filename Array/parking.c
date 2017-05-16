#include<stdio.h>
#include<stdlib.h>
struct parking
{
  int *slot;
  int capasity;
};
typedef struct parking park;
park *initialise(int capasity)
{
  park *p1=(park *)malloc(sizeof(park));
  p1->capasity=capasity;
  p1->slot=(int *)malloc(sizeof(int)*capasity);
  for(int i=0;i<capasity;i++)
    {
      p1->slot[i]=0;
    }
  return p1;
  
}
int is_full(park *p1)
{
  if(p1->slot[p1->capasity-1]==p1->capasity)
    {
      return 1;
    }
  return 0;
}
int is_Empty(park *p1)
{
  if(p1->slot[0]==0)
    {
      return 1;
    }
  return 0;
}
park *insert_vehicle(park *p1,int vehicle_no)
{
  if(p1->slot[0]==0)
    {
      p1->slot[0]=vehicle_no;
    }
  else
    {
      for(int i=1;i<p1->capasity;i++)
	{
	  if(p1->slot[i]==0)
	    {
	      p1->slot[i]=vehicle_no;
	      break;
	    }
	}
    }
  return p1;
}
park *remove_vehicle(park *p1,int slot_no)
{
  int cnt=0,temp;
  if(slot_no>p1->capasity)
    {
      fprintf(stdout,"---------Invalid slot no--------\n");
    }
  for(int i=0;i<p1->capasity;i++)
    {
      if(i==slot_no)
	{
	  if(p1->slot[i]==0)
	    {
	      fprintf(stdout,"-----slot already free-------\n");
	     
	    }
	  else 
	    {
	      p1->slot[i]=0;  
	    }
	}
    }
      return p1;
    
}
void Display_park(park *p1)
{
  int cnt=0;
  if(!p1)
    {
      fprintf(stdout,"--No parking allocated--\n");
    }
  for(int i=0;i<p1->capasity;i++)
    {
     
      fprintf(stdout,"slot No : %d -> |  %d    |\n",i,p1->slot[i]);
    }
}
int main()
{
  int capasity,ch,slot_no,vehicle_no;
  park *p1=NULL;
  while(6)
    {
      fprintf(stdout,"\n\n1) initiualisation\n");
      fprintf(stdout,"2) insert vehicle\n");
      fprintf(stdout,"3) remove vehicle\n");
      fprintf(stdout,"4) print parking \n");
      fprintf(stdout,"6) exit\n");
      fprintf(stdout,"Enter correct choice\n");
      fscanf(stdin,"%d",&ch);
      switch(ch)
	{
	case 1:fprintf(stdout,"Enter capasity of parking \n");
	       fscanf(stdin,"%d",&capasity);
	       p1=initialise(capasity);
	       break;
	case 2:fprintf(stdout,"enter vehicle no\n");
	       fscanf(stdin,"%d",&vehicle_no);
	       p1=insert_vehicle(p1,vehicle_no);
	       break;
	case 3:fprintf(stdout,"Enter slot no to remove vehicle entry\n");
	  fscanf(stdin,"%d",&slot_no);
	  p1=remove_vehicle(p1,slot_no);
	  break;
	case 4:Display_park(p1);
	  break;
	case 6:exit(6);
	  break;
	default:fprintf(stdout,"Enter correc choice \n");
	  break;
	}
    }
  
}
