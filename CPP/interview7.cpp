/*
Q. Which of the following concept is represented by the code below?

Answer:
a. Object slicing
b. None of the mentioned
c. Dynamic memory allocation
d. Function overloading
*/

#include<iostream>
using namespace std;

class Base
{
protected:
       int i;
public:
        Base(int a)       { i = a; }
        virtual void display()
        { cout << "I am Base class object, i = " << i << endl; }
};

class Derived : public Base
{
        int j;
public:
        Derived(int a, int b) : Base(a) { j = b; }
        virtual void display()
        { cout << "I am Derived class object, i = " << i << ", j = " << j << endl; }
};

// Global method, Base class object is passed by value
void somefunc (Base obj)
{
    obj.display();
}

int main()
{
    Base b(33);
    Derived d(45, 54);
    somefunc(b);
    somefunc(d);
    return 0;

}