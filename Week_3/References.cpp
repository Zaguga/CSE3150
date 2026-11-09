/*
- serves the same surpose as pointers
- cleaner syntax
- stricter semantics
- can be mixed with pointers
- can be mixed with constness
*/
#include <iostream>
int main() {
    using namespace std;
    int x = 10;
    //int &y = x;
    const int &y = x;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    x = 20;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "&x = " << &x << endl;
    cout << "&y = " << &y << endl;
    return 0;
}
// here y is our reference to x, and we made it const


/*
    Where does it help?
*/
using namespace std;
void sumOf(string a, int& ttl) {
    ttl = 0;
    for(int i = 0; i < a.size(); i++){
        ttl += a[i];
    a[0] = 100;
    }
}
int mainb(){
    string x = {'H', 'e', 'l', 'l', 'o'};
    int s;
    sumOf(x,s);
    cout << "s = " << s << endl;
    cout << "x = " << x << endl;
    return 0;
}

/*
    what about getting rid of the ttl argument?
    can references still help?
*/
using namespace std;
int sumOf(string& a) {
    int ttl = 0;
    for(int i = 0; i < a.size(); i++){
        ttl += a[i];
    return ttl;
    }
}
int mainc(){
    string x = {'H', 'e', 'l', 'l', 'o'};
    int s = sumOf(x);
    cout << "s = " << s << endl;
    cout << "x = " << x << endl;
    return 0;
}

/*
    vs. Pointers?
*/

using namespace std;
int sumOf(string* a) {
    int ttl = 0;
    for(int i = 0; i < (*a).size(); i++){
        ttl += (*a)[i];
    return ttl;
    }
}
int mainc(){
    string x = {'H', 'e', 'l', 'l', 'o'};
    int s = sumOf(&x);
    cout << "s = " << s << endl;
    cout << "x = " << x << endl;
    return 0;
}

