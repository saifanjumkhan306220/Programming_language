// What happens when we have local and global variables with same name? Which variable is accessed when we try to access it
// sol: local variable bcz here comes the concept of scope. When u create a function its create a scope and whatever variable u declare inside that scope they are first accessed
// In general, if u have multiple level of scoping and if u r trying to access a variable, the innermost scope will look first then the outer scope

// #include<bits/stdc++.h>
// using namespace std;
// int x = 20;
// int main(){
//     int x = 10;
//     cout << x;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int x = 20;
int main(){
    int x = 10;
    {
        int x = 30;
        cout << x;
    }
    return 0;
}