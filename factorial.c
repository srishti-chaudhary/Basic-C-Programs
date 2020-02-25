#include <stdio.h>
int main ()
{
	int n, i=1;
	unsigned long long factorial = 1;
	printf ("Enter a number:");
	scanf ("%d", &n);
	
	if (n<0)
	{
		printf ("Factorail of the given number does not exist");
	}
	else 
	{
		for (i=1; i<=n; i++)
		{
			factorial = factorial * i;
		}
		printf("Factorial of %d = %llu", n, factorial);
	}
	return 0;
}