#include <stdio.h>
int main(){
    int a,b,c;
    a=2;
    b=3;
    c=2;
    printf("The value of a is not equal to b: %d\n", a!=b);
    printf("The value of a is equal to c: %d\n", a==c);
    printf("a&b=%d\n", a&b); //bitwise operator(2 in binary is 10, 3 in binary is 11. So, 10&11 is 10 which is 2 in decimal)
}