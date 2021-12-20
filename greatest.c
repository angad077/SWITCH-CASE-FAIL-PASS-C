// WRITE A PROGRAME TO FIMD GREATEST OF FOUR NUMBER ENTERED BY USER

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter your number for a\n");
    scanf("%d", &a);
    printf("Enter your number for b\n");
    scanf("%d", &b);
    printf("Enter your number for c\n");
    scanf("%d", &c);
    printf("Enter your number for d\n");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("Your number a is greatest intiger");
            }
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("Your number b is greatest intiger");
            }
        }
    }
    if (c > b)
    {
        if (c > a)
        {
            if (c > d)
            {
                printf("Your number c is greatest intiger");
            }
        }
    }
    if (d > b)
    {
        if (d > c)
        {
            if (d > a)
            {
                printf("Your number d is greatest intiger");
            }
        }
    }
    else
    {
        printf(" All integers are same");
    }
    return 0;
}