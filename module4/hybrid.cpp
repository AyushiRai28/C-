#include <iostream>
using namespace std;

class car{
    public:
     void display1(){
        cout<<"\n car";
     }
};
  

class Fuelcar: public car{
    public:
     void display2(){
        cout<<"\n Fuelcar";
     }
};
  

class Eleccar: public car{
    public:
     void display3(){
        cout<<"\n Eleccar";
     }
};
  

class Hybrid: public Fuelcar, public Eleccar{
    public:
     void display4(){
        cout<<"\n Hybridcar";
     }
};
  
int main(){
    car c;
    Fuelcar f;
    Eleccar e;
    Hybrid h;
    h.display2();
    h.display3();
    h.display4();
   

}
