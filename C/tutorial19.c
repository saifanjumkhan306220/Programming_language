/*
Function in C:
->Functions are used to divide a large C program into smaller pieces.
->A function can be called multiple times to provide reusability & modularity to the C program.
->Also called procedure or subroutine.

Syntax:  return_type function_name(data_type parameter1, data_type parameter2,......){
         code to be executed
         }

Advantages:
->We can avoid rewriting same logic through functions.
->We can divide work among programmers using functions.
->We can easily debug a program using functions.

Declaration, definition & call:
->A function is declared to tell a compiler about its existence.
->A function is defined to get some task done.
->A function is called in order to be used.

example--  int printstar();   //function declared
           main(){
            printstar();     //function call
           }
          int printstar(){   //function used
            printf....       //actual implementation

            return 0;
          }

TYPES OF FUNCTION:
1. Library functions: Functions included in C header files. ex-printf()
2. User defined functions: Functions created by C programmer to reduce complexity of a program*/



//With Arguments and With return value:
 #include <stdio.h>
 int sum(int a, int b)    /*function declare
                          int is return value. int a and int b is arguments*/
 {
     return a + b;       // If i put these (39-43) set of codes in last it gives error bcz we write function in last and call first which is impossible.
 }
 int main()
 {
     int a, b, c;
     a = 9;
     b = 82;
     c = sum(a, b);
     printf("The sum is %d\n", c);
     return 0;
 }




// With Arguments and without return value:
#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(7);
    return 0;
}




// Without Arguments and with return value:
#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    printf("The number entered is %d\n", c);
    return 0;
}
