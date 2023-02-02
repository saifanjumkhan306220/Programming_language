/* IN CASE OF LOCAL VARIABLE: If you donot initialise a local variable with a value and if u access it then it may give u any value.

IN CASE OF GLOBAL VARIABLE:
If u donot initialise them they get the default value as 0. If it is integer its going to get the value 0, if it is a boolean variable it will get the value false...... */


// #include<iostream>
// using namespace std;
// int main(){
//     int x;   //local variable
//     cout<<x;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int x;        // Global variable
// int main(){
//     cout<<x;
//     return 0;
// }


// If you want to access a global variable which is initialise below or declare below then you can use extern keyword.

#include<iostream>
using namespace std;
extern int x;        
int main(){
    cout<<x;
    return 0;
}
int x = 10;

