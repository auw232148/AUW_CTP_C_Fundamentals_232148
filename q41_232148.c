#include <stdio.h>
#include <cs50.h>
int main()
{
    float values[5] = {2.5f, 3.1f, 4.8f, 1.2f, 9.6f};

    printf("Float Values: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", values[i]);
    }

    printf("\n");
    return 0;
}
