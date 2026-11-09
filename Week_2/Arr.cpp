#include <iostream>
using namespace std;


int fixed_array(){
    int x[5];
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    x[4] = 5;
    return 0;
}
//size fixed at compile time
//stack allocated
//within function frame (scope)
//size given by range: [0, 5)
//no bounds checking -- what makes C++ dangerous

int char_arr(){
    char s[6];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0'; // null terminator
    cout << s << endl;
}
//same as in C
//last char is \0 null character
//printable with C++ stream (cout)

int char_arr_2(){
    int w = 0;
    char s2[] = "Hello";
    int i = 8;
    s2[i] = 'T';
    cout << "W=" << w << endl;
    //W is beyond array scope, 
    //but it is still on the stack, 
    //so it can be modified
    //which means that the stack is not protected from out-of-bounds access
}

//arrays are held on stack
//arrays have dixed 0-base size
//absolutely no bound checking, IN EITHER DIRECTION


