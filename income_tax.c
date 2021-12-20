// CALCULATE INCOME TAX BY EMPLOYEE TO THE GOVERNMENT AS PER THE SLABS MENTIONED BELOW
// INCOME SLAB           TAX
// 2.5L - 5L             5%
// 5L - 10L              20%
// ABOVE 10L             30%

// NOTE :- NO TAX BELOW 2.5L
// TAX = 0;
// STATEMENT OF TAX --> {TAX = TAX + 5/100 * (INCOME -250000)} IN CASE OF 2.5L - 5L 
// STATEMENT OF TAX --> {TAX = TAX + 20/100 * (INCOME -500000)} IN CASE OF 5L - 10L 
// STATEMENT OF TAX --> {TAX = TAX + 30/100 * (INCOME -1000000)} IN CASE OF ABOVE  10L
// ABOVE STATEMENT PUT IN PROGRRAME
#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf(" Enter your income \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf(" Your tax is %f \n",tax);
    return 0;
}