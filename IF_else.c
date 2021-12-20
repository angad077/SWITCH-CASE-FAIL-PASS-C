#include <stdio.h>

int main()
{
    int age;
    int vippass;
    vippass = 1;
    printf("Enter your age\n");
    scanf("%d", &age);
    if ((age >= 18 && age <= 80) || vippass)
    {
        printf(" your age is %d you can drive", age);
    }
    else
    {
        printf("your age is %d you cant drive", age);
    }
    return 0;
}