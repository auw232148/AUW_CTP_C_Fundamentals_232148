#include <stdio.h>
#include <cs50.h>
int main ()
{
    float temp=get_float("Enter temperature: ");

    if (temp < 20)
    {
        printf("Cold\n");
    }
    else if (temp <= 30)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }

    return 0;
}
