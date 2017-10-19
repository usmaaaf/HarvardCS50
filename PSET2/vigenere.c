#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Checking for two arguments
    if(argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    // Iterating over each charachter of argv[1] to check if the whole string is alphabetical and if it is alphabetical
    // convert ASCII into Alphabetical indexes.  arl = array length
    int arl = strlen(argv[1]);
    for(int i = 0; i < arl; i++)
    {
        //If non-alphabetical charachter
        if(!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere k where K is alphabetical only\n");
            return 1;
        }

        /* converting argv into alphabetical index solves the issue of upper or lower case key while applying vigenere
         hence less complications.*/
        if(isupper(argv[1][i]))
        {
            argv[1][i] = argv[1][i] - 'A';
        }
        else
        {
            argv[1][i] = argv[1][i] - 'a';
        }
    }

        // prompting user for plain text
    printf("Plain text: ");
    string plain = get_string();

    printf("ciphertext: ");

    // Iterating to apply vigenere cipher over each alphabetical charachter
    for(int j = 0, str = strlen(plain); j < str; j++)
    {
        //if alpha then vigenere will apply or it will print the charachter as it is
        if(isalpha(plain[j]))
        {
            if(isupper(plain[j]))
            {
                int cj = (((plain[j] - 'A') + argv[1][j % arl]) % 26) + 'A'; //turns upper Alphabets into alphabet index applies formula and then returns ascii
                printf("%c", cj);
            }
            else
            {
                int cj = (((plain[j] - 'a') + argv[1][j % arl]) % 26) + 'a'; //turns lower Alphabets into alphabet index applies formula and then returns ascii
                printf("%c", cj);
            }

        }
        else
        {
            printf("%c", plain[j]);
        }
    }
    printf("\n");
    return 0;
}