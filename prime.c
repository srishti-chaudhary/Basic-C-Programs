#include <stdio.h>
int main ()
{
int n, flag=1, i=2;
printf ("Enter a number : ");
scanf ("%d", &n);

for(i=2; i<=n/2; i++)
{
if (n%i ==0)
{
printf ("n is not a prime number");
flag=0;
break;
}
}
if (flag==1)
printf ("n is a prime number");


return 0;
}