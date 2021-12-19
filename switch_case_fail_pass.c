// WRITE A PROGRAME TO FIND OUT WHEATHER A STUDENT IS PASS OR FAIL . IF ITS REQUIRED 40% TOTAL AND AT LEAST 33% IN EACH SUBJECT TO PASS ASSUME 3 SUBJECT AND TAKE MARKS AS AN INPUT FROM USER.

#include <stdio.h>

int main()
{
    int Science, Math, English;
    float total;
    printf(" Enter your Science number\n");
    scanf("%d", &Science);
    printf(" Enter your Math number\n");
    scanf("%d", &Math);
    printf(" Enter your English number\n");
    scanf("%d", &English);
    total = (Science + Math + English) / 3;
    if ((total < 40) || 33 > Science || 33 > Math || 33 > English)
    {
        printf("Your total is %f you are fail", total);
    }
    else
    {
        printf("Your total is %f you are pass", total);
    }

    return 0;
}