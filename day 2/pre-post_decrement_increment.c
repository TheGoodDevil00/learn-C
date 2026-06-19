#include <stdio.h>
int main(void){
    int i;
    i=0;
    i++; //this adds one to i after the expression is evaluated
    //i++ is the same as i+=1
    i--; //this subracts one from i after the expression is evaluated
    //i-- is the same as i-=1
    ++i; //this adds one to i before the expression is evaluated and then uses the new value of i for the function
    --i; //this subracts one from i before the expression is evaluated and then uses the new value of i for the function
    int j,k,l,m;
    j=10;
    k= 5 + j++;
    printf("j is %d and k is %d ",j,k);
    l=10;
    m= 5 + ++l;
    printf("l is %d and m is %d ",l,m);
    /*herein the difference in the output of m and k suggests
    that the function of a pre and post increment or decrement
    operator is different, the former is evaluated after the expression
    is run and the latter before running the expression*/
}