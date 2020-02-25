#include <stdio.h>

void printTable ( float table [NROWS][NCOLS] )

{
	int row, column;
	
	for (row=0; row < NROWS; row++)
	{
		printf ("%10.2f", table[row] [column]);
	}
	
	printf ("\n");
	
}