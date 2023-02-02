#include<stdio.h>
//program to convert celsius temperature to farenheit
int main(){
    float celsius = 37, far;
    far = (celsius * 9 / 5) + 32;
    printf("The value of this celsius temperature in Farenheit is %f", far);
    return 0;
}