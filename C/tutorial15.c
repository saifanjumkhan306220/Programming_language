/* Break statement: 
1. Used to bring the program control out of the loop.
2. The break statement is used inside loops or switch statement. 
3. Break statement can be used with -->loops and Switch case expression*/

#include <stdio.h>
int main(){
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if(age>10)
        {
            break;
        }
    }
    
}