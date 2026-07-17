#include<iostream>
using namespace std;
int main(){
// swap two no.s without using 3rd variable
    int a = 5;
    int b = 8;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a = " << a << "\n" << "b = " << b << "\n" ;
    return 0;
}