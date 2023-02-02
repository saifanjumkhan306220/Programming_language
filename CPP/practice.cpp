#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the input"<<endl;
    cin>>ch;

    if (ch>= 'a' && ch<= 'z')
    {
        cout<< "This is lowercase" <<endl;
    }
    else if (ch>= 'A' && ch<= 'Z')
    {
        cout<< "This is UPPERCASE" <<endl;
    }
    else{
        cout<< "This is numeric" <<endl;
    }
    
}