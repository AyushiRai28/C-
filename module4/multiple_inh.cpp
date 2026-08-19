#include <iostream>
using namespace std;

class liquid{
    public:
     void display1(){
        cout<< "\n liquid";
     }
};


class Fuel{
    public:
     void display2(){
        cout<< "\n fuel";
     }
};
class Petrol: public liquid, public Fuel{
    public:
     void display3(){
        cout<< "\n petrol";
     }
};

int main(){
    liquid l;
    Fuel f;
    Petrol p;
    l.display1();
    f.display2();
    p.display1();
    p.display2();
    p.display3();

}