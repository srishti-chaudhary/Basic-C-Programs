#include <stdio.h>

struct Distance 
{
	int feet;
	int inch;
	
}dist1, dist2, sum;

int main ()
{
	
	
	printf ("1st Distance \n");
	
	printf ("Enter feet: ");
	scanf ("%d", &dist1.feet);
	
	printf ("Enter inch: ");
	scanf ("%d", &dist1.inch);
	
	printf ("2nd Distance \n");
	
	printf ("Enter feet: ");
	scanf ("%d", &dist2.feet);
	
	printf ("Enter inch: ");
	scanf ("%d", &dist2.inch);
	
	sum.feet = dist1.feet + dist2.feet;
	sum.inch = dist1.inch + dist2.inch;
	
	if (sum.inch >= 12)
	{
		++sum.feet;
		sum.inch = sum.inch - 12;
	}
	
	printf ("Sum of distances = %d.%d", sum.feet, sum.inch);
	
	return 0;
	
}