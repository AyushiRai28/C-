#include <iostream>
using namespace std;


class Animal{


    public:
      void display1(){
        cout<<"\n Animal";
      }
};

class dog : public Animal{
   
    public : 
      void display2(){
        cout<< "\n dog";
      }

};
class cat : public Animal{
   
    public : 
      void display3(){
        cout<< "\n cat";
      }

};
 int main(){
    Animal a1;
    dog d1;
    cat c1;
    a1.display1();
    d1.display2();
    d1.display1();
    c1.display1();
    c1.display3();
 }