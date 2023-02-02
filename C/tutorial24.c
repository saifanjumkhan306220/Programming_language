/* Why is recursion not always good?
   Why was recursive approach slow?

   Iterative approach takes less time as in case of Fibonacci Series it doesn’t call same no. again and again but in Recursive approach it calls same no. again and again i.e. many times.

   RECURSION TREE:
   fib 4 (1 + 2 + 3) = fib 2 (0 + 1 = 1)    fib 3 (1 + 1 = 2)
   fib 2 (0 + 1 = 1) = fib 0 (0)            fib 1 (1)
   fib 3 (1 + 1 = 2) = fib 2 (0 + 1 = 1)    fib 1 (1)


   Recursion is a good approach when it comes to problem solving.
However, programmer needs to evaluate the need and impact of using recursive/iterative approach while solving a particular problem.
In case of Factorial calculation, recursion saved a lot of lines of code.
However in case of Fibonacci Series recursive approach called many functions again and again causing time waste.
 

So, programmer must have to evaluate which approach he/she should use to solve any particular problem. 

*/