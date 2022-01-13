#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
        printf("%i\n", height);
    }
    while (height < 1 || height > 8);

    for (int length = 0; length < height; length++)
    {
        for (int row = 0; row <= height - length; row++)
        {
            printf(" ");
        }
        for (int k = 0; k <= length; k++)
        {
            printf("#");
        }
        for (int i = 0; i <= height; i++)
        {

        }
        printf("  ");


        for (int k = 0; k <= length; k++)
        {
            printf("#");
        }
        printf("\n");


    }
    printf("\n");

}
