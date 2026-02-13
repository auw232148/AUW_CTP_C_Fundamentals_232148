#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 50; i >= 0; i -= 5)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
