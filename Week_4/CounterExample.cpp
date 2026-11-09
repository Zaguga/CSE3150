#include <iostream>
#include <vector>

// Doesn't work. Why?

template <class InputIterator,class OutputIterator>
OutputIterator mycopy(InputIterator from, InputIterator to, OutputIterator into) {
    while (from != to) {
        *into = *from;
        ++from;
        ++into;
    }
    return into;
}

int main() {
    using namespace std;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {10,11,12,13};

    mycopy(a.begin(),a.end(),b.end());

    for(int v : b)
        cout << v << " ";
    cout << endl;
    return 0;
}


/*
xxx.end() is not a valid insertion point
output iterators
    can  be used to write to existing elements
    cannot be used to add an element
copy is sound, if the output iterator points to existing elements
*/

//SOLUTION

/*
Have a special "OutputIterator" that...
    INSERTS at the end of the container, adding an element on the fly
        Message *
    PRESENTS itself as an OutputIterator to copy
        Message ++
*/

int A() {
    using namespace std;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {10,11,12,13};

    mycopy(a.begin(), a.end(), back_inserter(b));
                             // ^ KEY PART

    for (int v : b)
        cout << v << " ";
    cout << endl;
    return 0;
}

/*
    hide HOW one iterates
    code identical REGARDLESS of container
    you can have multiple iterators at once
        (think nested loops here!)
*/

int B() {
    using namespace std;
    vector<int> vec = {1,2,3,4,5}; //idk what the code up here is supposed to be, i just did this so it compiles

    cout << endl << "Reverse!" << endl;
    for(vector<int>::reverse_iterator k = vec.rbegin();
        k != vec.rend();
        k++) {
        cout << *k << " ";
    }
    cout << endl;
    return 0;

}

int C() {
    using namespace std;
    vector<int> vec = {1,2,3,4,5}; //idk what the code up here is supposed to be, i just did this so it compiles

    cout << endl << "Reverse!" << endl;
    for(auto k = vec.rbegin();k != vec.rend();k++) {
        cout << *k << " ";
    }
    cout << endl;
    return 0;

}

/*      Auto
    You can use it almost everywhere
        For local variable declaration
        For return types of function
    It makes the code completely generic
    But...
        Not for argument types
*/

template <class Container>
void rprint(Containers& c) {
    for(auto k = c.rbegin();k != c.rend();k++) {
        cout << *k << " ";
    }
    cout << endl;
}
int mainA() {
    vector<int> vec;
    for(int i = 0;i<10;i++){
        vec.push_back(i);
    }
    rprint(vec);
    return 0;
}
int mainB() {
    list<int> vec;
    for(int i=0;i<10;i++) {
         vec.push_back(i);
    }
    rprint(vec);
    return 0;
};
