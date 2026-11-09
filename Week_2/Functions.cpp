#include <iostream>
using namespace std;

void printGreeting(const string name)
{
    const string greet = "Hello " + name + " !";
    const int width = greet.size();
    const string star(width+4, '*');
    const string row2 = "* " + string(width, ' ') + " *";
    cout << star << endl << row2 << endl
            << "* " << greet << " *" << endl
            << row2 << endl
            << star << endl;
}

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    printGreeting(name);
    return 0;
}