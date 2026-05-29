// write a programm to determine wether a student has passed or failed . to pass,a student requires a total of 40% and at least 33% in each subject. assume that there are three subjects and take marks as input from user.
#include <stdio.h>
int main()
{
    int m1, m2, m3;
    char student_name[25];
    float avg;
    printf("enter the name of the student :");
    scanf("%25s", &student_name);
    printf("enter the marks of the student :");
    scanf("%d %d %d", &m1, &m2, &m3);
    avg = (m1 + m2 + m3) / 3.0;
    if (m1 < 33 || m2 || 33 || m3 < 33)
    {
        printf("you failed in exam not in life");
    }
    else if(avg<40){
        printf("you have failed better luck next time ");
    }
    else
    {
        printf("you have passed with %f percentage", avg);
    }
    return 0;
}