#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p;
    p=(int*) calloc(3, sizeof(int));
    printf("Enter first number\n");
    scanf("%d", p);
    printf("Enter second number\n");
    scanf("%d", p+2);
    printf("%d%d", *p, *(p+2));
    free(p);
}

/*Answer:
a. 56
b. 57
c. Error
d. Address of the location where the two numbers are stored
*/