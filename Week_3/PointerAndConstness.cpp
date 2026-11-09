// const keyword defines a constant 
// makes entity read-only, cannot be modified after initialization

#include <iostream>

int ex_1(){
    using namespace std;
    int x = 10;
    const int* px = &x; // pointer to a constant integer
    cout << "px = " << px << endl;
    cout << "*px = " << *px << endl;
    //*px = 20; // error: cannot modify the value through a pointer to const
    return 0;
}

int ex_2(){
    using namespace std;
    int x = 10;
    int* const px = &x; // constant pointer to an integer
    cout << "px = " << px << endl;
    cout << "*px = " << *px << endl;
    *px = 20; // valid: can modify the value through a constant pointer
    //px = px + 1; // error: cannot change the address stored in a constant pointer
    return 0;
}

// either entity can be constant
// the pointer
// the thing
// or both [cont int* cont x]


// ------------------ SPIRAL RULE ----------------------
// 1. find the identifier (the variable/function name)
// 2. move right: if you see () its a function, if you see [] its an array
// 3. move left: if you see * its a pointer
// 4. resolve parentheses first
// 5. continue spiraling outward until you've consumed the whole declaration


// ------------------ EXAMPLES ----------------------
// char const *a[10]
// 1. start at a
// 2. move right -> [10] -> "a is an array of 10..."
// 3. move left -> * -> "...pointers to..."
// 4. continue left -> char const -> "...constant characters"
// 5. final: "a is an array of 10 pointers to constant characters"

//char *str[10]; = str is an array 10 of pointers to char

//char *(*fp)( int, float *); = fp is a pointer to a function passing an int
//and a pointer to float returning a pointer to a char

//void (*signal(int, void (*fp)(int)))(int); = signal is a function passing an int and a pointer
// to a function pass an int returning nothing (void) returning a pointer to a function passing
// and int returning nothing (void)