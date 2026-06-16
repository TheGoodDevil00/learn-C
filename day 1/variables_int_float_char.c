#include <stdio.h>
int main(void){
    int i=20; //used for storing integers
    float f=3.14; //used for decimal numbers
    char *s= "Hello World!"; // char *('char pointer) is the string type

    printf("%s i=%d and f=%f!\n",s, i, f);
    /*we need to use string operators to pass an argument to a variadic function
    such as the printf function(which means that it can accept a variable number of
    arguments), this tells the function about the variable type */
}