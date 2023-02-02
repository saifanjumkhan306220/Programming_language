/*
QUESTION: Print multiplication tableof a number entered by the user in pretty form.

Example:
Input:
Enter the number you want multiplication table of:
6
Output:
Table of 6:
6x1=6
6x2=12
.
.
6x10=60
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);
    printf("Multiplication table of %d is as follows:\n", num);
    // printf("%dx1=%d\n", num, num*1);
    // printf("%dx2=%d\n", num, num*2);
    // printf("%dx3=%d\n", num, num*3);
    // printf("%dx4=%d\n", num, num*4);
    // printf("%dx5=%d\n", num, num*5);
    // printf("%dx6=%d\n", num, num*6);
    // printf("%dx7=%d\n", num, num*7);
    // printf("%dx8=%d\n", num, num*8);
    // printf("%dx9=%d\n", num, num*9);
    // printf("%dx10=%d\n", num, num*10);
    for ( int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
} 