#include <stdio.h>
int main ()
{
int n, i=0, k=5, j=1;
printf ("Enter number of rows");
scanf ("%d", &n);

for (i=0; i<=n; i++)
{
for(k=5; i<=k; k--)
{printf (" ");
}

for (j=1; j<=i; j++)
{printf ("* ");
}
printf ("\n");

}
return 0;
}
