/*
    Iterators
        - abstractions for "indexes" into "containers"
    
    simpliest example) an integer, to index into a "flat" C-array


    there is an iterator at the beyond point
    ex) given the array
                  end iterator
                      ⌄
            1 2 3 4 5 []
            ^
    starter iterator

    iterate, and when the starter iterator == end iterator, we are at the end of the data structure!


    Iterator abstraction:
    You can...
        - make the iterator "point" to the BEGINNING
        - make the iterator "point" PAST THE END
        - move the index FORWARD
        - move the index BACKWARD
        - move the index to a RANK




    C-Array Example:
    It fits the requirements
        - sequence has n elements
        - iterator k is simple a variable of type int
        - set at beginning: k = 0
        - set past the end: k = n
        - set at rank i: k = i
        - move forward: k++
        - move backward: k--
        test at end? k == n
*/