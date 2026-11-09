#include <iostream>

int main() {
    int intValue = 10;
    double doubleValue = 5.5;

    //Attempting to assign a double to an int without explicit conversion ...
    //This will result in a compilation error (loss of percision) or a warning, ...
    //depening on the compiler settings and the specific implicit conversion ...
    //In C++, implicit conversion from double to int truncates the decimal part ...
    //which is a form of data loss.
    //int anotherIntValue = doubleValue // This line would typically cause a w...

    //Explicit conversion is required for safe type changes
    int convertedIntValue = static_cast<int>(doubleValue);
    std::cout << "Converted double to int: " << convertedIntValue << std::endl;

    //Casts include:
    // static_cast
    // dynamic_cast
    // const_cast
    // reinterpret_cast
}