// write a programm to determine wether the year entered by the user is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter the year you want to check :");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("the year %d is leap year",year);
            }
            else{
                printf("the year %d is not leap year",year);
            }
        }
        else{
            printf("the year %d is  leap year ",year);
        }
    }
    else{
        printf("the year %d is not leap year",year);
    }
    return 0;
}