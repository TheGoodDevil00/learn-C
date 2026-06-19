#include <stdio.h>
int main(void){
    /*the if statement is used to control the execution of an expression 
    such that it is only ever executed if the specified condition is true*/
    int x = 13;
    if (x>10)
        printf("%d is greater than 10 \n",x);
    /*we have to enclose the if block inside {} if there
    are multiple lines to occur in the same statement*/
    if (x>12){
        printf("%d is a positive number\n",x);
        printf("%d is greater than 12\n",x);
    }//it is a good practice to use {} regardless to avoid potential confusion
    int i = 10;
    if (i==10){
        printf("%d is 10!!\n",i);
        printf("The value is actually %d\n",i);
    }
    else{
        printf("%d is not 10 :(\n",i);
        printf("This has sadenned me\n");
    }//both the blocks in the if and else condition are completly executed
    int j = 99;
    if (j==10){
        printf("The value of j is %d\n",j);
        printf("j is therefore not equal to 99\n");
    }
    else if(j==20){
        printf("The value of j is %d\n",j);
        printf("j is therefore still not 99\n");
    }
    else if(j==99){
        printf("The value of j is %d\n",j);
        printf("j is finally equal to 99\n");
    }
    else{
        printf("j is neither 10, nor 20 nor 99");
    }
}