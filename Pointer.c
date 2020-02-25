#include <stdio.h>

void swap( int* a, int* b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
	
	return;
}

int main ()

{
	int x, y ;
	
	printf ("Enter two numbers:");
	scanf (" %d %d", &x, &y);
	
	swap (&x, &y);
	printf ("%d %d\n", x,y);
	
	return 0;
	
}
