#include <stdio.h>
int main ()
{
	int i, n, t1=0, t2=1, nexterm;
	
	printf ("Enter number of terms:");
	scanf ("%d", &n);
	
	printf ("Fibonnaci Series: ");
	printf ("\n");
	printf("%d\n%d\n",t1,t2);
	
	for (i=1; i<=n; ++i)
	{
		
		nexterm = t1 + t2;
		t1 = t2;
		t2 = nexterm;
		printf("%d",nexterm);
		
		printf ("\n");
		
	}
	
	return 0;
}