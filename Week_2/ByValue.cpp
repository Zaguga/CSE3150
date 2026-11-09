#include <iostream>
#include <vector>

void printVectorByValue(std::vector<int> vec){
    std::cout << "Vector (by value): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    vec[0] = 100; // Modifying the copy
}

int main() {
    std::vector<int> myVector = {1, 2, 3};
    printVectorByValue(myVector);
    std::cout << "Original vector: " << myVector[0] << std::endl; //Output Original vector: 1
    return 0;
}

//this method creates a copy of the vector when passed by value
// modication of the copy does not affect the original vector