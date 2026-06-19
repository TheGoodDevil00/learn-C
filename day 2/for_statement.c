#include <stdio.h>
int main(void){
    /*the for loop is one of the most used loops, it is usually
    used when you know how many imes the loop has to be run in advance
    it can be replaced by a while loop but the for loop looks cleaner*/
    //using while loop
    int j;
    int i = 0;
    while(i<10){
        printf("i is %d\n",i);
        i++;
    }
    //same thing using for loop
    for(j=0;j<10;j++){
        printf("j is %d\n",j);
    }
    //for loop can also be used for running an infinite loop
    for(;;){
        printf("INF\n");
    }
}