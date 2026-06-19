#include <stdio.h>
int main(void){
    /*we can chain together or alter conditional operators
    with boolean operators for and, or & not 
    && is and
    || is or
    !  is not*/
    int x,y;
    if (x<10 && y>20)
        printf("Success!\n");
    /*! has higher precedence than other boolean operators
    so we have to use parentheses in the case of not*/
    if (!(x<12))
        printf("x is not less than 12\n");
    //which is the same as
    if(x>=12)
        print("x is not less than 12\n");
}