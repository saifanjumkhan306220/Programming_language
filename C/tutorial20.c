/*
RECURSION:
->Recursive function or recursion is a process when a function calls a copy of itself to work on a smaller problem.
->Any function which calls itself is called recursive function.
->This makes the line of programmer easy by dividing a given problem into easier problem.
->A termination condition is imposed on such functions to stop them executing copies of themselves forever.
->Any problem that can be solved recursively, can also be solved iteratively.

WHY RECURSION?
->Any problem that can be solved recursively, can also be solved iteratively.
->However, some problems are best suited to be solved using recursion.
->For example, Fibonacci series, Factorial finding etc.

EXAMPLE 1: Factorial Calculation
->The case at which the function doesnot recur is called the base case.
->The instances where the function keeps calling itself to perform a subtask, is called a recursive case.
->For factorial calculation the base case occurs at the parameter value of 0 and 1.

n! = n x n-1 x n-2 x ........x 1
n! = n x (n-1)!

0! = 1! = 1 = base case
5! = 5 x 4!
   = 5 x 4 x 3!
   = 5 x 4 x 3 x 2!
   = 5 x 4 x 3 x 2 x 1!
   = 5 x 4 x 3 x 2 x 1
   = 120 */



//Program to find factorial of any number using recursion(RECURSIVE APPROACH). Note:If i solved this problem using loops then it is a iterative approach.

#include <stdio.h>

int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else{
        return(number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}