// Standard Template Library
    // Containers
    // Iterators
    // Algorithms

// key idea: abstraction for diverse use

// ex) making a stack -- int, double, char, str, Student (object), ...

// a Template (generic)
#include <iostream>
#include <stack>
int main(){
    using namespace std;
    stack<int> si;
  //stack<string> ss;
  //stack<double> sd;       < --- Can instantiate with any type, and uses same implementation below
  //stack<Monkey> sm;
    for(int i = 0; i < 5; i++) si.push(i);
    while (!si.empty()) {
        cout << "value:" << si.top() << endl;
        si.pop();
    }
    return 0;
}


// True for all STL, 1 implementation, for many different types

/*
        STL Containers
- containers or container classes store objects and data

Sequence Containers: implement data structures that can be accessed in a sequential manner.
        i.e.) vector, list, deque, arrays, forward list
Container Adaptors: are specialized interfaces created on top of other sequential containers. 
They provide a different interface for sequential containers.
        i.e.) queue, priority queue, stack
Associative Containers: implement sorted data structures that can be quickly searched (O(logn) complexity).
        i.e.) set, multiset, map, multimap
Unordered Associative Containers: implement unordered data structures that can be quickly searched.
        i.e.) unordered set, unordered multiset, unordered map, unordered multimap

*/