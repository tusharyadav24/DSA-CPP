#include<iostream>
using namespace std;
// Abstraction class
class Shape{ 
  public:
  virtual void draw()=0;  //Abstract  fnx  or pure virtual fnx
};
class Circle: public Shape{
  public:
  void draw(){
    cout<<"draw a circle";
  }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}