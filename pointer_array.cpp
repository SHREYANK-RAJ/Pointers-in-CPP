#include <iostream>
using namespace std;

int main() {

    int arr[10] = {2, 5, 7}; // partial initialization

    // Different ways to get the address of the first element
    cout << "First element address (arr): " << arr << endl;
    cout << "First element address (&arr[0]): " << &arr[0] << endl;

    // Accessing first element
    cout << "First element value: " << arr[0] << endl;

    // Pointer arithmetic examples
    cout << "*arr: " << *arr << endl;
    cout << "*arr + 1: " << *arr + 1 << endl;
    cout << "*(arr + 1): " << *(arr + 1) << endl;

    // Fun fact: i[arr] works the same as arr[i]
    int i = 2;
    cout << "i[arr]: " << i[arr] << endl;

    // Size comparisons
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    int *ptr = arr;
    cout << "sizeof(ptr): " << sizeof(ptr) << endl;
    cout << "sizeof(*ptr): " << sizeof(*ptr) << endl;
    cout << "sizeof(&ptr): " << sizeof(&ptr) << endl;

    // Addresses of array element and pointer
    cout << "&arr[0]: " << &arr[0] << endl;
    cout << "&ptr: " << &ptr << endl;

    // Pointer increment (arr itself can't be incremented)
    cout << "Before incrementing ptr: " << ptr << endl;
    ptr++;
    cout << "After incrementing ptr: " << ptr << endl;

    return 0;
}
