#include <stdio.h>
int main(void){
    /*this statement runs while the condition expression is true */
    int i = 0;
    while(i<=10){
        printf("i is now %d!\n",i);
        i++;
    }
    printf("Execution Complete!");
    //while loop can also be used for infinite loops 
    while(1){
        printf("INF\n");//1 is always true so the while loop runs indefinitely
    }
}