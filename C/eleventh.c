//NESTED SWITCH:

#include <stdio.h>
int main(){
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;
        
        default:
            printf("Your marks are not 45");
        }
        break;
    case 13:
    printf("The age is 13\n");
    break;
}
}