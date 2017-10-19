#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        if(name[0] != ' ')
        {
             printf("%c", toupper(name[0]));
        }

        for (int i = 0, str = strlen(name); i < str - 1; i++)
        {
            if (name[i] == ' ')
            {
                if (name[i+1] != ' ')
                {
                    char ini = toupper(name[i+1]);
                    printf("%c", ini);

                }

            }

        }
        printf("\n");  //just for aestethics
    }

}



