#include<iostream>
#include<cmath>
using namespace std;
int main(){
//Area of Circle
    float Radius, Area_circle, circumference_circle;
    float Pi = 3.14;
    cout << "Enter Radius :";
    cin >> Radius ;
    Area_circle = Pi * pow(Radius,2);
    cout << "Area of Circle is : " << Area_circle << "\n";
//Circumference of Circle
    circumference_circle = 2 * Pi * Radius;
    cout << "Circumference of Circle is : " << circumference_circle << "\n";
    return 0;
}