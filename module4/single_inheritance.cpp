#include <iostream>
using namespace std;


class Animal{

    int leg=4;
    public:
      void display1(){
        cout<<"\n Legs = "<< leg;
      }
};

class dog : public Animal{
    bool tail = true ;
    public : 
      void display2(){
        cout<< "\n Tail= "<< tail;
      }

};
 int main(){
    Animal a1;
    dog d1;
    a1.display1();
    d1.display2();
 }