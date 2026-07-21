#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum, sub, multi, div;
    cout <<"Enter two no.s:";
    cin >> num1 >> num2 ;
    sum = num1 + num2 ;
    sub = num1 - num2 ;
    multi =  num1 * num2 ;
    div = num1 / num2 ;
    cout << "Sum is : " << sum <<"\n";
    cout << "Substraction is : " << sub <<"\n";
    cout << "Multiplication is : " << multi <<"\n";
    cout << "Division is : " << div <<"\n";
    return 0;
}