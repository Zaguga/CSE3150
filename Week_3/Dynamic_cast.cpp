// dynamic_cast <new_type> (expression)
// the dynamic_cast operator is mainly used to perform downcasting
// (converting a pointer/reference of a base class to a derived class).
// it ensures type safety by performing a runtime check to verify the validity of the conversion.

// if the conversion is not possible, dynamic_cast returns a null pointer
// (for pointer conversions) or throws a bad_cast exception (for reference conversions).




/*
#include <iostream>
using namespace std;

//Base class
class Animal{
public:
    virtual void speak() const{
        cout << "Animal speaks." << endl;
    }
    
 // Derived Class
class Dog : public Animal{
public:
    void speak() const override{
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal{
public:
    void speak() const override{
        cout << "Cat meows." << endl;
    }
};

*/
