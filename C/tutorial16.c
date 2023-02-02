/*
CONTINUE STATEMENT: 
1. Used to bring the program control to the next iteration of the loop.
2. The continue statement skips some code inside the loop and continues with the next iteration.
3. It is mainly used for a condition so that we can skip some lines of code for a particular condition.

NOTE: After continue statement it skips all the rest statement below and move to the next iteration*/

#include <stdio.h>
int main(){
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if(age>10)
        {
            continue;
        }
        printf("I am a good boy\n");
        printf("I am a good student \n");
        printf("I am a good son\n");
    }
    return 0;
}