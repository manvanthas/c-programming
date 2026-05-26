//explain step by step evaluation of 3*x/y-z+k,where x=2, y=3, z=3, k=1.
// Step 1: Evaluate 3*x = 3*2 = 6
// Step 2: Evaluate 6/y = 6/3 = 2
// Step 3: Evaluate 2-z = 2-3 = -1
// Step 4: Evaluate -1+k = -1+1 = 0
#include<stdio.h>
int main(){
    int x=2, y=3, z=3, k=1;
    int result = 3*x/y-z+k;
    printf("The result of the expression 3*x/y-z+k is: %d\n", result);
    return 0;
}