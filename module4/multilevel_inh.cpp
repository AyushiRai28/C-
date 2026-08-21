#include <iostream>
using namespace std;

class p{
    public:
     void display(){
         cout<< "\n person";
     }
};
 
class m : public p{
    public:
    void display1(){
         cout<< "\n mother";
     }
};
class d : public m{
    public:
    void display2(){
         cout<< "\n daughter";
     }
};


int main(){
    p p1;
    m m1;
    d d1;
    p1.display();
    m1.display();
    m1.display1();
    d1.display();
    d1.display1();
    d1.display2();
}
