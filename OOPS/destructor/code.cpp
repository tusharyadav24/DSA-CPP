#include<iostream>
#include<string>
using namespace std;
    class Car{
        string name;
        string colour;
        public:
        int *mileage;
        Car(string name,string colourValue){
           cout<<"constructor are called. object being created\n";
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
               mileage=new int;
               *mileage=*original.mileage;
               this->name=name;
        }
        ~Car(){
            cout<<"deleting object..\n";
            if(mileage!=NULL){
                delete mileage;
                mileage=NULL;
            }
        }
    };

int main(){
    Car c1("maruti 800","white");
    cout<<c1.getName();
}