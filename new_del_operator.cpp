#include <iostream>
using namespace std;

int main(){
    int *arr;
    int size;

    cout << "Enter size of array: " ;
    cin >> size;

    cout << "Creating an array of size " << size << ".." ;
    arr = new int[size];

    cout << "\nDynamic allocation of memory for array arr is successfull.";
    delete arr ;
return 0;
}