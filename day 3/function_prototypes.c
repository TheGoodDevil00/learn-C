#include <stdio.h>
int prot(void); //this is the prototype

int main(void){
    int i;
    //we can call prot() here before it's definition
    //as the prototype has been declared above
    i = prot();
    printf("%d\n",i);
}
int prot(void){
    return 2345;
}