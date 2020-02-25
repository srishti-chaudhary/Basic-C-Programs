#include <stdio.h>
int main ()
{
	int a[10];
	int i, j, n, sum = 0, av = 0 ;
	
	printf ("Enter number of inputs:");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	for (j=0; j<n; j++)
	{
		
		sum = sum + a[j];
		
	}
		
		
		printf ("Sum of numbers = %d \n", sum);
		
		av = sum / n;
		printf ("Average of numbers = %d", av);
		
	
	return 0;
}