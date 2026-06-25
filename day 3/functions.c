#include <stdio.h>
/*functions can accept a variety of arguments and return a value.
The arguments and return values are predeclared*/

int plus_one(int n) //this is the definition of the plus one function
{
    return n+1;
}
/*the int before the plus_one indicates the return type
int n indicates that this function takes one int argument
stored in parameter n, A parameter is a special type of local
variable in which arguments are copied*/    
//let's try calling the function in main()

/*we need to define the fucntions we are planning to use before calling them
and the void keyword is used to indicate that the function does not accept arguments*/
 void hello(void){
    printf("Hello World!\n");
 }

int main(void){
    int i = 10,j;
    j = plus_one(i); //this is the 'function call'
    printf("i + 1 is %d\n",j);
    hello(); //this prints Hello world without needing a parameter like the above example
}