#include <stdio.h>
int main ()
{
int n, i=1, sum=0 ; 
printf ("Enter a number :");
scanf ("%d", &n);

for(i=1; i<= (n-1); i++)
{
if (n%i == 0)
{
printf ("%d", i);
printf ("\n");
sum = sum+i;
}


}
if (n == sum)
{
printf ("%d is a perfect number", n);
}
else 
{
printf ("%d is not a perfect number", n);
}


return 0;
}