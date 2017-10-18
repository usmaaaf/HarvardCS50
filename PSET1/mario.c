#include <cs50.h>
#include <stdio.h>

int main(void) {
    int height;  //initialising height
    do  // do loop as a prompt for no negative integers
    {
        printf("Height: ");
        height = get_int();

    }
    while (height < 0 || height >= 24); // height between 0and 23 only


    for (int i = 0; i < height; i++) // for loop to print multiple lines
    {
        for (int j = 1; j < height - i; j++ ) //For loop for space
        {
            char space = ' ';
            printf("%c", space);
        }
        for (int k = 0; k < i + 1; k++ ) //for loop for #
        {
            char hash = '#';
            printf("%c", hash);
        }

        printf("  ");

        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        printf("\n");


    }
}
