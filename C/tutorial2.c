#include <stdio.h>
int main(){
    int a,b;
    printf("Enter number a\n");
    scanf("%d", &a);     //scanf is the function in stdio.h which helps to take innput from the user
    printf("Enter number b\n");
    scanf("%d", &b);    //ampersand a and b (&a,&b) is address of a and b. Value stores in address of a which user take input from keyboard       %d is format specifier for int data type. Format specifier is a way to tell the compiler what type of data in a variable during taking input displaying output to the user
    return 0;
}