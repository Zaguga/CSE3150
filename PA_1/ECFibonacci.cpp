#include <iostream>
#include <map>
using namespace std;
// This function computes the n-th Fibonacci number efficiently
// The Fibonacci sequence is defined as: F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for n >= 2
// The sequence starts as: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
// Your implementation should run in O(n) time complexity, not O(2^n)
long long computeFibonacci(int n)
{
  // n: non-negative integer representing the position in the Fibonacci sequence
  // return: the n-th Fibonacci number
  // your code here
  long long f;
    map<int, long long> dict;
    dict[0] = 0;
    dict[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f = dict[i - 1] + dict[i - 2];
        dict[i] = f;
    }
    return dict[n];
}