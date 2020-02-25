#include <stdio.h>
int main ()
{
int a[20];
int n, i, j;

printf ("Enter number of terms:");
scanf ("%d", &n);

 for (i=0; i<n; i++)
 {
	 scanf ("%d", &a[i]);
 }
 
for (i=0; i<n; i++)
{
a[0]=0;
a[1]=1;
a[i+2]=a[i]+a[i+1];

printf ("%d", a[i]);
}
return 0;
}

