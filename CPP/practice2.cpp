#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;

    int i = 2;

    while (i<n)
    {
        if(n%i!=0){
            cout<< "prime" << endl;
        }
        else{
            cout<< "not Prime"<< endl;
        }
        i = i + 1;
    }
    
}