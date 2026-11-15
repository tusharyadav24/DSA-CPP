#include<iostream>
#include<string>
using namespace std;
    class Car{
        string name;
        string colour;
        public:
        int *mileage;
        Car(string name,string colourValue){  //constructor
           cout<<"constructor are called. object being created\n";
        //    name=nameValue;
         this ->name=name;
         mileage=new int;
         *mileage=12;
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
        Car(Car &original){
            // mileage=original.mileage;//shallow copy
               mileage=new int;//deep copy
               *mileage=*original.mileage;
        }
    };
int main(){
    Car c1("maruti 800","white");
    Car c2(c1);
    cout<<*c2.mileage;
    cout<<c1.getName();

}