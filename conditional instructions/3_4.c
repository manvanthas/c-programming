//write a programm to check wether ths a character entered by user is lowercase or not
#include<stdio.h>
int main(){
    char character;
    printf("entert he character to be checked :");
    scanf("%c",&character);
    if(character>='a' && character<='z'){
        printf("the %c is lower case letter ",character);
    }
    else{
        printf("the %c is not lower case letter ",character);
    }
    return 0;
}