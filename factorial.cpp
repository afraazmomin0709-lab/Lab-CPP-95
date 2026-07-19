#include<iostream>
using namespace std;
int main(){
    int number;
    int factorial = 1;
    cout << "Enter number: " << "\n";
    cin >> number;
    for(int i=number;i>=1;i--){
    factorial = factorial * i;
    }
    cout << "The factorial of the given number is: " << "\n" << factorial ;
    return 0;
}