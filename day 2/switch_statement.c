#include <stdio.h>
int main(void){
    int goat_count=2;
    /*the switch statement evaluates an expression to its integer value
    jumps to the case that corresponds to that value, execution resumes
    from that point onwards, if a break statement is encountered then the
    execution jumps out of the switch*/
    switch(goat_count){
        case 0:
            printf("You have zero goats.\n");
            break;
        case 1:
            printf("You have one goat.\n");
            break;
        case 2:
            printf("You have 2 goats.\n");
            break;
        default:
            printf("You have more than 2 goats.\n");
            break;
    }
    /*in the above example the execution jumps to case 2 and executes from there till it hits the break statement 
    the default label lays down what to be done if no cases match
    switch is often faster to jump to the correct code as compared to if-else equivalent
    if-else can do relational conditionals such as <, >= and other types while switch cannot*/

    /*if a particular case does not include a break statement then the execution falls through
    from the current case to the next, the execution of the next case occurs regardless of the 
    case condition until it comes across a break statement*/
    int a=1;
    switch(a){
        case 1:
            printf("case 1\n");
            //fall through
        case 2:
            printf("case 2\n");
            //fall through
        case 3:
            printf("case 3\n");
            break;
        default:
            return 0;
    }
}