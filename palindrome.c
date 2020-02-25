#include <stdio.h>

int main()

{
   
 int n, reversedNumber = 0, remainder, original;

   
 printf("Enter an integer: ");
   
 scanf("%d", &n);

   

original = n;

 while(n != 0)
   
 {
       
 remainder = n%10;
    
 reversedNumber = reversedNumber*10 + remainder;
  
 n /=  10;
 
   }
 

printf("Reversed Number = %d", reversedNumber);

  
 printf ("\n");

if(reversedNumber == original)
{
printf ("n is a palindrome");
} 
else
{
printf ("n is not a palindrome");
}

return 0;

}