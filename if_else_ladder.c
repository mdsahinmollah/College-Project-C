#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number :  ");
    scanf("%d", &a);
    if (a % 5 == 0 && a % 8 == 0)
    {
        printf("Divisible by both 5 & and 8. ");
    }
    else if (a % 5 == 0 && a % 7 == 0)
    {
        printf("> Divisible by both 5 & 7");
    }
    else if (a % 8 == 0 && a % 7 == 0)
    {
        printf("> Divisible by both 7 & 8. ");
    }
    else if (a % 5 == 0)
    {
        printf("> Divisible by 5 only. ");
    }
    else if (a % 8 == 0)
    {
        printf("> Divisible by 8 only. ");
    }
    else if (a % 7 == 0)
    {
        printf("> Diivisible by only 7 . ");
    }
    else

    {
        printf("Divisible by none.");
    }

    return 0;
}