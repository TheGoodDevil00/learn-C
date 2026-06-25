#include <stdio.h>

void increment(int a){ //void function so that there is no output at this stage untill it is called
    a++; //post increment operator 
}

int main(void){ //void keyword here states that function does not accept parameters
    int i = 10;
    increment(i); 
    printf("the value of i is %d\n",i);
}
/*the expected output here is 11, but upon running we see it's 10!
this is due to the fact that expressions you pass to functions get
copied onto corresponding parameters, which tells us the parameter 
is a copy and not the original. i is 10 in main() and after that we
pass it to increment(), the corresponding parameter is called a in 
increment(), so the value of i is copied to a,Then we increment 
a to 11 NOT i. When the function is complete all it's local variables 
are discarded(a)  and then we continue to print i which is still 10.  */