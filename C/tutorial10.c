/*
SWITCH CASE STATEMENT: 
We can use either if else or switch case as per convience but if else statement is used to choose between two options, but the switch case statement is used to choose between numerous options.

RULE FOR SWITCH STATEMENT :
1. Switch expression must be an int or char.
2. Case value must be an integer or a character.
3. Case must come inside switch.
4. Break is not a must.

Note:If you want that your default statement should print in switch-case statement then don't use break statement and vice-versa.
*/

#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("The age is 3");
        break;
    case 13:
        printf("The age is 13");
        break;
    case 23:
        printf("The age is 23");
        break;
    default:
        printf("Age is not 3, 13, or 23");
        break;
    }
    return 0;
}