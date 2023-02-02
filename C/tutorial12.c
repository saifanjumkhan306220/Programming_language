/* 
LOOPS: With the use of loops we can print any statement numbers of time. Instead of using printf again and again, we can use loop.

Advantages:
1. Code reusability 
2. Saves time
3. Traversing

Basic Syntax: loop starts-->Check the condition-->exit the loop if condition is false
                                               -->execute the loop if condition is true
                                    
Types of loop: 
1. do while loop
2. while loop
3. for loop
*/

#include <stdio.h>
int main(){
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index = index+1;
    } while (index < num);
    return 0;   
}