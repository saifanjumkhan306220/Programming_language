#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

void func(int a, int b)
{
     
        if(b == 0){
                throw "This value of b will make the product zero. "
                      "So please provide positive values.\n";
        }
        else{
                cout<<"Product of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
        }
}

int main()
{
    try{
               func(5,0);
    }
    catch(const char* e){
            cout<<e;
    }
}

/*Answer:
a. 0
b. 5
c. Product of 5 and 0 is: 0
d. This value of b will make the product zero. So please provide positive values.  (correct)
*/