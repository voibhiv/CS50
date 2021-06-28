#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    long startSize = get_long("Write the initial of population:");

    while (startSize < 9)
    {
        startSize = get_long("Write the initial of population:");
    }

    // TODO: Prompt for end size
    long endSize = get_long("Write the final of population:");

    while (endSize < startSize)
    {
        endSize = get_long("Write the final of population:");
    }

    // TODO: Calculate number of years until we reach threshold
    int qtdYears = 0;

    while (startSize < endSize)
    {
        startSize = (int) startSize + (int)(startSize / 3) - (int)(startSize / 4);
        qtdYears++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", qtdYears);
}