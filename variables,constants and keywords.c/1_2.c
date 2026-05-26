//write a programm to convert temperature from fahrenheit to celsius and vice versa
#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("the temperature in celsius is %f\n", celsius);
    return 0;
}