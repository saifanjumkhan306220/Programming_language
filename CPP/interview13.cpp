#include<bits/stdc++.h>
using namespace std;
class Box {
    protected:
       double width;
};
class SmallBox:Box {
    public:
       void setSmallWidth( double wid );
       double getSmallWidth( void );
};
double SmallBox::getSmallWidth(void) {
    return width;
}
void SmallBox::setSmallWidth( double wid ) {
    width = wid;
}
int main() {
    SmallBox box;
    box.setSmallWidth(5.0);
    cout << "Width of box : "<< box.getSmallWidth() << endl;
    return 0;
}

/*
Answer:
a. Width of box: 0
b. Width of box: 5
c. Compilation Error
d. Runtime Error

*/