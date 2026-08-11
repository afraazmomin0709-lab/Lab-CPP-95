#include <iostream>
using namespace std;
int main() {
    int *arr;
    int size;
    cout << "Enter the size of an array : "; 
    cin >> size;
    cout << "Creating array" << "\n";
    arr = new int[size];
    cout << "Enter values of array";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Display array : ";
    for(int i=0;i<size;i++){
        cout << " " << arr[i];
    }
    return 0;
}