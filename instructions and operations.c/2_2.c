//write a programm to check whether a number is  divisible by 97 or not.
#include <stdio.h>
int main(){
    int num;
    printf("enter the numbe to be checked\n");
    scanf("%d",&num);
    if(num%97==0){
        printf("%d is divisible by 97",num);

    }
    else{
        printf("%d is not divisible by 97",num);
    }
    return 0;
}