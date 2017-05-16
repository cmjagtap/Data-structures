#include "header.h"
int Deletstack(stack *s1)
{
	if(s1 ==NULL)
	{
	return 0;
	}
  if(s1)
    {
      if(s1->data)
	{
	free(s1->data);
	free(s1);
	return 1;
	}	
    }return 0;
}
