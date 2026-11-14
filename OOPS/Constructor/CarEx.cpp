#include<iostream>
#include<string>
using namespace std;
    class Car{
        string name;
        string colour;
        public:
        Car(string name,string colourValue){  //constructor
           cout<<"constructor are called. object being created\n";
        //    name=nameValue;
         this ->name=name;
           colour=colourValue;
        }
        void start(){
            cout<<"car has started";
        }
        void stop(){
            cout<<"car has been stopped";
        }
        string getName(){
            return name;
        }
    };
int main(){
    Car c1("maruti 800","white");
    cout<<c1.getName();
}