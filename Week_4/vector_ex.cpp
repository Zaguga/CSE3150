/*
    vector<T> provides:
        a sequence
        dynamically sized
        ability to add / remove anywhere
        random access
        bounds safety
*/

// build and print
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    for(int i=0;i<10;i++) vec.push_back(i);

    for(int v : vec)    cout << v << " ";
    cout << endl;
    return 0;
}

//sum vector<T>
int sum(vector<int>& vec) {
    int ttl = 0;
    for(int v : vec) ttl += v;
    return ttl;
}

template <class T>
T sum(vector<T>& vec) {
    T ttl;
    for(T v : vec) ttl += v;
    return ttl;
}

