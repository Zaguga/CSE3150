/*
    STL & Iterators

        - the CONTAINER has methods to manufacture iterators
            - pointing at the right place: front | end
            - going in a direction: forward | backward
        
        - an ITERATOR is an object representing an index
            - can move forward
            - can lookup the value it is "indexing to"
            - can be compared with iterators (e.g. to test end!)

*/

// vector example -- end of class 9/24/15
#include <iostream>
#include <vector>
using namespace std;

int A() {
    //
    vector<int> vec;
    for(int i=0;i<10;i++)
        vec.push_back(i);
    for(int i=0;i < vec.size();i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    

    //
    for (vector<int>::iterator k = vec.begin();
        k != vec.end();
        k++) {
            cout << *k << " ";
        }
        cout << endl << "Reverse!" << endl;
        
    //
    for(vector<int>::reverse_iterator k = vec.rbegin();
        k != vec.rend();
        k++) {
            cout << *k << " ";
        }
        cout << endl;
        return 0;
}

