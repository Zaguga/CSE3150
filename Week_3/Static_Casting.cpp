// static_cast <new_type> (expression)
// the static_cacst operator is the most commonly used casting opterator in C++.
// it performs compile-time type conversation and is mainly used for explicit conversations that are considered safe by the compiler.
// the static_cast can be used to convert between related types, such as numeric types or pointers in the same inheritance hierarchy.

#include <iostream>

int main() {
    using namespace std;

    int num = 10;

    // converting int to double
    double numDouble = static_cast<double>(num);

    // printing data type
    cout <<typeid(num).name() << endl;

    //typecasting
    cout << typeid(static_cast<double>(num)).name() << endl;

    // printing double type t
    cout << typeid(numDouble).name() << endl;

    return 0;
}


double d = 3.14;
int i = static_cast<int>(d); // converts double to int

int* ptr_i = new int(10);
//double* ptr_i1 = static_cast<double*>(ptr_i); // converts int* to double* (unsafe)
void* ptr_v = static_cast<void*>(ptr_i); // converts int* to void*
double* ptr_i2 = static_cast<double*>(ptr_v); // converts void* to double*

class Base {};
class Derived : public Base {};

Derived* ptr_derived = new Derived();
Base* ptr_base = static_cast<Base*>(ptr_derived); // upcasting (safe)
Derived* ptr_derived2 = static_cast<Derived*>(ptr_base); // downcasting (potentially unsafe)
