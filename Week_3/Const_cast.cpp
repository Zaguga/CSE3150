// the const_cast operator is used to modify the const qualifier of a variable.
// it allows programmers to temporarily remove the constancy of an object and make modifications.
// caution must be exercises when using const_cast, as modifying a const object can lead to undefined behavior.

#include <iostream>
using namespace std;

int main() {
    const int number = 5;
    // Pointer to a const int
    const int* ptr = &number;

    // int* nonConstPtr = ptr; if we use this instead of without using const_cast
    //we will get error of invalid conversion

    int* nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 10;

    cout << "Modified number: " << *nonConstPtr;

    return 0;

}