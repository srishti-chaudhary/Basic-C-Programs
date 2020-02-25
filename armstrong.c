#include <stdio.h>
#include <math.h>
int main ()
{
int n, n1, n2, i, j, sum = 0, remainder;

printf ("Enter an integer: ");
scanf ("%d", &n);
n1=n;
n2=n;

i=0;
while (n1 != 0)
{
remainder = n1%10;
n1 /= 10;
i ++;
}
 printf("%d\n",i);
while(n2!=0)
{
	remainder = n2 % 10;
	printf("\n%d\n",remainder);
	sum = sum + pow (remainder, i);
	printf("\n%d\n",sum);
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
	
	