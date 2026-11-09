#include <iostream>
#include <vector>

void printVectorByConstReference(const std::vector<int>& vec){
    std::cout << "Vector (by const reference): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    // vec[0] = 100; // Uncommenting this line will cause a compilation error
}

int main() {
    std::vector<int> myVector = {1, 2, 3};
    printVectorByConstReference(myVector); //Output: Vector (by const reference): 1 2 3
    return 0;
}

//passing by const reference is generally preferred when you dont need to modify the vector
// as it avoids the overhead of copying the vector while also preventing accidental modifications to the original vector