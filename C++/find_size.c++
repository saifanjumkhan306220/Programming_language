// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout << sizeof(int) << "\n";
//     cout << sizeof(char) << "\n";
//     cout << sizeof(float) << "\n";
//     cout << sizeof(long long) << "\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 10;
    cout << sizeof(x++) << endl; // this expression is not executed at runtime so, x++ never happens
    cout << x;  // x remains same as 10 bcz sizeof() is compile time operator
}