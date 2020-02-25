#include <stdio.h>
#include <math.h>
int main ()

{
int a[100];
int i, j, n; 
float sum=0, mean=0, x=0, s=0, m=0, sd=0, p=0; 

printf ("Enter no. of numbers:");
scanf ("%d", &n);

for (i=0; i<n; i++)
{
	scanf ("%d", &a[i]);
	
}

for (j=0; j<n; j++)
{
	sum = sum + a[j];
}

 mean = sum / n;
 x = a[j] - mean; 
 p = x*x;
 s = s + p;
 m = s / n;
 sd = sqrt (m);
 
 printf ("The standard deviation of the numbers is %f", sd);
 
 return 0 ;
}
 