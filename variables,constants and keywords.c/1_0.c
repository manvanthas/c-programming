// write a c programm to calculate the area of a rectangle;
// a.using hard core inputs
// b.using user inputs
#include <stdio.h>
/*
int main()
{
    int length = 10;
    int breadth = 5;
    int result;
    result = length * breadth;
    printf("the area of rectangle is %d\n", result);
    return 0;
}
*/

int main()
{
 int length, breadth, result;
 printf("enter the length of rectangle\n");
 scanf("%d", &length);
 printf("enter the breadth of rectangle\n");
 scanf("%d", &breadth);
 result = length * breadth;
 printf("the area of the rectangle is %d\n", result);
 return 0;
}
 