//write a programm to calculate simple interest fore a set of valuews repesenting principal ,number of years and rate of interest.
#include <stdio.h>
int main()
{
    float principal, rate, time, simple_interest;
    printf("enter the principal amount\n");
    scanf("%f", &principal);
    printf("enter the rate of interest\n");
    scanf("%f", &rate);
    printf("enter the time in years\n");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("the simple interest is %f\n", simple_interest);
    return 0;
}