#include <stdio.h>
int main()
{
    int i, j, k, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
  for (k=5; i<=k; k--)
{ printf (" ");
}     

 for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
