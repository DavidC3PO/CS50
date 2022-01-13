#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    int cents;

    do
    {
        float dollars = get_float("Change: ");
        cents = round(dollars * 100);
    }
    while (cents <= 0);

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickles = ((cents % 25) % 10) / 5;
    int penies = ((cents % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickles + penies);


}
