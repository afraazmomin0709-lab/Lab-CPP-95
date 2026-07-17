#include<iostream>
using namespace std;
int main(){
//Swap two variable using 3rd variable
    int a = 5;
    int b = 8;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << "\n" << "b = " << b << "\n" ;
    return 0;
}