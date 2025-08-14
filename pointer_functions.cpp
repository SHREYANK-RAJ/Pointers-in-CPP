#include <iostream>
using namespace std;

// Function to display the value a pointer is pointing to
void showValue(int *ptr) {
    cout << "Value via pointer: " << *ptr << endl;
}

// Function to try changing the pointer (won't affect original in main)
void shiftPointer(int *ptr) {
    ptr = ptr + 1; // moves pointer ahead, but only locally
}

// Function to calculate sum of array elements
int arraySum(int arr[], int size) {
    cout << "Size inside function (pointer size): " << sizeof(arr) << " bytes" << endl;
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int number = 5;
    int *ptrNum = &number;

    showValue(ptrNum);

    cout << "Pointer before shifting: " << ptrNum << endl;
    shiftPointer(ptrNum);
    cout << "Pointer after shifting: " << ptrNum << " (unchanged in main)" << endl;

    int nums[5] = {1, 2, 3, 4, 5};
    int result = arraySum(nums, 5);

    cout << "Size outside function (array size): " << sizeof(nums) << " bytes" << endl;
    cout << "Sum of array: " << result << endl;

    return 0;
}
