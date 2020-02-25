#include <stdio.h>
#include <stdlib.h>
# define MAXLEN 30

int countWords (FILE *fptr)
{
	char word[MAXLEN];
	int count = 0;
	
	while ( fscanf(fptr, "%s", word) == 1)
	{
		printf("%s ",word);
		count ++;
	}
	
	return count;
}

int main()
{
   char sentence[1000];
   FILE *fptr;
   int count;
   
   
   fptr = fopen("C:\\Users\\Srishti Chaudhary\\Desktop\\program.txt","r");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    

   count = countWords (fptr);
   
  
   
   
   printf ("\n There are %d words in the file.\n", count);
   fclose(fptr);
   return 0;
   }