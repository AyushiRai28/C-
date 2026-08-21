#include <iostream>
using namespace std;

// class s{
//     int a = 23 , b = 45;
//     public :
//      void input(int a , int b){
//         this-> a=a+b;
//         this-> b=a-b;

//     }
//     void output(){
//         cout<<"a= "<<a;
//         cout<<"b= "<<b;
//     }

// };

// int main(){
//     s obj;
//     int a = 5 , b=8;
//     obj.input(a,b);
//     obj.output();
// }


class person{
    int age;
    public :
      person(int x){age = x;}
      void display(){ cout<< "Age = "<< age;}
      person olderperson(person p){
        if (age> p.age)
        return *this;
        else
        return p;

      }
};

int main(){
    person r(35), h(30);
    person o=r.olderperson(h);
    o.display();
}