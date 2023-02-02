// #include<iostream> 
// using namespace std;
// int main()
// {
//     string name;
//     cout<< "Enter your name: \n";
//     cin>> name;
//     cout<< "Welcome " << name;
//     return 0;
// }

#include<iostream> 
using namespace std;
int main(){
    int arr[6] = {10, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    return 0;
}
