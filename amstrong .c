#include <stdio.h>
#include <math.h>
int main ();
{
int n, n1, n2, sum = 0, remainder;
n1=n;
n2=n;
printf ("Enter an integer: ");
scanf ("%d", &n);

i=0;
while (n1 != 0)
{
remainder = n1%10;
n1 /= 10;
i ++
}
 
for (j=1; j <= i; j++)
{
	remiander = n2 % 10;
	sum = sum + pow (remainder, i);
	n2 = n2/10;
}

if ( sum == n)
{
	printf ("%d is a amstrong number", n);
}
else
{
	printf ("%d is not a amstrong number", n);
}

return 0;
}
	
	