//calculate the income tax of the employee to the government

#include <stdio.h>
int main()
{
    float income;
    float result;
    printf("enter the amount of income per year in lakhs :");
    scanf("%f", &income);
    if (income >=2 && income < 5)
    {
        result = income * 0.05;
        printf("your tax is %.2f lakhs", result);
    }
    else if (income >= 5 && income < 10)
    {
        result = income * 0.2;
        printf("your tax is %.2f lakhs", result);
    }
    else if (income >= 10)
    {
        result = income * 0.3;
        printf("your tax is %.2f lakhs", result);
    }
    else{
    printf("your tax is 0");
    }
    return 0;
}