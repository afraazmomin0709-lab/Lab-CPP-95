#include <iostream>
using namespace std;

int area(int);
int area(int, int);
float area(float);

int main(){
    cout << "Area of Square (side - 5) = "<< area(5) << "\n";
    cout << "Area of Rectangle (length = 5, breadth = 10) = "<< area(5,10) << "\n";
    cout << "Area of Circle (radius = 5.5) = "<< area(5.5f) << "\n";
    return 0;
}
int area (int side){
    return(side*side);
}
int area(int length, int breadth){
    return(length*breadth);
}
float area(float radius){
    return(3.14f*radius*radius);
}