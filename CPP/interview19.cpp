#include<iostream>
using namespace std;
void swap(int& a, int& b);
int main()
{
    int a = 5, b = 10;
    swap(a,b);
    cout<<a<<b;
    return 0;
}
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<< a << b;
}

// Answer:  105105