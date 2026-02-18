#include <stdio.h>
#include <cs50.h>
int main( )
{
    int numbers[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = get_int("Enter number: ");

        if (numbers[i] > 0)
        {
            count++;
        }
    }

    printf("Positive Numbers Count = %d\n", count);

    return 0;
}
