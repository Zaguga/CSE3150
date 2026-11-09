
#include <iostream>
// A pointer is a value representing the address of a memory cell

// 3 pools of memory
    // static
        // memory is allocated at compile time
        // memory is read/write
        // one copy alone. not dynamic
        // use the "static" keyword
        // lifetime = entire execution of the program
        // easy to use, restrictive, not thread-friendly

        // address always the same throughout exectuion of the program
    // stack
        // memory comes from for local variables of functions
        // allocated automatically when entering the function
        // de-allocated automatically when you leave the function
        // each recursive invocation gets its own set of local variables
        // its easy to manage (automatic), variable over time, scope is that of function

        // the address is valid as long as the variable is, when function returns, the address is no longer valid
    // heap
        // memory comes from for maual "on-the-fly" allocations
        // two simple APIs
            // new [allocate a block of 'b' bytes]
            // delete [frees a previously allocated block]
        // programmer in charge for both allocation / deallocation
        // lifetime = until you free it

        // adress is valid as long as the variable is, which disappears when de-allocated (freed)

int heap_one()
{
    using namespace std;
    int* px = new int;              // keyword new
    *px = 20;
    cout << "*px = " << *px << endl;
    cout << "px = " << px << endl;
    delete px;                      // keyword delete
    return 0;
}

int heap_many()
{
    using namespace std;
    int* px = new int[10];
    *px = 20;
    cout << "*px = " << *px << endl;
    cout << "px = " << px << endl;
    delete[] px;
    return 0;
}

int heap_itr()
{
    using namespace std;
    int* px = new int[10];
    for (int i = 0; i < 10; i++)
        px[i] = i;
    for (int i = 0; i < 10; i++)
        cout << "px[" << i << "] = " << px[i] << endl;
    cout << "px = " << px << endl;
    delete[] px;
    return 0;
}

int pointer_arithmetic()
{
    using namespace std;
    int* px = new int[10];
    for (int* cx = px; cx < px + 10; cx++)
        *cx = cx - px;
    for (int i = 0; i < 10; i++)
        cout << "px[" << i << "] = " << px[i] << endl;
    cout << "px = " << px << endl;
    delete[] px;
    return 0;
}


// to run file
int main()
{
    heap_one();
    heap_many();
    heap_itr();
    pointer_arithmetic();
    return 0;
}