#include <stdio.h>
int main(void){
    int a,b;
    a==b; //true if a is equivalent to b
    a!=b; //true if a is not equivalent to b
    a>b;  //true if a is greater than b
    a<b;  //true if a is less than b
    a>=b; //true if a is greater than or equal to b
    a<=b; //true if a is less than or equal to b
    /*NOTE:
    the assignment '=' is used to define or assign a value
    whereas the equivalence operator '==' is a conditional operator used for comparison*/
    //we can use the conditional operators with `if` statements
    if (a<=10)
        printf("Success!\n");
}