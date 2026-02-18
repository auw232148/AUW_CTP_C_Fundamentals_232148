#include <stdio.h>
#include <cs50.h>
int main ()
{
    int age=get_int("Enter age: ");
    int citizen=get_int("Are you citizen? (1=Yes, 0=No): ");

    if (age >= 18)
    {
        if (citizen == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not Eligible (Not Citizen)\n");
        }
    }
    else
    {
        printf("Not Eligible (Under Age)\n");
    }

    return 0;
}
