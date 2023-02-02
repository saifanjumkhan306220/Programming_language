#include<iostream>
#include<string>
using namespace std;
class A{
        mutable int a;
public:
        A(){
               cout<<"A's default constructor called\n";
        }
        A(const A& a){
                cout<<"A's copy Constructor called\n";
        }
};
class B{
    A obj;
public:
    B(){
               cout<<"B's Constructor called\n";
    }
};
int main(int argc, char const *argv[])
{
    B b1;
    B b2;

}

/*Answer:
1. B's Constructor called 
   A's default constructor called 
   B's Constructor called 
   A's default constructor called 

2. B's Constructor called 
   B's Constructor called 

3. A's default constructor called  (correct)
   B's Constructor called 
   A's default constructor called 
   B's Constructor called 

4. A's default constructor called 
   B's Constructor called 
   A's copy Constructor called
*/