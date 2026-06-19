#include <stdio.h>
int main(void){
    /*this operators tells us the size(in bytes) that a particular
    variable or a data type uses in memory. More particularly
    it tells us the size that the particular expression uses
    in memory */
    // %zu is the format specifier for the type size_t
    int a = 999;
    printf("%zu\n",sizeof a); //this prints 4
    printf("%zu\n", sizeof (2+7)); //this prints 4
    printf("%zu\n", sizeof (1.0+2)); //this prints 8
    printf("%zu\n", sizeof 3.14); //this prints 8

    printf("%zu\n", sizeof (int));
    printf("%zu\n", sizeof(double));
    //use %zd for negative size_t values
}