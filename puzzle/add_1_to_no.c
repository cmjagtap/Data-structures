/* Increment a no without any +,++,-,/,* */
#include<stdio.h>
int addone(short int x)
{
  int y = 1;
  if( 0 == (x & 1) )
    x |= 1;
  else
    {
      for( y = 0; y < (sizeof(x) * 8 ) && (x & 1 << y ) ; y++ )
	{
	  x &= ~( 1 << y );
	}
      x |= ( 1 << y );
    }		
  return x;
}

int main()
{	
  int a;
  scanf("%d",&a);
  printf(" Add One : %d\n", addone( a ));
  return 0;
}
