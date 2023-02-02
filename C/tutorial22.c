/*
ARRAY:
->An array is a collection of data items of the same type.
->Items are stored at contiguous memory locations.
->It can also store the collection of derived data types, such as pointers, structures, etc.
->A 1-D array is like a list.
->A 2-D array is like a table.
->The C language places no limits on the number of dimensions in an array.
->Some texts refer to 1-D arrays as vectors, 2-D arrays as matrices, and use the general term arrays when the number of dimensions is unspecified or unimportant.

Why do we need arrays?
->Code that use arrays is sometimes more organized and readable.
->If you were to store the marks in a test of 56 students, creating 56 variables will make program look cluttered and messy. So, the solution is array.
->We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array.
ex: a[0] = 56 , a[1] = 70

Advantage of arrays:
->It is used to represent multiple data items of same type by using only single name. ex: marks[56]
->Accessing an item in a given array is very fast.
->2-D arrays makes it easy in mathematical applications as it is used to represent a matrix.

Disadvantages of arrays:
->Poor time complexity of insertion and deletion operation.
->Wastage of memory since arrays are fixed in size.
->If there is enough space present in the memory but not in contiguous form, you will not be able initialize your array.
->It is not possible to increase the size of the array, once you have declared the array.

Properties of Array:
->Data in an array is stored in contiguous memory locations.
->Each element of an array is of same size.
->Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.

Syntax:
->Data_type name[size];
ex: int marks[200];
    marks[0] = 100;
    marks[1] = 96;
      .
      .
    marks[199] = 101;
->Data_type name[size] = {x,y,z,....};
->Data_type name[rows][columns];  //for 2-d arrays
->We can also initialize the array one by one by accessing it using its index:
ex: name[0] = 0;
*/



// #include <stdio.h>
// int main(){
//     int marks[4];
//     marks[0] = 34;
//     printf("Marks of student 1 is %d\n", marks[0]);
//     marks[0] = 453;
//     printf("Marks of student 1 is %d\n", marks[0]);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int marks[4];   //or int marks[4] = {1,4,5,6};  (it is declaration with initialization)

//     for ( int i = 0; i < 4; i++)
//     {
//         printf("Enter the value of %d element of the array\n", i);
//         scanf("%d", &marks[i]);
//     }

//     for ( int i = 0; i < 4; i++)
//     {
//         printf("The value of %d element of the array is %d\n", i, marks[i]);
//     }
// }



// 2-D ARRAY
#include <stdio.h>

int main()
{
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}

