//Fully qualified names
#include <iostream>
int A()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

//Local imports
int B()
{
    using namespace std;
    cout << "Hello world!" << endl;
    return 0;
}

//Global imports
using namespace std;
int C()
{
    cout << "Hello world!" << endl;
    return 0;
}