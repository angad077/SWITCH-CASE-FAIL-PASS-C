// WRITE A PROGRAME TO DETERMINE WHEATHER A CHARACTER ENTER BY THE US IS LOWER CASE OR NOT
// A-B --> 65-90
// a-z --> 97-122
// STATEMENT IS --> (ch >= 97 && ch <= 122)
// PUT IN PROGRAME AND GET YOU ANSWER
#include <stdio.h>

int main()
{
    // a-z --> 97-122 ASCII VALUES
    char ch;
    printf(" Enter your character \n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("It is a lower case character");
    }
    else
    {
        printf(" It is not a lower case character");
    }
    return 0;
}