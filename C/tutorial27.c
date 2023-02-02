Passing Arrays As Function Arguments: C

In C programming, there are various problems which requires passing more than one variable of the same type to a function. For example, consider a function in which we have to pass the marks of 70 students. Such a function requires 70 numbers to be passed as the actual parameters from the main function. Here, instead of declaring 70 different numbers and then passing them as an argument into the function, we can declare and initialize an array and pass that into the function. This will resolve all the complexity and make the code easy to read.

There are two ways of passing array to a function as argument:

Declaring Function with array as a parameter
We can pass the one dimentional and multidimensional array in function as an argument. There are multiple ways to pass one-dimensional or two-dimensional arrays as arguments in function. We pass the array to a function to make it accessible within the function. When we pass an entire array to a function, then the function can access all the elemnts of the array. Single array elements can also be passed as arguments, it could be a sized or unsized array. This can be done in the same way as we pass variables to a function. Following are the syntax of passing array as an argument.

-->Formal parameters as an unsized array
void myfunc (int arr[]) {}
-->Formal parameters as a sized array
void myfunc (int arr [100]) {}
-->Formal parameters as a two dimensional array