#include<iostream>
#include<string>
using namespace std;
class Animal{
 public:
   string color;
   void eat(){
    cout<<"eats..\n";
   }
   void breathe(){
    cout<<"breathes..\n";
   }
};
class Fish:public Animal{
    public:
    int fins;
    void swim(){
        cout<<"swims..\n";
    }
};
int main(){
    Fish f1;
    f1.fins=8;
    f1.swim();
    cout<<f1.fins;
    f1.eat();
    f1.breathe();
    return 0;
}