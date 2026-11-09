#include <iostream>
#include "ECNumbers.cpp"
#include "ECCalculator.h"

int main()
{
  using namespace std;
  // read in an integer n
  // your code here
  int n, s, d, q;
  std::cin >> n;

  // print out the square of it
  // your code here
  std::cout << ECNumbers::ECSquareN(n) << "\n";

  // print out 2n  
  // your code here
  std::cout << ECNumbers::ECDoubleN(n) << "\n";


  // print out 4 times of n by invoking ECCalculator's function
  // your code here
  std::cout << ECFourTimesN(n) << endl;

  return 0;
}
