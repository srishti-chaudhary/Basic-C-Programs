#include <stdio.h>
int main ()
{
int n;
printf ("Enter a number: ");
scanf ("%d", &n );

if (n%2 == 0)
{
printf ("n is a even number");
}
else 
{
printf ("n is a odd number");
}
return 0;
}