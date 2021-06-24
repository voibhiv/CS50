#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Initialization
    long numberCard = get_long("Write a number of credit card: ");
    long cloneNum   = numberCard; // to see the first number
    long cloneNum2  = numberCard; // to see the first and second number
    int restTotal   = 0;
    int sumTotal    = 0;
    int aux         = 0;
    int sumSepare   = 0;
    int count       = 1;
    int size        = 0;

    // Working with values of cardNumber
    while (numberCard != 0)
    {

        // Get number and verify is valid
        if (count == 2)
        {
            aux = (numberCard % 10) * 2;
            while (aux > 0)
            {
                sumSepare += aux % 10;
                aux = (int) aux / 10;
            }
            count = 0;
        }
        else
        {
            restTotal += numberCard % 10;
        }

        // Retire the last number
        numberCard = numberCard / 10;
        count++;
        size++;

    }

    sumTotal = sumSepare + restTotal;

    // Receive the first number of numberCard
    while (cloneNum >= 10)
    {
        cloneNum = cloneNum / 10;
    }

    // Receive the first and second number of numberCard
    while (cloneNum2 > 100)
    {
        cloneNum2 = cloneNum2 / 10;
    }

    // Verify last number by sum and the size of card
    printf("%i\n", sumTotal);
    if ((sumTotal % 10) == 0)
    {
        if (size == 15 && (cloneNum2 == 34 || cloneNum2 == 37))
        {
            printf("AMEX\n");
        }
        else
        {
            if (cloneNum == 4 && (size == 13 || size == 16))
            {
                printf("VISA\n");
            }
            else if (cloneNum2 == 51 || cloneNum2 == 52 || cloneNum2 == 53 || cloneNum2 == 54 || cloneNum2 == 55)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    else
    {
        printf("INVALID\n");
    }

}

