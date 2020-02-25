#include <stdio.h>
int main ()
{
int a,b,t ;
printf ("Enter two numbers a and b");
scanf ("%d %d" ,&a,&b);
t=a;
a=b;
b=t;
printf ("Now the value of a is %d and the value of b is %d",a,b );
return 0;
} 