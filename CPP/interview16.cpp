#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "Welcome to Hacker Earth";
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout<< s << endl;
}

/*
Answer:
Compilation Error
HackerEarth
Welcometo
WelcometoHackerEarth (correct)
*/