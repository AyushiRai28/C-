#include <iostream>
using namespace std;

class student{
    public:
     int roll = 24;
};
class test{
    public:
       int maths = 9 ;
       int chemistry = 9 ;
       int physics = 9 ;
       int cpp = 9 ;
       int python = 9 ;
};

class result : public student , public test{
    public:
     void display(){
        cout<<"\n Roll no : "<< roll;
        cout<<"\nMarks in maths : "<< maths;
        cout<<"\nMarks in physics : "<< physics;
        cout<<"\nMarks in chemistry : "<< chemistry;
        cout<<"\nMarks in cpp : "<< cpp;
        cout<<"\nMarks in python : "<< python;
        cout<<"\nMarks in python : "<< python;
        cout<<"\ntotal Marks : "<< (maths+physics+chemistry+cpp+python);
        cout<<"\npercentage : "<<  (maths+physics+chemistry+cpp+python)*2;
        
    }

};

int main(){
    result r1;
    r1.display();
}