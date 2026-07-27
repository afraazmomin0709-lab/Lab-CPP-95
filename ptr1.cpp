#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    int **ptrr = &ptr;
    cout << "value of x is " << x << "\n";
    cout << "value of ptr is " << ptr << "\n";
    cout << "value of *ptr is " << *ptr << "\n"; 
    cout << "Address of x is " << &x << "\n";
    cout << "value of **ptr is " << &ptr << "\n";
}