// write a programm to find  the gratest number entered by the user
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    printf("enter the number1 :");
    scanf("%d", &n1);
    printf("enter the number2 :");
    scanf("%d", &n2);
    printf("enter the number3 :");
    scanf("%d", &n3);
    printf("enter the number4 :");
    scanf("%d", &n4);
    if (n1 > n2 && n1 > n4 && n1 > n3)
    {
        printf("the number %d is greatest", n1);
    }
    else if (n2 > n1 && n2 > n4 && n2 > n3)
    {
        printf("the number %d is greatest", n2);
    }
    else if (n3 > n2 && n3 > n4 && n3 > n1)
    {
        printf("the number %d is greatest", n3);
    }
    else if (n4 > n2 && n4 > n1 && n4 > n3)
    {
        printf("the number %d is greatest", n4);
    }
    return 0;
}