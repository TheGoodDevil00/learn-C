#include <stdio.h>
#include <stdlib.h> //for the rand function
int main(void){
    int i = 13;
    while (i<10){
        printf("i is not 10.\n");
    }
    do{
        printf("i is infact less than 10\n");
        i++;
    }while(i<1);
    /*the given expression is false for both the statements but
    the do while block is executed at least once since the evaluation
    occurs after it's ran at least once unlike the while statement*/
    int r;
    do{
        r=rand()%100; //get a random number between 0-99
        printf("%d\n",r);
    }while(r!=13);
    /*this loop prints random numbers between 0-99 until it
    is equal to 13, the do statement here ensure the first run of the loop*/
}