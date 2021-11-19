#include<iostream>
using namespace std;
class Box{
    public:
    double length;
    double breadth;
    double hieght;
};
int main(){
Box Box1;
Box Box2;
double volume=0.0;
//box 1 values
Box1.length = 10;
Box1.breadth = 20;
Box1.hieght = 30;
//box 2 values
Box2.length = 5;
Box2.breadth = 25;
Box2.hieght = 45;

volume = Box1.length*Box1.breadth*Box1.hieght;
cout<<"Volume of box 1"<<volume<<endl;
volume = Box2.length*Box2.breadth*Box2.hieght;
cout<<"Volume of box 2"<<volume<<endl;
return 0;
}
