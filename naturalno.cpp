#include<iostream>
using namespace std;
int main(){
    int num ;
    cout << "Enter number : " ;
    cin >> num ;
    if (num > 0){
        cout << num << " is a natural number" << "\n" ;
    }
    else {
        cout << num << " is not a natural number" << "\n" ;
    }
    return 0;
}