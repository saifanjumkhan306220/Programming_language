#include<stdio.h>
const int MAX = 3;
int main(){
    int var[] = {10, 100, 200};
    int i, *ptr;
    ptr = &var[MAX-1];
    for(i = MAX; i>0; i--) {
        printf("Value of var[%d] = %d\n", i-1, *ptr);
        ptr--;
    }
    return 0;
}

/*Answer:
a. 101
b. 200  (value of var[2])
c. 199
d. 201 */