// calculate the area of a circle and modify the sample programm to calculate the volume of a cylinder given its radius and height
#include <stdio.h>
int main()
{
    int radius, height;
    float area, volume;
    printf("enter the value of radius\n");
    scanf("%d", &radius);
    printf("enter the height of cylinde \n");
    scanf("%d", &height);
    area = 3.14 * radius * radius;
    volume = area * height;
    printf("the area of the circle is %f\n", area);
    printf("the volume of the cylinde is %f\n", volume);
    return 0;
}