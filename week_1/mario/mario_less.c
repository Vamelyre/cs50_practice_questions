#include <stdio.h>

int main(void) 
{
    //ask the height of the pyramid
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ( height > 8 || height < 1 );

    //get the number of rows
    for (int i = 0; i < height; i++)
    {
        //gets the number of empty spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // gets the number of hashtags
        for (int j = 0; j <= i; j++)
        {
            printf("#");    
        }

        printf("\n");
    }
}