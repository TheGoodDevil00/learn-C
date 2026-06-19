#include <stdio.h>

int main(void){
    int x,y;
    y+=x>10? 17:37; //if x>10, then add 17 to y otherwise add 37 to y
    //equivalent non-expression
    if (x>10)
        y+=17;
    else
        y+=37;
    printf("The number %d is %s",x, x % 2 == 0? "even":"odd");
}