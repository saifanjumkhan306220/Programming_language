#include<iostream>
using namespace std;
class Test {
private:
    int x = 10;

public:
    int x = 20;
    Test()
    {
        cout<<x;
    }
};
int main()
{
    Test t;
}

/*
Answer:
10
20
Compilation fails
None of the above
*/