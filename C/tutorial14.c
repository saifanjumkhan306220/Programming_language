/* 
FOR LOOP:
1. The for loop is used to iterate the statements or a part of the program several times.
2. It is used to traverse the data structures like the array & linked list.
3. It has a little different syntax than while and do while loops.

Syntax:  for(Expression 1; Expression 2; Expression 3) {
         code to be run
         }

Expression 1 is Initialisation
Expression 2 is Condition
Expression 3 is Updation
*/
#include <stdio.h>
int main(){
    int i;
    for ( i = 0; i < 5; i++)   //increment krega conditon check krega print krega
    {
        printf("%d\n", i);
    }
    return 0;
}




#include <stdio.h>
int main(){
    int j,i;
    for(i = 0, j = 0; i < 5; i++)    // we can initialize more than one variable in expression-1
    {
        printf("%d %d\n", i,j);
    }
    return 0;
}

