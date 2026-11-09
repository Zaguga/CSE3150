#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string vals = {'H', 'e', 'l','l','o'};
    for(char v : vals){
        cout << "v = " << v << endl;
    }
    return 0;
}

/*
    Range Loop Syntax
    - declare a local variable
    - draw it from a sequence (open ranges [x,y) )
    - sequence comes from expression
    for(:){}

*/