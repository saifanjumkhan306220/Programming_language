#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class A
{
    int a;
  public:
    A(){}
};
class B: public A
{
    int b;
  public:
    B(){}
};

void func()
{
    B b;
    throw b;
}
int main()
{
    try{
          func();
    }
    catch(B*b){
        cout<<"Caught B Class\n";
    }
    catch(A a){
        cout<<"Caught A Class\n";
    }
}

/*Answer:
a. Caught B Class
b. Compile-time error
c. Run-time error
d. Caught A Class (correct) */