#include<iostream>
using namespace std;
//Declaring functions to find the area
float area(float a){
    float pi = 22/7;
    cout << "Area of Circle: "<<pi*a*a;
}
float area(double a, double b){
    cout << "Area of Triangle: "<<0.5*a*b;
}
float area(float a, float b){
    cout << "Area of Rectangle: "<<a*b;
}
int main(){
    int n;
    float radius, length, breadth;
    double base, height;
    cout << "Choose the shape '1 for Circle/ 2 for Triangle/ 3 for Rectangle: ";
    cin >> n;
    if(n == 1){
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area(radius);
    }
    else if(n == 2){
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        area(base, height);
    }
    else if(n == 3){
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout  << "Enter the breadth of the rectangle: ";
        cin >> breadth;
        area(length, breadth);
    }
    else{
        cout << "Invalid Entry..........";
    }
    return 0;
}
