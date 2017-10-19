#define _XOPEN_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main(void)
{
    if(argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    str salt = "50";

    printf("%s\n",crypt(key,salt));
    exit(0);
}