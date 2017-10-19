#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // prompting user to enter two arguments only
   if (argc == 2)
   {
       // changing argv into integer get the key
       int k = atoi(argv[1]);

       // prompting user for plain text
       printf("Plain text: ");
       string plain = get_string();

       printf("ciphertext: ");

       // Iterating to apply caesar cipher over each alphabetical charachter
       for(int i = 0, str = strlen(plain); i < str; i++)
       {
           if(isalpha(plain[i]))
           {
               if(isupper(plain[i]))
               {
                  int cyp = (((plain[i] - 'A') + k) % 26) + 'A';
                  printf("%c", cyp);

               }
               else
               {
                   int cyp = (((plain[i] - 'a') + k) % 26) + 'a';
                   printf("%c", cyp);

               }
           }
       }

       // succesfully ciphered the context
       printf("\n");
       return 0;

   }

   // // if user doesn't enters the correct number of arguments on command line
   return 1;
   printf("Enter two arguments './caesar Number' ");


}

