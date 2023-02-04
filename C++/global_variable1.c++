//With the help of "extern" keyword we can access a global variable which is initialize below and declare below
#include<bits/stdc++.h>
using namespace std;
extern int x;
int main(){
    cout << x;
    return 0;
}
int x = 10;