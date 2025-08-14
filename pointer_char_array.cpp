#include <iostream>
using namespace std;

int main() {

    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "numbers array address: " << numbers << endl;

    char word[6] = "abcde";
    cout << "word: " << word << endl; // prints the string until '\0'

    char* ptrWord = word;
    cout << "ptrWord: " << ptrWord << endl; // same as above

    char letter = 'z';
    char* ptrLetter = &letter;
    cout << "ptrLetter: " << ptrLetter 
         << "   (may show garbage after 'z' until null found)" << endl;

    return 0;
}
