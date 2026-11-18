#include <iostream>
using namespace std;

int main() {
    double pencil, eraser, sharpener;
    
    cout << "enter the price of pencil: ";
    cin >> pencil;
    
    cout << "enter the price of eraser: ";
    cin >> eraser;
    
    cout << "enter the price of sharpener: ";
    cin >> sharpener;
    
    double total = pencil + sharpener + eraser;
    double gst = total * 0.18;
    double billWithGst = total + gst;
    
    cout << "the bill including gst is: " << billWithGst << endl;
    
    return 0;
}