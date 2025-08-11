#include <iostream>
using namespace std;

int main() {

    // Example: normal variable
    int number = 5;
    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "============================" << endl;

    // Pointer to int
    int *ptrInt = &number;
    cout << "Pointer stores address: " << ptrInt << endl;
    cout << "Pointer dereference: " << *ptrInt << endl;
    cout << "Size of int variable: " << sizeof(number) << " bytes" << endl;
    cout << "Size of int pointer: " << sizeof(ptrInt) << " bytes" << endl;
    cout << "============================" << endl;

    // Pointer to double
    double decimalValue = 5.5;
    double *ptrDouble = &decimalValue;
    cout << "Pointer stores address: " << ptrDouble << endl;
    cout << "Pointer dereference: " << *ptrDouble << endl;
    cout << "Size of double variable: " << sizeof(decimalValue) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(ptrDouble) << " bytes" << endl;
    cout << "============================" << endl;

    // Pointer initialization methods
    int x = 10;
    int *directPtr = &x; // direct init
    cout << "Direct init pointer value: " << *directPtr << endl;

    int *nullPtr = nullptr; // safe null init
    nullPtr = &x;
    cout << "Assigned after null init: " << *nullPtr << endl;
    cout << "============================" << endl;

    // Changing value via pointer
    int y = 15;
    int *modPtr = &y;
    cout << "Before change: " << *modPtr << endl;
    (*modPtr)++;
    cout << "After change: " << *modPtr << endl;
    cout << "============================" << endl;

    // Copying pointers
    int *copyPtr = modPtr;
    cout << "Original pointer address: " << modPtr 
         << " | Copied pointer address: " << copyPtr << endl;
    cout << "Original pointer value: " << *modPtr 
         << " | Copied pointer value: " << *copyPtr << endl;
    cout << "============================" << endl;

    // Pointer arithmetic (moving to next memory block)
    cout << "Pointer before increment: " << copyPtr << endl;
    copyPtr++;
    cout << "Pointer after increment: " << copyPtr << endl;
    cout << "============================" << endl;

    return 0;
}
