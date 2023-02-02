#include<iostream>
using namespace std;
ostream& operator<<(ostream& i, int n)
{
    return i;
}
int main()
{
    cout << 5 << endl;
    cin.get();
    return 0;
}

/*
Answer:
5
6
Compilation Error
Runtime error
*/