#include<iostream>
using namespace std;

class point
{
    private:
        double x, y;
    public:
        point (double px, double py)
        {
            x = px, y = py;
        }
};

int main(void)
{
    point a[10];
    point b = point(5,6);
}

/*
Answer:
5 6
0
Prints nothing
Compilation error
*/