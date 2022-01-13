#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height >= 9);
    for (int length = 0; length < height; length++)
    {
        for (int row = 0; row < height - length; row++)
        {
            printf(" ");

        }
        for (int j = 0; j <= length; j++)
        {
            printf("#");

        }
        printf("\n");
    }



}
