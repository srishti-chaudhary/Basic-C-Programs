#include <stdio.h>
#include <stdlib.h>


int main()
{
   char sentence[1000];
   FILE *fptr;
   
   fptr = fopen("C:\\Users\\Srishti Chaudhary\\Desktop\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter a sentence: ");
   gets(sentence);

   fprintf(fptr,"%s",sentence);

  
   fclose (fptr);
   
   return 0;
}