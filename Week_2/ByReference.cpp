#include <iostream>
#include <vector>

void printVectorByReference(std::vector<int>& vec){
    std::cout << "Vector (by reference): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    vec[0] = 100; // Modifying the original vector
}

int main() {
    std::vector<int> myVector = {1, 2, 3};
    printVectorByReference(myVector);
    std::cout << "Original vector: " << myVector[0] << std::endl; //Output Original vector: 100
    return 0;
}

//this method passes the reference to the original vector
// modifications inside the function DO affect the original vector
