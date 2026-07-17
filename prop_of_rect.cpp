#include<iostream>
using namespace std;
int main(){
//Area of Rectangle
    float Height, Breadth, Area_rectangle, Parameter_rectangle;
    cout << "Enter Height :";
    cin >> Height ;
    cout << "Enter Breadth :";
    cin >> Breadth ;
    Area_rectangle = Height * Breadth;
    cout << "Area of rectangle is : " << Area_rectangle << "\n";
//Parameter of Rectangle
    Parameter_rectangle = (2*Height) + (2*Breadth);
    cout << "Parameter of rectangle is : " << Parameter_rectangle << "\n";
    return 0;
}