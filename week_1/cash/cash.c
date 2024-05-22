#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed:");
    }
    while (change < 0); // gets the amount of change owed from the user

    int coins[] = {25, 10, 5, 1}; // where the coin values are stored

    int num_of_coins = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        num_of_coins += change / coins[i];
        change %= coins[i];
    }

    printf("%d\n", num_of_coins);
}
