#include <stdio.h>

int main()
{
    int n, x;
    int ones = 0, twos = 0, threes = 0, fours = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == 1) ones++;
        else if (x == 2) twos++;
        else if (x == 3) threes++;
        else if (x == 4) fours++;
    }

    int taxis = 0;


    taxis += fours;

    int match = (threes < ones) ? threes : ones;
    taxis += match;
    threes -= match;
    ones -= match;


    taxis += threes;


    taxis += twos / 2;
    twos = twos % 2;

    if (twos == 1)
    {
        taxis += 1;
        if (ones >= 2) ones -= 2;
        else ones = 0;
    }


    if (ones > 0)
    {
        taxis += (ones + 3) / 4;
    }

    printf("%d\n", taxis);
    return 0;
}
